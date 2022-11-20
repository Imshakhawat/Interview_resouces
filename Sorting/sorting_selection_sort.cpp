// Selection sort in C++

#include<bits/stdc++.h>
using namespace std;

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // put min at the correct position
    swap(array[min_idx], array[step]);
  }
}


// function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

// driver code
int main() {

  #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
  #endif

      
  int data[5] = {20, 12, 10, 15, 2};
 
  selectionSort(data, 5);
  cout << "Sorted array in Acsending Order:\n";
  printArray(data, 5);
    
}