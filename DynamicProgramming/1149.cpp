#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
#define INF 10000

int rgb[1001][3];
int cost[3];

int main(void)
{
	int N;
	cin >> N;
    
    rgb[0][0] = 0;
    rgb[0][1] = 0;
    rgb[0][2] = 0;
    for(int i = 1; i <= N; i++){
	    cin >> cost[0] >> cost[1] >> cost[2];
	    rgb[i][0] = min(rgb[i-1][1],rgb[i-1][2])+cost[0];
	    rgb[i][1] = min(rgb[i-1][2],rgb[i-1][0])+cost[1];
	    rgb[i][2] = min(rgb[i-1][0], rgb[i-1][1])+cost[2];

    }
    sort(rgb[N],rgb[N]+3);
   
   cout << rgb[N][0];


return 0;
}
