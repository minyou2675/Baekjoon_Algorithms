#include <cstdio>
#include <algorithm>
#include <iostream> 
#include <queue>
#include <vector>
#include <cstring>

using namespace std;
int map[25][25];
vector<int> vec;
int cnt = 0;
bool visit[25][25]; 
int pre = 0;

int N;
int dx[] = {-1 ,1, 0, 0};
int dy[] = {0 , 0, -1, 1};

void dfs(int x, int y){
    if(!visit[x][y]){
        pre ++;
        visit[x][y] = true;
        for(int i = 0; i < 4; i++){
            int nx = dx[i]+x;
            int ny = dy[i]+y;
            if(nx >= 0 && nx < N && ny >= 0 && ny < N){
                if(!visit[nx][ny]&&map[nx][ny] == 1){
                    dfs(nx,ny);
                    
                }
            }
        }
        
    }


}

int main(void){
    
    cin >> N;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
        {
           scanf("%1d", &map[i][j]);
            
            }

   	memset(visit,false,sizeof(visit));


        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
            if(map[i][j] == 1 && !visit[i][j])
                {
		 cnt ++;
               	 dfs(i, j);
                 vec.push_back(pre);
                pre = 0;
                }

       cout << cnt << endl;
       sort(vec.begin(),vec.end());
       for(int i = 0; i < vec.size() ; i++)
        cout << vec[i] << endl;




}
