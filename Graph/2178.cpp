#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;
int N, M;
int mat[100][100];
int visited[100][100];
int dist[100][100];
int x_dir[4] = {-1,1,0,0};
int y_dir[4] = {0,0,1,-1}; 
queue<pair<int,int>> q; 
  
void bfs(int start_x, int start_y){
	visited[start_x][start_y] = 1;
	q.push(make_pair(start_x,start_y));
	dist[start_x][start_y]++;
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;

		q.pop();
		for ( int i = 0; i < 4; i++){
			int x_new = x + x_dir[i];
			int y_new = y + y_dir[i];
			
			if((x_new<N&&x_new>=0)&&(y_new<M&&y_new>=0)&&
					!visited[x_new][y_new]&&mat[x_new][y_new] ==1){
				q.push(make_pair(x_new,y_new));
				visited[x_new][y_new] = 1;
				dist[x_new][y_new] = dist[x][y]+1;
		
		
		
		}
	} 
	
	
}
}

int main(){

	int i,j;
	
	scanf("%d %d",&N,&M);

	for(i = 0; i < N; i++ )
		for(j = 0; j < M; j++){
			scanf("%1d",&mat[i][j]);
		}
	
	bfs(0,0);
	printf("%d",dist[N-1][M-1]);

}
