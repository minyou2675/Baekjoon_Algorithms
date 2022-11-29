#include <cstdio>
#include <vector>
#include <queue>

using namespace std;
int map[1000000];
int i = 0;

void block(int n){
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
	block(n-1);
	block(n-2);
	}
	
		

}


int main(void){
	int sum = 0;
	int N;
	scanf("%d",&N); 
	block(N);
	for (int k =0; k < i ; k++){
		sum += map[k];
	}
	printf("%d",sum%10007);
	return 0;



}
