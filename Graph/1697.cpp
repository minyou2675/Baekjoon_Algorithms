#include<cstdio>
#include<cstdlib>
#include<vector> 
#include<algorithm>
#include<queue>

using namespace std;

int visit[100000];

int main(void){
	int N,K;
	int u, udist;
	queue<pair<int, int>> q;
	for ( int i = 0; i < 100000; i++)
		visit[i] = 0;

	scanf("%d %d",&N,&K);

	q.push(make_pair(N,0));

	while(!q.empty()){
		u = q.front().first;
		udist = q.front().second;
		q.pop();
		if(u == K){
			printf("%d\n",udist);
			break;
		}
	       	if(u-1 < 0)
			continue;
			
		else{
		visit[u-1] = 1;
		q.push(make_pair(u-1, udist+1));
		}
		
		if ( u+1 >= 100000)
			continue;
		else{
		visit[u+1] = 1;
		q.push(make_pair(u+1, udist+1));
		}
		if (2*u >= 100000)
			continue;
		else{
		visit[2*u] = 1;
		q.push(make_pair(2*u, udist+1));
		}
	}

	return 0;
}
