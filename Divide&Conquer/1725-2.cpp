#include <cstdio>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

stack<int> st; 
int hist[100000];
int N;



int main(void){

	int width;
	int max = 0;
	int idx;
	scanf("%d",&N);

	for(int i = 0; i < N; i ++){
	
		scanf("%d",&hist[i]);
		
		while(!st.empty() && hist[st.top()]> hist[i]){
		idx = st.top();
		st.pop();
		width = i;
		if(!st.empty()){
			width -= st.top() + 1;
			
		}
		max = hist[idx]*width > max ? hist[idx]*width : max;
			
		}
		st.push(i);
	}
	while(!st.empty()){
		idx = st.top();
		st.pop();
		width = N;

		if(!st.empty()){
			width -= st.top() +1;

		}
		max = hist[idx]*width > max ? hist[idx]*width : max; 
		}

		
	printf("%d",max);



	return 0;
}
