lst_len = int(input())
lst = []
lst = list(map(int, input().split()))
dp = [0 for i in range(len(lst))]


    
for i in range(0,lst_len):
    for s in range(0,i):
        if(lst[i] > lst[s] and dp[i] < dp[s]):
            dp[i] = dp[s]
    dp[i] += 1

print(max(dp))