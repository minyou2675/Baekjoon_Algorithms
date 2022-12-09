#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>

#define INF 10000
using namespace std; 

//vector <int> score;
int score[10000][3]

int main(void){
    int N;
    cin >> N;
    score[0] = 0;
    for(int i = 1; i <= N; i++){
	    int n; 
        cin >> n;
	score.push_back(n);

    }
    int r = N-1;
    int l = N-2;
    int idx = 0;
    for(int i = r; i >= 0; i++){
	    idx = 1; 
	    if(r%2=0){
	  
  	  	r = r+max(score[i+1],score[i+2]);
	    }
	    else
		    r = r+score[i+1]; 

	    }
    
    for(int i = l; l >= 0; l++){
	    if(l%2=0){
	    	l = l+max(score[i+1],score[i+2]);
	    }
	    else
		    l = l+score[i+1];
    }

	return 0;

}
