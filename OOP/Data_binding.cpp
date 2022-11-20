/*
Data hiding is a way of restricting the access of our data members 
by hiding the implementation details.
 Encapsulation also provides a way for data hiding.

*/

#include <iostream>
using namespace std;

class Rectangle {
   private:

    // Variables required for area calculation
    int length;
    int breadth;

   public:

    // Setter function for length
    void setLength(int len) {
      length = len;
    }

    // Setter function for breadth
    void setBreadth(int brth) {
      breadth = brth;
    }

    // Getter function for length
    int getLength() {
      return length;
    }

    // Getter function for breadth
    int getBreadth() {
      return breadth;
    }
    // Function to calculate area
    int getArea() {
      return length * breadth;
    }
};

int main() {
  // Create object of Rectangle class
  Rectangle rectangle1;

  // Initialize length using Setter function
  rectangle1.setLength(8);

  // Initialize breadth using Setter function
  rectangle1.setBreadth(6);

  // Access length using Getter function
  cout << "Length = " << rectangle1.getLength() << endl;

  // Access breadth using Getter function
  cout << "Breadth = " << rectangle1.getBreadth() << endl;

  // Call getArea() function
  cout << "Area = " << rectangle1.getArea();

  return 0;
}