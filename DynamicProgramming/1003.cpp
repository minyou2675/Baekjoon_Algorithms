#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int lst[41];

int Fib(int n){
	if(n == 1)
		return 1;
	else if(n == 0)
		return 0;

	return lst[n] = Fib(n-1)+Fib(n-2);
}

int main(void){

	int N;
	cin >> N;
	for(int i =0; i < N; i++){
		Fib(i)
	}



	return 0;
}
