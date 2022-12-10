#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> g;

int main(void){
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){

        int n;
        cin >> n;
        g.push_back(n);
    }

    sort(g.begin(),g.end());
    int max = g[0]* N;
    for (int i  =1 ; i < N; i++){
	
	 int  temp = g[i] * (N-i);
	   max = max > temp ? max : temp;
	   
    }

    cout << max << endl;
    



    return 0;
}
