#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4]={1,2,3,-4};
    int sum=0;
    int max=INT_MIN;
    for(int i=0;i<4;i++){
        sum=0;
        for(int j=i;j<4;j++){
            sum=sum+a[j];
            if(sum>max){
                max=sum;
            }
        }
    }
    cout<<"max is "<<max<<endl;
}
