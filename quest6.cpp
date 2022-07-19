#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<n-i;k++){
            cout<<"*";
        }
        for(int m=0;m<n-(i+1);m++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}