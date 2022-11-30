#include <cstdio>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int lst[1000001];


int min(int n){
	if(lst[n])
		return lst[n];
	else if(n==1)
		return 0;
	else if(n%3 == 0 && n&2 == 0){
		int minimum;
		
		minimum =  min(n/3) < min(n/2) ? min(n/3)+1 : min(n/2)+1;
		return lst[n] = minimum < min(n-1)+1 ? minimum : min(n-1)+1; 
	}
	else if(n%3 == 0)
		return lst[n] = min(n/3) < min(n-1) ? min(n/3)+1 : min(n-1)+1;
	else if(n%2 == 0)
		return lst[n] = min(n/2) < min(n-1) ? min(n/2)+1 : min(n-1)+1;
	else
		return lst[n] = min(n-1)+1;
	
	return lst[n];
}




int main(void){

	int N;
	cin >> N; 
	
	int result = min(N);
	printf("%d",result);


	return 0;
}
