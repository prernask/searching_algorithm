#include<iostream>
using namespace std;


// make func for linear search

int linearSearch(int arr[], int n, int key){

    for(int i=0;i<n;i++){   //sare elements ko traverse karne ke liye for loop
        if(arr[i]==key){
            return i;    //equal hai to index return karo
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    int key;
    cin>>key;

    //call karenge func ko
    cout<<linearSearch(arr,n,key)<<endl;

    return 0;
}