#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){
	int i,N,j;
	int A[51],B[51];
	int sum = 0;
	int temp;
	int idx;
	int temp1;
	scanf("%d",&N);
	for(i = 0; i< N; i++){
		scanf("%d",&A[i]);
	}
	for(i = 0; i<N; i++){
		scanf("%d",&B[i]);
	}
	sort(A,A+N);
	for(i = 0; i<N; i++){
		idx = i;
		
		for(j = 0; j<N;j++){
			if(A[idx] < A[j] && B[idx] <= B[j]){
				
				idx = j; 
					
			}
			
		}
		temp = A[i];
		A[i] = A[idx];
		A[idx] = temp; 
	}
	for(i =0; i < N; i++){
	sum += A[i] * B[i];
	}
	printf("%d\n",sum);
	



return 0;

}
