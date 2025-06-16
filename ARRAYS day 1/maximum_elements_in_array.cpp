#include<iostream>
using namespace std;

int main(){
    int nums[5]={};
    int size=5;

    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        cout<<"enter 5 elements in an array: "<<endl;
        cin>>nums[i];

    }

    for(int i=0;i<size;i++){
        if(nums[i]>largest){
            largest=nums[i];
        }

    }
    cout<<"the largest element in an array is: "<<largest<<endl;
    return 0;

    
}