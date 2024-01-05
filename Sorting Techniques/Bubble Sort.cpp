#include<iostream>
using namespace std;

int main(){
    int arr[5]={5,4,9,8,2};
    int n = 5;
    bool swapped=0;

    for(int i=n-2;i>=0;i--){
        for(int j=0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped+=1;
            }
        }
        if(swapped==0)
            break;
    }

    cout<<"For Ascending Order: ";
    for(int i=0; i<5;i++){
        cout<<arr[i]<<' ';
    }

return 0;
}