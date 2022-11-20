// C++ program to find the second largest element in the array
#include<bits/stdc++.h>
using namespace std;


int secondLargest(int arr[], int n) {
	int largest = 0, secondLargest = -1;

	// finding the largest element in the array
	for (int i = 1; i < n; i++) {

		largest = max(largest, arr[i]);

	}

	// finding the largest element in the array excluding
	// the largest element calculated above
	for (int i = 0; i < n; i++) {
		if (arr[i] != largest) {

			secondLargest = max(secondLargest, arr[i]);


		}
	}
	return secondLargest;
}


int main() {


	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif


	int arr[] = {10, 12, 20, 4};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<secondLargest(arr,n)<<endl;
	

}
