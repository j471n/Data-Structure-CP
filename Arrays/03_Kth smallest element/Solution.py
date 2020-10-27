'''
 *  Name - Jatin Sharma
 *  Date - Oct, 27, 2020
 *  Link - https://practice.geeksforgeeks.org/problems/kth-smallest-element/0
'''

testCases = int(input())
arr = []
while testCases > 0:
    size = int(input())
    
    for i in range(1):
        arr = list(map(int, input().split()))
        
    arr.sort()
    index = int(input())
    
    print(arr[index-1])
    testCases -= 1
