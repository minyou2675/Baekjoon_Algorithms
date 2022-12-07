#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
#define INF 10000

int rgb[1001][3];
int color[1001];
int N;
int result[3];

int min_cost(int n){
    int minVal = INF;

    if(n == N-1){
	    if(color[n-1] == 0)
		    minVal = rgb[n][1] > rgb[n][2] ? rgb[n][2] : rgb[n][1];
	    else  if(color[n-1] == 1)
		    minVal = rgb[n][0] < rgb[n][2] ? rgb[n][0] : rgb[n][2];
	    else
		    minVal = rgb[n][0] < rgb[n][1] ? rgb[n][0] : rgb[n][1];
    	return minVal;
    } 
        
   else  if(0 < n && n < N-1){
       for(int i = 0; i < 3; i++){
	    int temp;
	    int cost;
            color[n] = i;
         
        if(color[n-1] != color[n]){

        	    temp = rgb[n][color[n]]+min_cost(n+1);
           	    minVal = min(temp,minVal); 
	
       }
       }
         
        
}


return minVal;
} 


int main(void)
{
    
    scanf("%d",&N);
    for(int i =0; i < N; i++){
        scanf("%d %d %d",&rgb[i][0],&rgb[i][1],&rgb[i][2]);
        
        
    }
    int mini = INF;
    for(int i = 0; i < 3; i++){
        color[0] = i;
	int temp; 
        temp = rgb[0][color[0]]+min_cost(1);
      	mini = mini < temp ? mini : temp;
   }
    printf("%d\n",mini);


return 0;
}
