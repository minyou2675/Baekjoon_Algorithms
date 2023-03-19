#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(void){

    int n;
    cin >> n;
    int sum = 0;

    for(int i = 1; i < n+1; i++){
        sum += i;
    }
    cout << sum;
}