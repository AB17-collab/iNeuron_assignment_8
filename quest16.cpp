#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=0;i<n-1;i++){
        if(i==0){
            for(int j=0;j<n-(i+1);j++)
                cout<<" ";
            cout<<"*";
            for(int k=0;k<n-(i+1);k++)
                cout<<" ";
        }
        else{
            for(int j=0;j<n-(i+1);j++){
                cout<<" ";
            }
            cout<<"*";
            for(int k=0;k<2*i-1;k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int k=0;k<2*n-1;k++){
        cout<<"*";
    }
    return 0;
}