#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void){
	int N;
	int i,j;
	int sum = 0;
	vector<int>g;
	
	cin >> N;
	
	for(i=0; i < N; i++){
		int p;
		cin >> p;
		g.push_back(p);
	}
	sort(g.begin(),g.end());

	for(i=0; i < N; i++){
		for(j=0; j<=i; j++){
		sum += g[j];
		}
	}
	cout << sum;

}
