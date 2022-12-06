#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <cstring>
#include <algorithm>
#include <iostream>

using namespace std;
vector <int> vec[10001];
queue <int> q; 
queue <int> lst;
bool check[1001];
int N,M,V;
int cnt = 0;
bool visit[1001]; 

void dfs(int n){
    if(!visit[n]){
    q.push(n);
    cnt += 1;
    visit[n] = true;
    sort(vec[n].begin(), vec[n].end());
    if(vec[n].size() != 0){
    for(int i = 0; i < vec[n].size(); i++){
	if(!visit[vec[n][i]])
       	   dfs(vec[n][i]);
    }	
    }
   
    }
            

}

void bfs(int n){
    if(n == V)
	    cout << V << " ";
    if(!visit[n]){
    
    visit[n] = true;
    sort(vec[n].begin(),vec[n].end());
    for(int i = 0; i < vec[n].size(); i++){
	   
        if(!visit[vec[n][i]] && !check[vec[n][i]])
           { lst.push(vec[n][i]);
	     check[vec[n][i]] = true;
		}

    }
   if(!lst.empty()){ 
    printf("%d ", lst.front());
    int front = lst.front();
    lst.pop();
    bfs(front);
   }
    
    
    }

        

}
int main(void){
    cin >> N >> M >> V;
    for(int i = 0; i < M; i++)  {
        int x,y;
        cin >> x >> y;
        vec[x].push_back(y);
	vec[y].push_back(x);

    }
    
    dfs(V);
    while(!q.empty()){
    cout << q.front() << " "; 
    
    q.pop();
    }
    memset(visit,false,sizeof(visit));
    cout << "\n";
    bfs(V);

}
