#include<iostream>
using  namespace std;

int proArray(int arr[], int size){
    int pro=1;
    for(int i=0;i<size;i++){
        pro=pro*arr[i];
    }
    return pro;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int product=proArray(arr,size);
    cout<<product<<endl;
}