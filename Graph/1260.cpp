#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <iostream>

vector <int> vec;
queue <int> q; 
queue <int> lst;
stack <int> stk;
int N,M,V;
bool visit[1000]; 

void dfs(int n){
    if(!visit[n]){
    q.push(n);
    visit[n] = true;
    if(vec[n].size() != 0){
    for(int i = 0; i < vec[n].size(); i++){
        dfs(vec[n][i]);
    }
    }
    }
    if(vec[n].size == 0){
        while(!q.empty()){
            cout << q.front();
            q.pop();
        }
    }
    
    

}

void bfs(int n){
    if(!visit[n]){
    visit[n] = true;
    sort(vec[n].begin(),vec[n].end());
    for(int i = 0; i < vec[n].size(); i++){
        if(!visit[vec[n][i]])
            lst.push(vec[n][i]);

    }
    cout << lst.front();
    int front = lst.front();
    lst.pop();
    bfs(front);
    
    
    }

        

}
int main(void){
    cin >> N >> M >> V;
    for(int i = 0; i < N; i++)  {
        int x,y;
        cin >> x >> y
        vec[x].push_back(y);

    }
    sort(vec.begin(),vec.end());
    dfs(V);
    memset(visit,false,sizeof(visit));
    cout << "\n";
    bfs(V);




}