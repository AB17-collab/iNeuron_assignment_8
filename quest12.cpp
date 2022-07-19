#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=(n+i)-n;j++)
            cout<<" ";
        for(int l=0;l<n-i;l++)
            cout<<(char)('A'+l);
        for(int l=n-(i+1);l>=1;l--){
            cout<<(char)('A'+l-1);
        }
        cout<<"\n";
    }
    return 0;
}