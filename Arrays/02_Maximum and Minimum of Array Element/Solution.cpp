/**
 *  Name - Jatin Sharma
 *  Date - Oct, 27, 2020
 *  Link - https://practice.geeksforgeeks.org/problems/maximum-and-minimum-of-array-elements/0
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

        int MAX = arr[0], MIN = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] >= MAX)
            {
                MAX = arr[i];
            }
            else if (arr[i] <= MIN)
            {
                MIN = arr[i];
            }
        }
        cout << MAX << " " << MIN << endl;
    }
    return 0;
}
