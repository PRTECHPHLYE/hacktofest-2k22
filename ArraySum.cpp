// C++ program to show Array Sum


#include <iostream>
#include <numeric>
using namespace std;


int arraySum(int a[], int n)
{
	int initial_sum = 0;
	return accumulate(a, a+n, initial_sum);
}

int main()
{
	
	int n; //size of array
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  cout << arraySum(a, n);
  
	return 0;
}
