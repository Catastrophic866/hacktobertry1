#include<bits/stdc++.h>
using namespace std; 

int count(int n,int m){
        if(n==1 || m==1) return 1;
        return count(n-1,m)+count(n,m-1);
}

signed main(){ 
        cout<<count(3,3);  
        return 0;
}
