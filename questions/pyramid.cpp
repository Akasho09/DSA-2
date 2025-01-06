#include <iostream>
using namespace std;
int main() {
int n=4;
  for(int i=1;i<=n;i++){
    int k=i; int ans=2*(i-1);
    /*for(int j=0;j<=n;j++){
      if(j<=n-i){
        cout<<" "<<" ";
      }
      else{
        cout<<k<<" ";
        k++;
      }
    }
    if(i>1){
    for(int k=n+1;k<=n+i-1;k++){
      cout<<ans<<" ";
       ans--;
    }
    }
    cout<<endl;
    }
}*/
    for(int j=1;j<=n+i-1;j++){
      if(j<=n-i){
        cout<<" "<<" ";
      }
      else if(j>n-i  && j<=n){
        cout<<k<<" ";
        k++;
      }
      else if(j>n && j<=n+i-1){
        cout<<ans<<" ";
        ans--;
      }
    }
    cout<<endl;
}
}