#include<bits\stdc++.h>
using namespace std; 
int main(){                       //Line Trip
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
            int n,x;
            cin>>n>>x;
            int arr[n];
            for(int j=0;j<n;j++){
                cin>>arr[j];
            }
             int a,b;
             int c=INT_MIN;

            for(int j=0;j<n;j++){
                if(j==0){
                    b=arr[j];
                }else if(j==(n-1)){
                    b=2*(x-arr[j]);
                }else{
                    b=arr[j]-arr[j-1];
                }

                c=max(c,b);          
              } 


        cout<<c<<endl;

    }
    return 0;
}