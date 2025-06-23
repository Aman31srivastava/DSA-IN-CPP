#include<iostream>
using namespace std;

int sumArray(int arr[], int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];

    }
    return sum;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size=5;

    int x= sumArray(arr,size);
    cout<<"the sum of all elements in an array is:  "<<x<<endl;

}