/**
 *  Name - Jatin Sharma
 *  Date - Oct, 27, 2020
 *  Link - https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0
**/

#include <iostream>
using namespace std;

int main()
{
    int testCases, size;
    cin >> testCases;

    while (testCases--)
    {
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        int temp = 0;
        for (int i = 0; i < size; i++)
        {
            int min = arr[i];
            for (int j = i; j < size; j++)
            {
                if (min > arr[j])
                {
                    temp = min;
                    min = arr[j];
                    arr[j] = temp;
                    j--;
                }
            }
            cout << min << " ";
        }
        cout << endl;
    }
    return 0;
}