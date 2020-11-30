#include <iostream>
using namespace std;
int main(){
    int n,k=0,up = 1;
    cin>>n;
    int m = n/2;
    for(int i=0; i<n; i++){
        if(i==m) up = -1;
        for(int j=0; j<n; j++){
            if(j>=m-k && j<=m+k) { cout<<"D"; }
            else cout<<"*";
            
        }
        k = k + up;
        cout<<"\n";
    }
}
