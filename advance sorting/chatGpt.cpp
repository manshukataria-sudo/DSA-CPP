#include <bits/stdc++.h>
#include <thread>
#include <atomic>

using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void findPrimes(long long start, long long end, atomic<long long> &count) {
    for (long long i = start; i <= end; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    const long long LIMIT = 100000000; // increase to stress CPU
    int threads = thread::hardware_concurrency();

    vector<thread> workers;
    atomic<long long> primeCount(0);

    long long chunk = LIMIT / threads;

    for (int i = 0; i < threads; i++) {
        long long start = i * chunk + 1;
        long long end = (i == threads - 1) ? LIMIT : (i + 1) * chunk;

        workers.emplace_back(findPrimes, start, end, ref(primeCount));
    }

    for (auto &t : workers) {
        t.join();
    }

    cout << "Total primes found: " << primeCount << endl;

    return 0;
}