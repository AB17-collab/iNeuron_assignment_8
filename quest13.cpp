#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<(char)('A'+j-1);
        }
        for(int k=0;k<(2*i-1);k++){
            cout<<" ";
        }
        if(i==0){
            for(int l=n-1;l>=1;l--){
                cout<<(char)('A'+l-1);
            }
        }
        else{
            for(int l=i;l<n;l++){
                cout<<(char)('A'+n-l-1);
            }
        }
        cout<<"\n";
    }
    return 0;
}