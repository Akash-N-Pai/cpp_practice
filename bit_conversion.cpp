#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n ,i=0,ans=0,digit=0;
    cout<<"enter the number to convert"<<endl;
    cin>>n;

    while(n!=0)
    {
        digit = n&1;
        n=n>>1;
        ans = (digit * pow(10,i)) +ans;
        i++;
    }
    cout<<"the converted number is "<<ans<<endl; 
} 