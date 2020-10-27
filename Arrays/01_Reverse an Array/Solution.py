'''
 *  Name - Jatin Sharma
 *  Date - Oct, 27, 2020
 *  Link - https://practice.geeksforgeeks.org/problems/reverse-an-array/0
'''

testCases = int(input())
arr = []
while testCases > 0:
    size = map(int, input())
    for i in range(1):
        arr = list(map(int, input().split()))

    arr.reverse()
    for i in arr:
        print(i, end=" ")
    print()
    testCases -= 1