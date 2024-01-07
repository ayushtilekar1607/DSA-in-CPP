#include<iostream>
using namespace std;

int main(){
    int n = 20;

    while(n!=1){
        if(n%2==1){
            cout << "Not to the power of 2"<<endl;
            break;
        }

        n/=2;
    }
return 0;
}