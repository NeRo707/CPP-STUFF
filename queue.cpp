#include <bits/stdc++.h>
using namespace std;

class Queue { 
  private: // private data members
    int front; // front of the queue
  int rear; // index of the last element in the queue
  int arr[5]; // array to store the queue elements
  
  public: // public data members
    Queue() { // default constructor
      front = -1; // front is -1 
      rear = -1; // rear is -1 
      for (int i = 0; i < 5; i++) {
        arr[i] = 0; // set all elements to 0 
      }
    } // constructor for queue class 
  bool isEmpty() {// checks if the queue is empty
    if (front == -1 && rear == -1)
      return true; // queue is empty 
    else
      return false; // queue is not empty
  }
  bool isFull() { // check if queue is full or not 
    if (rear == 4)
      return true;
    else
      return false;
  }
  void enqueue(int val) { // add an element to the queue
    if (isFull()) {
      cout << "Queue full" << endl; // if queue is full then print error message 
      return;
    } else if (isEmpty()) { // if queue is empty then add an element to the queue
      rear = 0;
      front = 0;
      arr[rear] = val; // if queue is empty then assign value to rear and front
    } else {
      rear++;
      arr[rear] = val; // if queue is not empty then assign value to rear and front
    }

  }

  int dequeue() { // remove an element from the queue
    int x = 0;
    if (isEmpty()) { // if queue is empty then print error message
      cout << "Queue is Empty" << endl;
      return x;
    } else if (rear == front) { // if queue is not empty then remove the front element
      x = arr[rear];
      rear = -1;
      front = -1;
      return x;
    } else {
      cout << "front value: " << front << endl; // if queue is not empty then print front value
      x = arr[front];
      arr[front] = 0;
      front++;
      return x;
    }
  }

  int count() {
    return (rear - front + 1); // count the number of elements in the queue
  }

  void display() {
    cout << "All values in the Queue are - " << endl; // print all values in the queue
    for (int i = 0; i < 5; i++) {
      cout << arr[i] << "  ";
    }
  }

};

int main() { // main function
  Queue q1;
  int value, option;

  do {
    cout << "\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Enqueue()" << endl;
    cout << "2. Dequeue()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. isFull()" << endl;       
    cout << "5. count()" << endl;
    cout << "6. display()" << endl;
    cout << "7. Clear Screen" << endl << endl;

    cin >> option;

    switch (option) {  // switch statement to perform different operations
    case 0:
      break;
    case 1:
      cout << "Enqueue Operation \nEnter an item to Enqueue in the Queue" << endl;
      cin >> value;
      q1.enqueue(value);
      break;
    case 2:
      cout << "Dequeue Operation \nDequeued Value : " << q1.dequeue() << endl;
      break;
    case 3:
      if (q1.isEmpty())
        cout << "Queue is Empty" << endl;
      else
        cout << "Queue is not Empty" << endl;
      break;
    case 4:
      if (q1.isFull())
        cout << "Queue is Full" << endl;
      else
        cout << "Queue is not Full" << endl;
      break;
    case 5:
      cout << "Count Operation \nCount of items in Queue : " << q1.count() << endl;
      break;
    case 6:
      cout << "Display Function Called - " << endl;
      q1.display();
      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}