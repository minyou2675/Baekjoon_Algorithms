#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> vec;
stack<int> col;
stack<int> row;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int M,N,num; 
int map[51][51];
int visit[51][51];

void init(){
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++)
			{map[j][i] = 0;
			visit[j][i] = 0;
			}
	}

}

void dfs(int col, int row){
	visit[row][col] = 1; 
	for(int i =0; i<4; i++){
		int nx = col + dx[i];
		int ny = row + dy[i];
		if(nx >= 0 && nx <M && ny >= 0 && ny < N)
			if(visit[nx][ny]==0 && map[nx][ny] ==1)
				dfs(nx,ny);
		else
			continue;
		}
	}
	
		

		

int main(void){
	int K;
	int i,j;
	int M,N,num;
	cin >> K;
	while(K-- > 0){
		init();
		int cnt = 0;
		cin >> M >> N >> num;
	for(i = 0; i < num; i++){
		int x;
		int y;
		cin >> x;
		cin >> y;
		map[x][y] = 1 ;
	} 

	for(i = 0; i < M; i++){
		for(j = 0; j < N; j++ ){
			if(visit[i][j] == 0){
			cnt++;
			dfs(j,i);
			}
		}
	}
	cout << cnt << "\n";
	

	}
	

return 0;

}
