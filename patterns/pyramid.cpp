#include<bits/stdc++.h>
using namespace std;
int main(){//execution of program starts from main method
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*n)-1;j++){
            if(j>=n-(i-1)&&j<=n+(i-1)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
