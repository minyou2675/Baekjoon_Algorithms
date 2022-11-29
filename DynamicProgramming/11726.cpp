#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int i = 0;

void block(int n,int map[]){
	if(n == 1){
		map[i] = 1;
		i++;
	}
	else if(n == 2)
		{
		map[i] = 2;
		i++;
		}
	else{
	block(n-1,map);
	block(n-2,map);
	}
	
		

}


int main(void){
	int sum = 0;
	int N;
	cin >> N;
	int map[N*N];

	block(N,map);
	for (int k =0; k < i ; k++){
		sum += map[k];
	}
	printf("%d",sum%10007);
	return 0;



}
