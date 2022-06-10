#include<bits/stdc++.h>
using namespace std;
int main(){
    int seats[]= {3,1,5};
    int students[]={2,7,4};
    int n=sizeof(seats)/sizeof(seats[0]);
    sort(seats,seats+n);
    sort(students,students+n);
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+abs(students[i]-seats[i]);
    }
    cout<<"min moves is "<<sum<<endl;
}
