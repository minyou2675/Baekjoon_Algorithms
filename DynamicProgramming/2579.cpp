#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std; 

int score[301];

int main(void){
    int N;
    cin >> N;

    for(int i = 1; i < N; i++){
        cin >> score[i];

    }
    score[0] = 0;
    for(int i = N; i > 2; i--){
        score[i] = score[i] + min(score[i-2],score[i-1]);

    }
    cout << score[N];



}