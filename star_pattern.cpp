#include<iostream>
using namespace std;

int main()
{
    int b,l,j,i,count=1;
    cout << "bredth and lenght of star"<<endl;
    cin>> l;
    char ch = 'A';
    for(i=0;i<l;i++){
    for(j=0;j<i+1;j++){
        /*if(i==j){
        cout<<" 1";
        break;
        }*/
       //char p = ch+j+i;
        cout << ch <<" ";
        count++;
        ch++;

    }
    //ch ='A';
    cout<<endl;
    }
return 0;
}