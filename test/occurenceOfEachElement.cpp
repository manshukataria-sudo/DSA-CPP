#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    int a[size];
    cout << "Enter the elements of array : " << endl; // enter the array is 0's 1's and 2's
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int arr[3] = {0, 0, 0};
    for (int i = 0; i < size; i++)
    {
        if (a[i] == 0)
            arr[0]++;
        else if (a[i] == 1)
            arr[1]++;
        else
            arr[2]++;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << i << " has appeared " << arr[i] << " times" << endl;
    }
}