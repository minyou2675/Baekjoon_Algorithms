#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

int M,N;
int visit[1000][1000];
int check[1000][1000];
int map[1000][1000];
int cnt = 0;
queue <pair<int,int>> q;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int bfs(int x, int y){
	if(!visit[x][y] && map[x][y] == 1){
		visit[x][y] = true;
		for(int i = 0; i < 4; i++){
			int nx = dx[i]+x;
			int ny = dy[i]+y;

			if(nx >= 0&& nx < M && ny >= 0 &&ny < N)
				if(!visit[nx][ny] && !check[nx][ny] &&map[nx][ny] == 0){
					map[nx][ny] = 1;
					check[nx][ny] = true;
					q.push(make_pair(nx,ny));
				} 
				

		}
	return cnt;}
	return 0;


}

int main(void){

	cin >> M >> N;

	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++){
				cin >> map[i][j]; 
			if(map[i][j] == 1)
				q.push(make_pair(i,j));
		}

	while(!q.empty()){		
			bfs(q.front().first,q.front().second);
			q.pop();
			cnt ++;		
	}

	for (int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			if(map[i][j] == 0)
				cnt = -1;
		}
	}

	cout << cnt;
		

	return 0;
}