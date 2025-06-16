#include<iostream>
using namespace std;

int linearsearch(int arr[],int size, int key){
    for(int i=0;i<size;i++){

        if(arr[i]==key){
            cout<<"yes we have found the element"<<i;
        }
        
    }
    cout<<"not found";
   
}

int main(){
    int arr[]={2,4,6,8,12};
    int size=5;
    int key;
    cout<<"enter your element to search :";
    cin>>key;

    cout<<linearsearch(arr,size,key)<<endl;
}