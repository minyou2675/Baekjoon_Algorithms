def main():   
    card_len,sum = map(int,input().split())
    card_list = list(map(int, input().split()))
    answer_list = []
    min = sum


    for i in range(0,card_len-2):
        if(card_list[i]+card_list[i+1]+card_list[i+2] >= min and card_list[i]+card_list[i+1]+card_list[i+2] < sum+1  ):
            min = card_list[i]+card_list[i+1]+card_list[i+2]

         
    print(min)

main()

        