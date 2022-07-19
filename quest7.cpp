#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int m=0;m<i;m++){
            cout<<" ";
        }
        for(int l=0;l<n-i;l++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}