lst = [int(input()) for i in range(5)]
sum = 0

for i in lst:
    sum += i
avr = int(sum/len(lst))

sorted_lst = sorted(lst)

medium = sorted_lst[2]

print(f"{avr}\n{medium}")
