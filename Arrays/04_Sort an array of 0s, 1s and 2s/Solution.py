'''
 *  Name - Jatin Sharma
 *  Date - Oct, 27, 2020
 *  Link - https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0
'''

testCases = int(input())

while testCases>0:
    size = int(input())
    arr = list(map(int, input().split()))

    for i in range(0, size):
        for j in range(i+1, size):
            if arr[i] > arr[j]:
                arr[i], arr[j] = arr[j], arr[i]

    print(*arr)
    testCases -=1