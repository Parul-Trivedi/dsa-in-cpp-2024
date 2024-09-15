// ----- Print Sum of N natural Numbers -----------
#include<bits/stdc++.h>
using namespace std;

// Parameterized Recursion
int sum(int s,int N){
    if(N<1){
        return s;
    }
    sum(s+N, N-1);
}

// Functional Recursion
int sumByFunctionalRec(int N){
    if(N==0){
        return 0;
    }
    return N+sumByFunctionalRec(N-1);
}

int main(){
    int N;
    cout<<"Enter Nth natural No-";
    cin>>N;
    cout<<"The sum- "<<sum(0,N)<<endl;
    cout<<"Sum By Functional Recursion - "<<sumByFunctionalRec(N);
    return 0;
}