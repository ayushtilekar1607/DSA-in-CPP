#include<iostream>
using namespace std;

int main(){
    int numb=10102;
    int x = numb;
    int ans=0, rem=0;   
    while(numb>0){
        rem = numb%10;
        ans = ans*10 + rem;
        numb = numb/10;
    }

    cout<<ans<<endl;

    if(ans==x){
        cout<<"Pallindrome";
    }

    else{
        cout<<"Not Pallindrome";
    }

return 0;
}