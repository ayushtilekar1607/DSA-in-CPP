#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[n]={2,8,15,16,16};
    int firMaxInd=0;

    for(int i=0;i<n;i++){
        if(arr[i]>arr[firMaxInd]){
            firMaxInd=i;
        }
    }
    
    cout<<arr[firMaxInd]<<endl;
    int secMaxInd=0;

    for(int j=0;j<n;j++){
        if(arr[j]!=arr[firMaxInd]){
        if(arr[j]>arr[secMaxInd]){
            secMaxInd=j;
        }
    }
    }

    cout<<arr[secMaxInd]<<endl;

    
    int thiMaxInd=0;

    for(int k=0;k<n;k++){
        if(arr[k]!=arr[firMaxInd] && arr[k]!=arr[secMaxInd]){
        if(arr[k]>arr[thiMaxInd]){
            thiMaxInd=k;
        }
    }
    }

    cout<<arr[thiMaxInd]<<endl;
return 0;
}