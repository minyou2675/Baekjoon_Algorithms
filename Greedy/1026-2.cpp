#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	int N;
	int i,j;
	int sum = 0;
	vector<int> A;
	vector<int> B;
	cin >> N;
	for(i=0; i<N;i++){
		int a;
		cin >> a;
		A.push_back(a);
	}
	for(i=0; i < N; i++){
		int b;
		cin >> b;
		B.push_back(b);
	}
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	
	for(i=0; i < N; i++){
		sum += A[i] * B[N-1-i];
	}
	cout << sum;

	


}
