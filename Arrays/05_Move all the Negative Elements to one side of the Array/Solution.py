'''
 *  Name - Jatin Sharma
 *  Date - Oct, 28, 2020
 *  Link - https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
'''

arr = list(map(int, input().split()))
# arr.sort()
j = 0
for i in range(len(arr)) :
    if (arr[i] < 0) :
        arr[i], arr[j] = arr[j], arr[i]
        j += 1

print(*arr)
