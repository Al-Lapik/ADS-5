// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, const int k_size = 100>
class TStack {
 private:
  T arr[k_size];
  int top;
 
 public:
  TStack() : top(-1) {}
  bool isEmpty() {
    return top == -1;
  }

  bool isFull() {
    return top == k_size - 1;
  }

  T get() {
    if (!isEmpty())
      return *(arr + top);
    else
      throw "Stack is empty yet, add more elements";
  }

  void pop() {
    if (!isEmpty())
      --top;
  }

  void push(T value) {
    if (!isFull())
      *(arr + ++top) = value;
    else
      throw "Stack is already full, remove some elements";
  }
};
#endif  // INCLUDE_TSTACK_H_
