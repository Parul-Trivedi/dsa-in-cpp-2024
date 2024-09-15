// Recursion- When a function calls itself until a specific condition is met
// Base Condition- It terminates Recursion

// ------------- Print 1 to N BACKTRACKING -----------------
// #include<bits/stdc++.h>
// using namespace std;
// void print1toN(int i, int N){
//     if(i==0){
//         return;
//     }
//     print1toN(i-1, N);
//     cout<<i<<" ";
// }

// int main(){
//     int N;
//     cout<<"The Number-:";
//     cin>>N;
//     print1toN(N, N);
//     return 0;
// }


// !!!!!!!!!! Print from N to 1 !!!!!!!!!!!!!!!
// #include<bits/stdc++.h>
// using namespace std;

// void printNumbersInReverse(int i,int N){
//     if(i>N){
//         return;
//     }
//     printNumbersInReverse(i+1,N);
//     cout<<i<<" ";
// }
// int main(){
//     int N;
//     cout<<"Enter the Number-:";
//     cin>>N;
//     printNumbersInReverse(1,N);
//     return 0;
// }

// ********** Print from 1 to N *****************
// #include<bits/stdc++.h>
// using namespace std;
// void printNumbers(int i, int N){
//     if(i>N){
//         return;
//     }
//     cout<<i<<" ";
//     printNumbers(i+1, N);
// }
// int main(){
//     int N;
//     cout<<"Enter the Number-:";
//     cin>>N;
//     printNumbers(1,N);
//     return 0;
// }

//-------------- PRINT NAME 'N' TIMES--------------------
// -----TC- O(n) and SC- O(n)----------------
// #include <bits/stdc++.h>
// using namespace std;

// void printName(int count){
//     if(count==5){
//         return;
//     }
//     cout<<"Parul"<<endl;
//     printName(count+1);
// }

// int main() {
//     printName(1);
//     return 0;
// }