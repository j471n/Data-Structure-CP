'''
 *  Name - Jatin Sharma
 *  Date - Oct, 28, 2020
 *  Link - https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0
 '''

for _ in range(int(input())):
    n, m = (int(i) for i in input().split())
    arr1 = list(map(int, input().strip().split()))
    arr2 = list(map(int, input().strip().split()))
    print(len(set(arr1 + arr2)))
