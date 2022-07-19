#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<1;j++){
            cout<<"*";
        }
        for(int j=1;j<n;j++){
            if(i==j)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    return 0;
}