#include<iostream>
using namespace std;

int main(){
    int i,j,n,count=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    for(i=0;i<n;i++){
        for(j=0;j<2*n;j++){
            
            if(j>=n+i){
                cout << n-count-i;
                count++;
                continue;
            }
            if(j<n-i){
                cout<<j+1;
                continue;
            }

            cout<<"*";

            
        }
        count =0;
        cout<<endl;
    }


    return 0;
}