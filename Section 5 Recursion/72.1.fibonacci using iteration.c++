 #include<iostream>
using namespace std;

int fibo(int n){
    int t0=0,t1=1,s=0;
    if(n<=1){
        return n;
    }
    for(int i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}

// TC: O(n)
// SC: O(1)