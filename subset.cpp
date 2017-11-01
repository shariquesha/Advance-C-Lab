#include <iostream>
using namespace std;

bool calculateSubSet(int *arr, int pos, int last)
{
	if(pos > last)
		return 0;

	long long sum = 0;
	for(int i=0; i<last; i++)
		sum += arr[i]+ arr[pos] + calculateSubSet(arr, pos+1, last);

	cout<<sum<<endl;
	return 0;
}

int main(void)
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];

	calculateSubSet(arr, 0, n-1);
	return 0;
}