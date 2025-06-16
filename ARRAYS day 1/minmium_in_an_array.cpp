#include<iostream>
using namespace std;

int main(){
    int nums[5];
    int size=5;
    for(int i=0;i<size;i++){
        cout<<"enter 5 elements in an array:"<<endl;
        cin>>nums[i];
    }

    int smallest=INT_MAX;

    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
        }
    }
    cout<<"the smallest element in an array: "<<smallest<<endl;
    return 0;
}