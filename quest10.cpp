#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        for(int k=0;k<(2*i-1);k++){
            cout<<" ";
        }
        if(i==0){
            for(int l=n-1;l>=1;l--){
                cout<<l;
            }
        }
        else{
            for(int l=i;l<n;l++){
                cout<<n-l;
            }
        }
        cout<<"\n";
    }
    return 0;
}