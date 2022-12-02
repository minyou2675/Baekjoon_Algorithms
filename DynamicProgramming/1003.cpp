#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;


int lst1[41];

int lst[41];


int Fib(int n){
	if(lst1[n])
		return lst1[n];
	else if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	
	return lst1[n] = Fib(n-1) + Fib(n-2); 
}

int main(void){

	int N;
	cin >> N;
	for(int i =1; i < N+1; i++){
		int num;
		cin >> num;
		lst[i] = num;
		
	}
	for(int i = 1; i < N+1; i++){
		if(lst[i] == 0)
			 cout << "1 0\n";
		else if(lst[i] == 1)
			cout << "0 1\n";
		else
		printf("%d %d\n",Fib(lst[i]-1) , Fib(lst[i]));
		
	}
		



	return 0;
}
