#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;
int score[300]; 
int N;

void cal_score(){

    for(int i=0; i <= N; i++){
        score[i] =score[i] + max(score[n-1],score[n-2]);
    }

}

int main(void){
    cin >> N;
    score[0] = 0;
    for(int i = 1; i <= N; i++){
	    int n; 
        cin >> n;
	    score[i] = n;

    }
    cal_score();
    cout << score[N];

	return 0;

}
