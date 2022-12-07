#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int main(void){
    int N;
    int cnt = 0;
    cin >> N;
    int count = 1000 - N;

   while(1){ 
    if(count >= 500){
        cnt += count/500;
        count /= 500;
    }
    else if(count >= 100){
        cnt += count/100;
        count /= 100;
    }
    else if(count >= 50){
        cnt += count/50;
        count /= 50;

    }
    else if(count >= 10){
        cnt += count/10;
        count /= 10;
    }
    else if(count >= 5){
        cnt += count/5;
        count /= 5;
    }
    else{
        cnt += count;
        count = 0;
        break;
    }
   }

    cout << cnt; 

    return 0;
}