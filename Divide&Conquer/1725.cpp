#include <vector>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iostream>

using namespace std;



vector <int> g;
void hist(int start,int end,int mat[]){
	int left ,right;
	left = right = 1;
	if(start < 0 || start > end)
		return;
	
	while(start+right <= end){
		
		 if(mat[start] > mat[start+right])
			break;
		right ++;
	
	}
	while(0 <= start-left){
		if(mat[start] > mat[start-left])
			break;
	       	left ++;
	}
	g.push_back(mat[start]*(left+right-1));
	hist(start+1,end,mat);
	
}



int main(void){
	int N;
	int i,j;
	cin >> N;
	int mat[N];

	for(i=0; i < N; i++){
		cin >> mat[i];
	}


	hist(0,N-1,mat);
	sort(g.begin(),g.end());
	cout << g[N-1];
	return 0;




}
