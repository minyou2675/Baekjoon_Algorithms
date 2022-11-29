#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int block(int n){
	if(n == 1)
		return 1;
	else if(n == 2)
		return 2;
	else
		return block(n-1)+block(n-2);

}


int main(void){

	int N;
	cin >> N; 
	printf("%d",block(N)%10007);




}
