#include <iostream>
#include <string>
using namespace std;
string skipChar(string str, char skip)
{
    if (str.size() == 1 && str[0] != skip)
    {
        return str;
    }
    if (str.size() == 1 && str[0] == skip)
    {
        str.pop_back();
        return str;
    }

    int mid;
    if (str.size() % 2 == 0)
        mid = str.size() / 2;
    else
        mid = str.size() / 2 + 1;
    string fHalf = "", sHalf = "";
    for (int i = 0; i < mid; i++)
    {
        fHalf.push_back(str[i]);
    }
    for (int i = mid; i < str.size(); i++)
    {
        sHalf.push_back(str[i]);
    }
    string removed1 = skipChar(fHalf, skip);
    string removed2 = skipChar(sHalf, skip);
    return removed1 + removed2;
}

int main()
{
    string str = "aan meri jaan aaj kamayenga kal khayenga na meri jaan";
    cout << skipChar(str, 'a') << endl;
}