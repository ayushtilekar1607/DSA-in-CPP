#include<iostream>
using namespace std;

int main(){
    int numb=64;
    int sqrt=0;
    for(int i=1;i<numb/2;i++){

        if(i*i>numb){
            sqrt=i-1;
            break;
        }
    }

    cout<<sqrt;
return 0;
}