#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	int N;
	int i,j;
	vector<int>min;
       	
	cin >> N;
	for(i=0; i<= 1000; i++){
		for(j=0; j<=5000/3;j++){
			if((5*i)+(3*j) == N){
				min.push_back(i+j);
			}
		}
	}
	if(min.empty())
		cout << -1;
	else{
	sort(min.begin(),min.end());
	cout << min[0];
	}
	






	return 0;
} 
