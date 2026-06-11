#include<bits\stdc++.h>
using namespace std;
int main(){                    //Cover in Water
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
            int n;
            cin>>n;
            string s;
            cin>>s;
            int x=0;
             for(int i=0;i<n;i++){
                if((i==0 || i==n-1)){
                    if(s[i]=='.'){
                        x++;
                    }else{
                        continue;
                    }
                }else{
                    if(s[i]=='.'){
                        if(s[i-1]=='.' && s[i+1]=='.'){
                           x=2;
                           break;
                        }else{
                            x++;
                        }
                    }else if(s[i]=='#'){
                        continue;
                    }
                }
             }
             cout<<x<<endl;
    }
    return 0;
}