#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int M,N,num; 
int map[51][51];
bool visit[51][51];



void dfs(int x, int y){
	visit[x][y] = true; 
	for(int i =0; i<4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx >= 0 && nx <N && ny >= 0 && ny < M){
			if(map[nx][ny]==1){
			       if(!visit[nx][ny])
				      {
				dfs(nx,ny);
				      }
			}
		}
		else
			continue;
		}
	}
	
		

		

int main(void){
	int K;
	int i,j;
	cin >> K;
	while(K-- > 0){
		
		scanf("%d %d %d",&M, &N, &num);
		int cnt = 0;
	for(i = 0; i < num; i++){
		int x;
		int y;
		scanf("%d %d",&x, &y);
		map[y][x] = 1 ;
	} 

	for(i = 0; i < N; i++){
		for(j = 0; j < M; j++ ){
			if(map[i][j] == 1){
			if(!visit[i][j]){
				dfs(i,j);
				cnt++;
			
			}
			else continue;
			}
		}
	}
	cout << cnt << "\n";
	memset(visit,false,sizeof(visit));
	memset(map,0,sizeof(map));

	}
	


}
