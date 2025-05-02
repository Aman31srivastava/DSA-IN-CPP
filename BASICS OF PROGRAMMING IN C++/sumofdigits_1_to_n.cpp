#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int sum=0;

    for(int i=0; i<=n;i++){
    sum=sum+i;
    }

    cout<<"the sum is:"<<sum<<endl;

}


/*
int main(){
int n;
cin>>n;
int i=1;
int sum=0;
while(i<=n){
sum=sum+count;
count++;
}
}

*/