/*
 *  Name - Jatin Sharma
 *  Date - Oct, 28, 2020
 *  Link - https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}