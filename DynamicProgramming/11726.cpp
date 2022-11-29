#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <vector> 
using namespace std;

int i = 0;
vector <int> v;

void block(int n){
	if(n == 1){
		v.push_back(1);
		i++;
	}
	else if(n == 2)
		{
		v.push_back(2);
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
	cin >> N;
	

	block(N);
	for (int k =0; k < i ; k++){
		sum += v[k];
	}
	printf("%d",sum%10007);
	return 0;



}
