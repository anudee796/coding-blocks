#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    int a[n]={3,-6,10,4};
    int sum=0;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum=0;
            for(int k=i;k<=j;k++){
              sum=sum+a[k];  
            }
            cout<<sum<<" ";
            if(sum>max){
                max=sum;
            }
        }
    }
    cout<<endl;
  cout<<"value of max value is "<<max<<endl;   
}
