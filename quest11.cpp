#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int effective = (65+n)-'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n-(i+1);j++){
            cout<<" ";
        }
        for(int k= 0;k<=i;k++){
            cout<<(char)('A'+k);
        }
        for(int l=i-1;l>=0;l--){
            cout<<(char)('A'+l);
        }
        cout<<"\n";
    }
    return 0;
}