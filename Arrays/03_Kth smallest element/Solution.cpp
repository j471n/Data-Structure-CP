/**
 *  Name - Jatin Sharma
 *  Date - Oct, 27, 2020
 *  Link - https://practice.geeksforgeeks.org/problems/kth-smallest-element/0
**/

#include <iostream>
#include <algorithm>
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
        sort(arr, arr+size);

        int index;
        cin >> index;
        cout << arr[index-1] << endl;
    }
    return 0;
}