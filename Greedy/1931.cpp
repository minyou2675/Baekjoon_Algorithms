#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void){
        int N;
        int before = 0;
        vector<pair<int,int>> list;
        int min = 0;
        int cnt = 0;
        int i;
        cin >> N;

        for(i=0; i < N; i++){
        int n,m;
	scanf("%d %d",&n,&m);
	list.push_back(make_pair(m,n));

        }
        sort(list.begin(),list.end());

        for(i = 0; i < N; i++){
        if(list[i].second >= before){
                cnt++;
                before = list[i].first;
        }

        }

        cout << cnt;
    return 0;
}
                                 
