//
// Created by Priyank Vora on 10/5/16.
//

#include <iostream>


using namespace std;


// kandan's algorithm


int MSS(int A[], int n)
{
  int ans=A[0], sum=0;
  for(int i=0; i<n; i++)
  {
    sum = sum + A[i];
    ans = max(ans,sum);
    sum = max(sum,0);
  }
  return ans;
}


int main()
{
  int A[] = {-2,2,23,-4,4};
  int n = sizeof(A)/ sizeof(A[0]);
  int number = MSS(A,n);
  cout << "Maximum Sub array is : " << number << endl;
  return 0;
}