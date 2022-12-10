#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
int num = 1;
int num2 = 1;
int cnt = 1;

int main(void){
    int S;
    cin >> S;

    while(S != 0){
            num2++;
            if(S - (num+num2) > num){
                num += num2;
                S -= num;
                cnt++;
            }
            else
                continue;

    }
    cout << cnt << endl;

    return 0;
}