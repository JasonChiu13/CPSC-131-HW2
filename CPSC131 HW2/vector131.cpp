#include <iostream>
#include "vector131.h"

// initialize all empty values to 0
template<class T>
void vector131<T>::initialize() {
  for (int i = size; i < capacity; i++) {
    arr[i] = 0;
  }
}

// increase capacity by 10 and copy arr into newArr
template<class T>
void vector131<T>::increaseCap() {
  capacity += 10;
  T *newArr = new T[capacity];
  for (int i = 0; i < size; i++) {
    newArr[i] = arr[i];
  }
  delete [] arr;
  arr = newArr;
  initialize();
}

// constructor
template<class T>
vector131<T>::vector131() {
  capacity = 10;
  arr = new T[capacity];
  size = 0;
}

// destructor
template<class T>
vector131<T>::~vector131() {
  delete [] arr;
}

// resize array to newSize
template<class T>
void vector131<T>::resize(int newSize) {
  T *newArr = new T[newSize];
  // if newSize is larger than current size, initialize extra elements to 0
  if (newSize > size) {
    for (int i = 0; i < size; i++) {
      newArr[i] = arr[i];
    }
    for (int i = size; i < newSize; i++) {
      newArr[i] = 0;
    }
  } else if (newSize < size) {
    for (int i = 0; i < newSize; i++) {
      newArr[i] = arr[i];
    }
  }
  delete [] arr;
  arr = newArr;
  size = newSize;
}

// resize array to newSize
// if newSize larger than current size, initialize extra elements to extVal
template<class T>
void vector131<T>::resize(int newSize, T extVal) {
  T *newArr = new T[newSize];
  if (newSize > size) {
    for (int i = 0; i < size; i++) {
      newArr[i] = arr[i];
    }
    for (int i = size; i < newSize; i++) {
      newArr[i] = extVal;
    }
  } else if (newSize < size) {
    for (int i = 0; i < newSize; i++) {
      newArr[i] = arr[i];
    }
  }
  delete [] arr;
  arr = newArr;
  size = newSize;
}

template<class T>
void vector131<T>::push_front(T el) {
  // add element to first position of array
  // create new array and add el to first spot
  // copy rest of old array into following spots
  T *newArr = new T[size];
  newArr[0] = el;
  for (int i = 1; i <= size; i++) {
    newArr[i] = arr[i - 1];
  }
  size++;
  delete [] arr;
  arr = newArr;
}

// add element to last position of array
template<class T>
void vector131<T>::push_back(T el) {
  if (size >= capacity) { // need to increase size of array
    increaseCap();
  }
  arr[size] = el;
  size++;
}

template<class T>
void vector131<T>::displayArr() {
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

template<class T>
int vector131<T>::getSize() {
    return size;
}

template<class T>
T vector131<T>::getEl(int index) {
  // return element at index
  return arr[index];
}

template class vector131<int>;
template class vector131<char>;
template class vector131<float>;