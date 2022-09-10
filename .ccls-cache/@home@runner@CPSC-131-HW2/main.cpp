#include <iostream>
#include "vector131.h"
using namespace std;

int main () {
  cout << "Dynamic array with type int" << endl;
  vector131<int> intArray;
  intArray.push_back(2); // add values 2-5 to array
  intArray.push_back(3);
  intArray.push_back(4);
  intArray.push_back(5);
  intArray.push_front(1); // add 1 to front
  intArray.displayArr();
  cout << "Current size: " << intArray.getSize() << endl;

  intArray.resize(3); // change size to 3
  intArray.displayArr();
  cout << "Current size: " << intArray.getSize() << endl;
  
  intArray.resize(10, 1); // change size to 10 and make non-initialized values 1
  intArray.displayArr();
  cout << "Current size: " << intArray.getSize() << endl;
  cout << endl;

// ==================================
  
  cout << "Dynamic array with type char" << endl;
  vector131<char> charArray;
  charArray.push_back('a'); // add chars a-d to array
  charArray.push_back('b');
  charArray.push_back('c');
  charArray.push_back('d');
  charArray.push_front('z'); // add z to front
  charArray.displayArr();
  cout << "Current size: " << charArray.getSize() << endl;

  charArray.resize(3);
  charArray.displayArr();
  cout << "Current size: " << charArray.getSize() << endl;

  charArray.resize(10, 'z');
  charArray.displayArr();
  cout << "Current size: " << charArray.getSize() << endl;

  // ==================================

  return 0;
}
