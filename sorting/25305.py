n,k = map(int, input().split())
score = list(map(int, input().split()))

sorted_score = sorted(score,reverse=True)

print(sorted_score[k-1])