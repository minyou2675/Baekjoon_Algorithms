#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int S;
    int num = 0;
    int num2 = 0;
    int cnt = 0;
    cin >> S;

    while(1){
	    
            ++num2;
            if(S - (num+num2) > num2){
                num += num2;
               
                cnt++;
            }
	    else if(S - (num+num2) == 0){
	    	num += num2;
	
		cnt++;
		break;
		
	    }
            else
                continue;

    }
    cout << cnt << endl;

    return 0;
}
