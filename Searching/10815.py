import sys

input = sys.stdin.readline

n = int(input())

lst = sorted(list(map(int, input().split())))

n2 = int(input())

lst2 = list(map(int, input().split()))

def binary_search(target,data):
    start = 0
    end = len(data) -1
    
    while start <= end:
        mid = (start + end)//2
        if target == data[mid]:
            return 1
        elif target > data[mid]:
            start = mid+1
        elif target < data[mid]:
            end = mid-1
    return 0
for i in lst2:
    print(binary_search(i,lst),end=" ")