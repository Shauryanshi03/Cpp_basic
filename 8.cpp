#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a no. :";
    cin>>n;

    int i=2;

    while(i<n) {

        if(n%i==0){
          cout<<"no. is not prime for:"<< i<<endl;
    
        }
        else{
            cout<<"no. is prime for:"<<i<<endl;
        
    }
      i=i+1;
    }
}