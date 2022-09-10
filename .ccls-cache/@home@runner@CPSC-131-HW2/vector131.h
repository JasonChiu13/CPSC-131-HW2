#ifndef VECTOR131_H_
#define VECTOR131_H_

// template so we can use any data type
template <class T>
class vector131 {
private:
  int capacity; // full capacity of array
  int size; // size of non-empty elements in array and index of next empty element in array
  T *arr; // points to the array

  void initialize(); // initialize all values to 0
  void increaseCap();

public:
  vector131();
  ~vector131();
  void push_front(T el);
  void push_back(T el);
  void displayArr();
  int getSize();
  T getEl(int index);
  void resize(int newSize); // change size of array
  void resize(int newSize, T extVal); // resize array, initialize all extra elements to value of extVal
};

#endif