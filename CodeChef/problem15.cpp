// Problem
// Chef has finally got the chance of his lifetime to drive in the F1F1 tournament. But, there is one problem. Chef did not know about the 107% rule and now he is worried whether he will be allowed to race in the main event or not.

// Given the fastest finish time as XX seconds and Chef's finish time as YY seconds, determine whether Chef will be allowed to race in the main event or not.

// Note that, Chef will only be allowed to race if his finish time is within 107% of the fastest finish time.

// Input Format
// First line will contain TT, number of testcases. Then the testcases follow.
// Each testcase contains of a single line of input, two space separated integers XX and YY denoting the fastest finish time and Chef's finish time respectively.
// Output Format
// For each test case, output \texttt{YES}YES if Chef will be allowed to race in the main event, else output \texttt{NO}NO.

// You may print each character of the string in uppercase or lowercase (for example, the strings \texttt{YeS}YeS, \texttt{yEs}yEs, \texttt{yes}yes and \texttt{YES}YES will all be treated as identical).

// Constraints
// 1 \leq T \leq 2\cdot 10^41≤T≤2⋅10 
// 4
 
// 1 \leq X \leq Y \leq 2001≤X≤Y≤200
// Sample 1:
// Input
// Output
// 4
// 1 2
// 15 16
// 15 17
// 100 107
// NO
// YES
// NO
// YES
// Explanation:
// Test case 11: The fastest car finished in 11 second. Thus, Chef should have finished on or before 1.071.07 seconds to ensure qualification but he finished in 22 seconds. Hence, Chef will not be allowed to race in the main event.

// Test case 22: The fastest car finished in 15 seconds. Thus, Chef should have finished on or before 16.0516.05 seconds to ensure qualification and he managed to finish in 1616 seconds. Hence, Chef will be allowed to race in the main event.

// Test case 33: The fastest car finished in 1515 seconds. Thus, Chef should have finished on or before 16.0516.05 seconds to ensure qualification but he finished in 1717 seconds. Hence, Chef will not be allowed to race in the main event.

// Test case 44: The fastest car finished in 100100 seconds. Thus, Chef should have finished on or before 107107 seconds to ensure qualification and he finished just in time for qualification. Hence, Chef will be allowed to race in the main event.

#include <iostream>
using namespace std;

void F1Rule(int a , int b ){
  if((a*1.07)<b){
    cout<<"NO"<<endl;
  }else{
    cout<<"YES"<<endl;
  }
}

int main()
{
 // Write code  here 

 int t;
 cin>>t;
 while (t--)
 {
    /* code */
    int a ,b;
    cin>>a>>b;
    F1Rule(a,b);
 }
 
    
    return 0;
}