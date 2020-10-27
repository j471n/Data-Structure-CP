/**
 *  Name - Jatin Sharma
 *  Date - Oct, 27, 2020
 *  Link - https://practice.geeksforgeeks.org/problems/reverse-an-array/0
**/

#include <iostream>
using namespace std;

int main()
{

    int testCases, size;
    cin >> testCases;
    int arr[100];

    while (testCases--)
    {
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        int temp;
        int f_index = 0, l_index = size - 1;

        while (f_index < l_index)
        {
            temp = arr[f_index];
            arr[f_index] = arr[l_index];
            arr[l_index] = temp;
            f_index++;
            l_index--;
        }

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
