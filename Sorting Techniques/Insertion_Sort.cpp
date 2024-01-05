#include<iostream>
using namespace std;

int main(){
    int arr[5]={4,8,5,1,0};

    for(int i=0; i<5; i++){

        for(int j=i; j>0; j--){
            if(arr[j-1]>arr[j]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
                }
                
        }
    }

    cout<<"For Ascending Order: ";
    for(int i=0; i<5;i++){
        cout<<arr[i]<<' ';
    }
return 0;
}