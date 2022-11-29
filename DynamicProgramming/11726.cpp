#include <cstdio>
#include <vector>
#include <queue>

using namespace std;
queue <int> q;

int block(int n){
	if(n == 1)
		return 1;
	else if(n == 2)
		return 2;
	else{
		int result =  block(n-1)+block(n-2);
		q.push(result);
		return 0;
	}

}


int main(void){
	int sum = 0;
	int N;
	scanf("%d",&N); 
	block(N);
	while(!q.empty()){
		sum += q.front();
		q.pop();
	}
	printf("%d",sum%10007);




}
