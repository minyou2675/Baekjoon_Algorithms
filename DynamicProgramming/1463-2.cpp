#include <iostream>
#include <cstdio>

using namespace std;

int lst[1000001];

int opt(int n){
	if(lst[n])
		return lst[n];
	if(n == 1)
		return 1;
	 if(n % 3 == 0)
		return lst[n] = opt(n/3)+1;
	 if(n % 2 == 0){
		return lst[n] = opt(n/2)+1 < opt(n/3)+1 ? opt(n/2)+1:opt(n/3)+1;
	}
	 else
		return lst[n] = opt(n-1)+1;
	return lst[n];
	


}



int main(void){

	int N;
	cin >> N;
	lst[0] = 1;
	int result = opt(N);
	printf("%d",result);


	return 0;
}
