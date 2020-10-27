'''
 *  Name - Jatin Sharma
 *  Date - Oct, 27, 2020
 *  Link - https://practice.geeksforgeeks.org/problems/maximum-and-minimum-of-array-elements/0
'''

testCases = int(input())
arr = []
while testCases > 0:
    size = int(input())
    for i in range(1):
        arr = list(map(int, input().split()))

    MAX = max(arr)
    MIN = min(arr)
    print(MAX, MIN)
    testCases -=1