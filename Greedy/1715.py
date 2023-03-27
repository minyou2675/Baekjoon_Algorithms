import heapq
import sys
input = sys.stdin.readline

n = int(input())
gr = []
for i in range(n):
    heapq.heappush(gr,int(input()))

results = 0

if len(gr) == 1:
    print(results)
else:
    for i in range(n-1): 
        previous = heapq.heappop(gr)
        current = heapq.heappop(gr)
        results += previous + current 
        heapq.heappush(gr,previous+current)
    print(results)