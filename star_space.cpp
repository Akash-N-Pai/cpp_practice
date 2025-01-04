#include<iostream>
using namespace std;

int main()
{
    int b,l,j,i,count=0;
    cout << "bredth and lenght of star"<<endl;
    cin>> l;
    char ch = 'A';
    for(i=0;i<l;i++){
    for(j=0;j<l+i;j++){
        if(j>=l-i-1 && j<l){
            count++;
            cout << count;
            
            continue;
        }
        if (j>=l){
            count--;
            cout<< count;
            continue;
        }
        cout << " ";

    }
    //ch ='A';
    count = 0;
    cout<<endl;
    }
return 0;
}