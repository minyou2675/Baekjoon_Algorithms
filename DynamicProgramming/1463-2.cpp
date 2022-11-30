#include <iostream>
#include <cstdio>
#include <algorithm>
#define INF 10000000

using namespace std;

int lst[1000001];
	

int opt(int n){
	
	if(lst[n])
		return lst[n];
	else if(n == 1)
		return 0;
	else{
	int a = INF; int b = INF; int c = INF;
	if(n % 3 == 0)  a = opt(n/3)+1;
	if(n % 2 == 0)  b = opt(n/2)+1;
	c = opt(n-1)+1;
	lst[n] = min({a,b,c});
	return lst[n];
	}
	
	
	}

int main(void){

	int N;
	cin >> N;
	int result = opt(N);
	cout << result; 


	return 0;
}
