#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int button[] = {300,60,10};
int greedy[] = {0,0,0};

int main(void){

    int N;

    cin >> N;

    	for(int i = 0; i < 3; i++){
        if(N >= button[i]){
            greedy[i] = N/button[i];
            N = N%button[i];
	   
        }
	else
		continue;
	}
        
        if(N < button[2] && N > 0)
            cout << -1 << endl;
        
        else{
            cout << greedy[0] << " " << greedy[1] << " " << greedy[2] << endl;
        }
    
    return 0;
   

}
