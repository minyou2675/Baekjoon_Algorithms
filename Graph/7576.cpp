#include <iostream>
#include <queue>
#include <cstdio>
#include <cstring>

using namespace std;

int M,N;
int visit[1000][1000];
int check[1000][1000];
int map[1000][1000];
int cnt = 0;
queue <pair<int,int>> q;
queue <pair<int,int>> q2; 

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void bfs(int x, int y){
	if(!visit[x][y]&map[x][y] == 1){
		visit[x][y] = true;
		for(int i = 0; i < 4; i++){
			int nx = dx[i]+x;
			int ny = dy[i]+y;

		if(nx >= 0&& nx < N && ny >= 0 &&ny < M){
			if(!visit[nx][ny] && !check[nx][ny] &&map[nx][ny] == 0){
					map[nx][ny] = 1;
					check[nx][ny] = true;
					q2.push(make_pair(nx,ny));
				}
		}	
				

		}

}
}

int main(void){

	cin >> M >> N;
	memset(visit,false,sizeof(visit));
	memset(check,false,sizeof(check));

	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++){
				int n;
				cin >> n;
				map[i][j] = n;
			if(map[i][j] == 1)
				q.push(make_pair(i,j));
		}

	while(1){
		     	while(!q.empty()){		
			bfs(q.front().first,q.front().second);
			q.pop();
			}
			q = q2; 
			while(!q2.empty()){
			q2.pop();
			}
			if(q.empty()){
			break;
			}
		cnt++;			
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
