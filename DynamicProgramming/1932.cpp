#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int N;
vector<int> tri[5000];
vector<int> dp[5000]; 

int main(void){
    cin >> N;
    
    for (int i = 0; i < N; i++){
        for(int j=0; j<=i; j++){
            int n;
            cin >> n;
            tri[i].push_back(n);
        }
    }
    

    for(int i =N-2; i >= 0 ; i--){
        for(int j=0; j<=i; j++){
            tri[i][j] = tri[i][j] + max(tri[i+1][j],tri[i+1][j+1]);
        }
	
    }
    cout << tri[0][0] << endl;

    


    return 0;

}
