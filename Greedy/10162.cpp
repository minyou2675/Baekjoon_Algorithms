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

    while(N != 0 ){
        if(N >= button[0]){
            greedy[0] = N/button[0];
            N = N%button[0]
        }
        else if(N >= button[1]){
            greedy[1] = N/button[1];
            N = N%button[1];
        }
        else if(N >= button[2]){
            greedy[2] = N/button[2];
            N = N%button[2];
        }
        if(N < button[2]){
            cout << -1 << endl;
            break;
        }
        else{
            cout << greedy[0] << " " << greedy[1] << " " << greedy[2] << endl;
        }
    }
    return 0;
   

}