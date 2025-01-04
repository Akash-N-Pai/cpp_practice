#include <iostream>
using namespace std;

int main(){
    int i,j,count=0,n;

    cout<<"enter n"<<endl;
    cin >>n;

    for(i=0;i<n;i++){
        for(j=0;j<=2*n;j++){;
         if(j>n && j<=2*n-i ){
                count--;
                cout <<count;
                continue;
            }
            count++;
            if(j<i || j>2*n-i){
                cout<<"*";
                continue;
            }
           
            if(i<=j && j<n){
                cout <<count;
                continue;
            }
            
            

        }
        cout<<endl;
        count =0;
    }
    
    return 0;

}