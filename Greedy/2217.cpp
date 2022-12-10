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
    cout << g[0] * N;
    



    return 0;
}