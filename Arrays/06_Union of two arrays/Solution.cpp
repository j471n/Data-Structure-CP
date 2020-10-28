/*
 *  Name - Jatin Sharma
 *  Date - Oct, 28, 2020
 *  Link - https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0
 */

#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    int m, n, s;

    while (testCases--)
    {
        cin >> m >> n;
        unordered_set<int> set;

        for (size_t i = 0; i < m + n; i++)
        {
            cin >> s;
            set.insert(s);
        }

        cout << (int)set.size() << endl;
    }
    return 0;
}