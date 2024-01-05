#include<iostream>
using namespace std;

int main(){
    
    int arr[5]={4,3,8,2,5};

    int arr_size=sizeof(arr)/sizeof(arr[0]);
    // cout<<arr_size;

    // For Ascending Order
    for(int j=0; j<arr_size; j++){

        int minInd = j;
        for(int i=j+1; i<arr_size; i++){

            if(arr[minInd]>arr[i]){
                minInd=i;
            }
        }
        swap(arr[minInd],arr[j]);
    }

    cout<<"For Ascending Order: ";
    for(int i=0; i<arr_size;i++){
        cout<<arr[i]<<' ';
    }

    // For Descending Order
    for(int j=0; j<arr_size; j++){

        int minInd = j;
        for(int i=j+1; i<arr_size; i++){

            if(arr[minInd]<arr[i]){
                minInd=i;
            }
        }
        swap(arr[minInd],arr[j]);
    }

    cout<<endl<<"For Descending Order: ";
    for(int i=0; i<arr_size;i++){
        cout<<arr[i]<<' ';
    }
 
return 0;
}