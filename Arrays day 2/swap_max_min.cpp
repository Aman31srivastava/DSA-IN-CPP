#include<iostream>
using namespace std;

int maxNum(int arr[], int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max)
        {
            max=arr[i];

        }
    }
    return max;
}

int minNum(int arr[], int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

void swapnum(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}


int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int max=maxNum(arr,size);
    int min=minNum(arr,size);
    cout<<"before the swapping: "<<max<<min<<endl;
    swapnum(max,min);
    cout<<"after swapping: max ="<<max<<", min="<<min<<endl;

}