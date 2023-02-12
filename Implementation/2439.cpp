/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <cstdio>
#include <cstdlib>
#include <iostream> 

using namespace std;

int main(){

    int num;

    cin >> num;
    
    if(num > 1){
    for(int i = 1; i < num; i++){
        for(int j = 0; j < num-i; j++ ){
            cout << " ";
        }
        for(int k =0 ; k < i ; k++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < num; i++){
        cout << "*";
    }
    }
 else{
     cout << "*";
 }
 



}
