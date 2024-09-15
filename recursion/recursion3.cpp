// ----- Factorial of N -----------
#include<bits/stdc++.h>
using namespace std;

// Parameterized Recursion

int factorial(int f,int N){
    if(N<1){
        return f;
    }
    factorial(f*N, N-1);
}
// Functional Recursion
int factorialByFunctionalRec(int N){
    if(N==0){
        return 1;
    }
    return N* factorialByFunctionalRec(N-1);
}
int main(){
    int N;
    cout<<"Enter N-";
    cin>>N;
    cout<<"The factorial- "<<factorial(1,N)<<endl;
    cout<<"Factorial By Functional Recursion - "<<factorialByFunctionalRec(N);
    return 0;
}