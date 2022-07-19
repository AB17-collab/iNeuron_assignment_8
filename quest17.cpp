#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=0;i<2*n-1;i++){
        cout<<"*";
    }
    cout<<"\n";
    int gaps = 4;
    for(int i=1;i<n;i++){
        if(i==n-1){
            for(int j=0;j<i;j++)
                cout<<" ";
            cout<<"*";
            for(int k=0;k<i;k++)
                cout<<" ";
        }
        else{
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            cout<<"*";
            for(int k=0;k<2*n-1-gaps;k++){
                cout<<" ";
            }
            cout<<"*";
            for(int l=0;l<i;l++){
                cout<<" ";
            }
        }
        cout<<"\n";
        gaps += 2;
    }
    return 0;
}