#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std; 

int score[301];

int main(void){
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++){
        cin >> score[i];

    }
    int prev = 0;
    for(int i = N-2; i >= 0; i--){
        if(prev - i == 1)
            return score[i];
        
        int num1 = score[i] + score[i+1];

        int num2 = score[i] + score[i+2];
        
        if(max(num1,num2) == num1){
            prev = i+1;
        }
        else
            prev = i+2;
        
    }
    cout << score[0];
    

 



}