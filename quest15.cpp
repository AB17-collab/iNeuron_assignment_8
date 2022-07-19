#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=0;i<n-1;i++){
        if(i==0){
            for(int j=0;j<n;j++){
                if(j==n-1)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        else{
            for(int j=0;j<n;j++){
                if(j==n-1)
                    cout<<"*";
                if(j==n-1-i)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        cout<<"\n";
    }
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    return 0;
}