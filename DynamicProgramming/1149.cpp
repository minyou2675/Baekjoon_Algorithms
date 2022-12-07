#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
#define INF 1001

int rgb[1000][3];
int color[1000];
int N;
int result[3];

int min_cost(int n){
    int minVal = INF;
    

if(n == 0){
        for(int i = 0; i < 3; i++){
        
            color[0] = i;
            int temp = rgb[0][color[0]] +min_cost(n+1);
            result[i] = temp;
}
        }

	
        
    else if(n > 0){
       for(int i = 0; i < 3; i++){
	    int temp;
	    int cost;
            color[n] = i;
         
        if(color[n-1] != color[n]){
		if(n == N-1)
			temp= rgb[n][color[n]];
		else
        	    temp = rgb[n][color[n]]+min_cost(n+1);
           	    minVal = min(temp,minVal); 
	
       }
       }
       return result[color[0]] += minVal;
       
        
}


 
}

int main(void)
{
    
    scanf("%d",&N);
    for(int i =0; i < N; i++){
        scanf("%d %d %d",&rgb[i][0],&rgb[i][1],&rgb[i][2]);
        
        
    }
    min_cost(0);
    sort(result,result+3);
    printf("%d", result[0]);


return 0;
}
