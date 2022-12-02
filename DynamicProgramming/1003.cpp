#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <queue>

using namespace std;

queue <int> q;


int lst1[41];



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
	for(int i =0; i < N ; i++){
		int num;
		cin >> num;
		q.push(num);
		
	}
	while(!q.empty()){
		if(q.front() == 0)
			 cout << "1 0\n";
			
		else if(q.front() == 1)
			cout << "0 1\n";
			
		else
		printf("%d %d\n",Fib(q.front()-1) , Fib(q.front()));
		
		q.pop();
		
	}
		



	return 0;
}
