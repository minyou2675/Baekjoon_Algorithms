
    

def d(n):
    if n in d_list.keys():
        return d_list[n]

    d_list[n] = d(n-2)+d(n-3)
    return d_list[n]
        
    
case_list = []
case_list_len = int(input())
result = []
d_list = {0: 1, 1 : 1, 2: 1}

for i in range(case_list_len):
    a = int(input())
    case_list.append(a-1)
    
for i in case_list:
    result.append(d(i))

    
for i in result:
    print(i)