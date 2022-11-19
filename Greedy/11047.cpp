#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
	vector <int> g;
	int N,K;
	int i,j;
	int cnt = 0;
	scanf("%d %d",&N,&K);
	g.push_back(0);
	
	for(i =0; i < N; i++){
		int num;
		cin >> num;
		g.push_back(num);
	}
	for ( i = N; i>0; i--){
		if(K >= g[i] && K/g[i] != 0){
			while(K/g[i] != 0){
				cnt += K/g[i];
				K = K%g[i];
				
				
			}	
		}
	} 
	cout << cnt;

	return 0;
}
