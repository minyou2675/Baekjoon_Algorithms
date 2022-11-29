#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int vec[1000000];


int block(int n){
	if(vec[n])
		return vec[n];
	if(n == 1){
		
		return 1;
	}
	else if(n == 2)
		{
			
		return 2;
		
		}
	else{
	return vec[n] = block(n-1) + block(n-2);
	}
	
		

}


int main(void){
	int N;
	cin >> N;
	

	
	printf("%d",block[N]%10007);
	return 0;



}
