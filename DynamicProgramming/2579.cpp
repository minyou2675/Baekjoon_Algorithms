#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
vector <int> stair;
vector <int > dp;
int N;


int main(void){
	cin.tie(NULL);
	cout.tie(NULL);
    cin >> N;
    dp.resize(N);
    for(int i = 0; i < N; i++){
	    int n; 
        cin >> n;
	stair.push_back(n);

    }
   dp[0] = stair[0];
   dp[1] = max(stair[1], stair[0]+stair[1]);
   dp[2] = max(stair[2]+stair[1],stair[2]+stair[0]);

   for(int i =3; i < N; i++) 
	   dp[i] = max(dp[i-2]+stair[i],dp[i-3]+stair[i]+stair[i-1]);
	cout << dp[N-1] << endl;
	return 0;

}
