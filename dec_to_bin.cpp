#include<iostream>
#include<math.h>
 using namespace std;

 int main(){
    int ans=0,bit=0,i=0,n;
    cout <<"enter the number to convert"<<endl;
    cin>>n;
    int num=n;
    while(n!=0){
        bit = n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
cout<<"convestion of "<<num<<" is "<<ans<<endl;

 }