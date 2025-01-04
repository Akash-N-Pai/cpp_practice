//given number n (can be upto 10 digit) multiply each digit and sbutract the sum of the all the digit from it 

#include<iostream>
using namespace std;

int main(){

    int n,i,sum=0,mul=1;
    cout<<"enter the value for n"<<endl;
    cin>>n;
        while(n!=0){
           i=n%10;
           sum +=i;
           mul*=i;
           n=n/10;
        }
      cout<<mul-sum;

    return 0;
}