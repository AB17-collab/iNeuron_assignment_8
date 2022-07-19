#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int top = n-10;
    int k = 2;
    for(int i=0;i<top;i++){
        for(int j=0;j<top-(i+1);j++){
            cout<<" ";
        }
        for(int j=0;j<top+k;j++){
            cout<<"*";
        }
        for(int j=0;j<top-i;j++){
            cout<<" ";
        }
        for(int j=0;j<top-(i+1);j++){
            cout<<" ";
        }
        for(int j=0;j<top+k;j++){
            cout<<"*";
        }
        for(int j=0;j<top-(i+1);j++){
            cout<<" ";
        }
        k += 2;
        cout<<"\n";
    }
    k -= 2;
    int mid = (top+k)*2+1;
    string sir = "MySirg";
    int len = sir.length();
    int cols = mid;
    int iterate = cols-len;
    int upto1 = floor(iterate/2);
    int upto2 = ceil(iterate/2);
    for(int i=0;i<1;i++){
        for(int j = 0;j<upto1;j++)
            cout<<"*";
        cout<<sir;
        for(int k=0;k<upto2;k++)
            cout<<"*";
        cout<<"\n";
    }
    int last = 3*top;
    for(int i=0;i<last;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<last-i;k++){
            cout<<"*";
        }
        for(int m=0;m<last-(i+1);m++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}