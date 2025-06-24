#include<iostream>
using namespace std;

int uniquevalue(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[]={1,2,1,4,2};
    int size=5;

    cout<<"the unique value in the array is: "<<uniquevalue(arr,size)<<endl;
}