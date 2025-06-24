#include<iostream>
using namespace std;

int findduplicates(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<size;i++){
        ans=ans^i;
    }
    return ans;
}

int main(){
    int arr[]={1,2,3,4,5,4};
    int size=6;
    cout<<"the duplicate element in the array is: "<<findduplicates(arr,size)<<endl;
}
