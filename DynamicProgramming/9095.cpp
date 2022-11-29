#include <cstdio>
#include <cstdlib>

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

queue <int> q;



int knap(int n){
	if(n == 3){
		return 4;
	}
	else if(n == 2){
		return 2;
	}
	else if(n == 1){
		return 1;
	}
	else
		return knap(n-1)+knap(n-2)+knap(n-3);
	
}



int main(){

	int N;
	int i,j;


	cin >> N;

	for(i = 0 ; i < N; i++){
		int num;
		cin >> num;
		q.push(num);
	}


	while(!q.empty()){
		int num  = q.front();
		printf("%d\n",knap(num));
		q.pop();
	
	
	}
	return 0;




}
