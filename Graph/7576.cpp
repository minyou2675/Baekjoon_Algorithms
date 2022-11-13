#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm> 
#include<queue>

using namespace std;
int N,M;
int dx[4] = {1,0,-1, 0};
int dy[4] = {0,-1,0,1};

vector<int> edge[1000];

int dist[1000];

int main(void)
{
	int i,j,u;
	int maxd;
	int vcnt;
	int x,y;
       	queue<int>q;	
	

	scanf("%d %d",&N,&M);
	int map[M][N];
	for(i =0; i < M; i++)
		for( j = 0; j < N; j++){
		scanf("%d",&map[i][j]);
		};
	for(i = 0; i < 1000; i++)
		q.push(i);
		dist[i] = -1;

		vcnt = 0;
	       	maxd = 0;	

	for(i = 0; i < 1000; i++)
		edge[i].clear();

	for( i = 0; i <M; i++)
		for( j = 0; j < N; j++){
		if(map[i][j] == -1)
			continue;
		u = j + N * i;
		vcnt++;
		if(map[i][j] == 1){
			q.push(u);
			dist[u];
		} 
		for(int a = 0; a < 4; a++){
			x = j + dx[a];
			y = i + dy[a];
			if(x>=N || x < 0 || y>= M || y <0)
				continue;
			if(map[x][y] == -1) 
				continue;
			int v = x + N * y;
			edge[u].push_back(v);
		} 

		}

	for( i = 0; i < N*M; i++){
		if(edge[i].size() == 0)
			continue;
		sort(edge[i].begin(), edge[j].end());
	}

	
	
	while(!q.empty()){ 
		u = q.front();
		q.pop();
		vcnt--;
		
		for( i =0; i < edge[u].size(); i++){
			if(dist[edge[u][i]] == -1);{
		       		dist[edge[u][j]] = dist[u] + 1;
				maxd = (dist[edge[u][j]] > maxd) ? dist[edge[u][j]]:maxd;
		       		q.push(edge[u][j]); 
			}
		}
		
	
	}
	if( vcnt == 0)
		printf("%d",maxd);
	else
	printf("-1");


	return -1;

}
