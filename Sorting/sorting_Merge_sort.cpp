#include<bits/stdc++.h>
using namespace std;

// Merge two subarrays L and M into arr
void merge(int arr[], int left, int mid, int right) {

    //left -> P
    //mid -> q
    //right -> r
    // Create L ← A[p..q] and M ← A[q+1..r]
    int newLeftSize = mid - left + 1;
    int newRightSize = right - mid;

    int newLeft[newLeftSize], newRight[newRightSize];

//bangla style a copy
    for (int i = 0; i < newLeftSize; i++)
        newLeft[i] = arr[left + i];

    for (int j = 0; j < newRightSize; j++)
        newRight[j] = arr[mid + 1 + j];

    // Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 0;
    j = 0;
    k = left;

    // Until we reach either end of either L or M, pick larger among
    // elements L and M and place them in the correct position at A[p..r]
    while (i < newLeftSize && j < newRightSize) {
        if (newLeft[i] <= newRight[j]) {
            arr[k] = newLeft[i];
            i++;
        } else {
            arr[k] = newRight[j];
            j++;
        }
        k++;
    }

    // When we run out of elements in either L or M,
    // pick up the remaining elements and put in A[p..r]
    while (i < newLeftSize) {
        arr[k] = newLeft[i];
        i++;
        k++;
    }

    while (j < newRightSize) {
        arr[k] = newRight[j];
        j++;
        k++;
    }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // m is the point where the array is divided into two subarrays
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted subarrays
        merge(arr, left, mid, right);
    }
}

// Print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}




// Driver program
int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[] = {6, 5, 12, 10, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array: \n";
    printArray(arr, size);
    return 0;
}



