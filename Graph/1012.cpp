#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

vector<pair<int,int>> vec[50][50];

void bfs(int col, int row){
	if(vec[col,row] == 0||vec[col,row].empty())
		return 0; 
	
	else if(vec[col,row] == 1)
	{	bfs(++col,row)
		bfs(--col,row)
		bfs(col,++row);
		bfs(col,--row);
	}	
	

}

int main(void){
	int K;
	int i,j;
	int M,N,num;
	cin >> M >> N >> num;
	
	for(i=0; i < num; i++){
		int col,row;
		cin >> col;
		cin >> row;
		vec,make_pair(col,row);
		vec[col,row] = 1;
	}
	



}
