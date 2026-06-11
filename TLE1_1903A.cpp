#include<bits\stdc++.h>
using namespace std;
int main(){                 //Halloumi boxes
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
            int n,k;
            cin>>n>>k;
            int arr[n];
            int arr2[n];
            for (int j= 0; j < n; j++)
            {
                cin>>arr[j];
                arr2[j]=arr[j];
            }
            sort(arr,arr+n);
            int x=0;
             for (int i = 0; i < n; i++){
                if(arr2[i]==arr[i]){
                    x++;
                }
            }
            if(x==n){
                    cout<<"yes"<<endl;
                }else if(x!=n){
                if(k==1){
                    cout<<"no"<<endl;
                }else if(k>1){
                    cout<<"yes"<<endl;
                }
            }
    }
            
            return 0;
}