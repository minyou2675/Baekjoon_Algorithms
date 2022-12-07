#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
#define INF 10000000

vector <int> rgb[1000];
int color[1000];
int N;
int min_cost(int n){
    int minVal = INF;

if(n == 0){
        for(int i = 0; i < 3; i++){
            int cost;
            color[0] = i;
            int temp = rgb[0][color[0]];
            minVal = min(temp,minVal);
}
        }

        if(n == N-1){
            for(int i = 0 ; i < 3; i++){
                color[n] = i;
                if(color[n-1] != color[n]){
                    int temp = rgb[n][color[n]];
                    minVal = min(temp,minVal);
            }
            return minVal;
        }
        }
    else if(n > 0 && n < N-1){
       for(int i = 0; i < 3; i++){
            color[n] = i;
        
        
        if(color[n-1] != color[n] && color[n+1]!= color[n]){
           int temp = rgb[n][color[n]]+min_cost(n+1);
            minVal = min(temp,minVal); 
        
       }
       }
       return minVal;
       
        
}

return minVal += min_cost(n+1);

 
}

int main(void)
{
    int N;
    cin >> N;
    for(int i =0; i < N; i++){
        int r,g,b;
        cin >> r >> g >> b;
        rgb[i].push_back(r);
        rgb[i].push_back(g);
        rgb[i].push_back(b);
        
    }
    cout << min_cost(0);


return 0;
}