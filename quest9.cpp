#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=(n+i)-n;j++)
            cout<<" ";
        for(int l=1;l<=n-i;l++)
            cout<<l;
        for(int l=n-(i+1);l>=1;l--){
            cout<<l;
        }
        cout<<"\n";
    }
    return 0;
}