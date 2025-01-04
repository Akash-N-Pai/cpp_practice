// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n ,i=2,sum=0;
    cout << " enter the number for sum of first n even number"<<endl;
    cin>> n;
    while(i<=2*n)
    {
        /*if(n%i==0){
            cout<<n<<" is not prime"<<endl;
            return 0;
        }*/
        sum = sum+i;
        
        i+=2;
    }
    //cout<<n<<" is a prime"<<endl;
    cout << " sum of first "<<n<< " even number is "<< sum<<endl;
     return 0;

}