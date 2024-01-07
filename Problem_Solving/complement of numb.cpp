#include<iostream>
using namespace std;

int main(){
    int numb=11;
    int ans=0, rem=0;
    int mul=1;

    
    if(numb==0){
        ans=1;
    }

    while(numb>0){
        rem = numb%2;
        numb /= 2;

        // OR
        // rem = rem^1;
        // as 1^1=0 and 0^1=1
        // so no need of if - else conditions

        if(rem==0){
            rem=1;
            ans= rem*mul + ans;
            // ans= ans*mul + rem;
        }
        
        else if(rem==1){
            rem=0;
            ans= rem*mul + ans;
            // ans= ans*mul + rem;
        }

        
        mul*=2;
    }

    cout<<ans;
return 0;
}