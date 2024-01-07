#include<iostream>
using namespace std;

int main(){
    int numb=3434;
    int rem,ans = 0;

    while(numb!=0){

        rem = numb%10;
        numb /= 10;
        ans+=rem;

    }

    cout<<ans;
return 0;
}