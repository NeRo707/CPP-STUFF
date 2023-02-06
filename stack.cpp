#include <bits/stdc++.h>
using namespace std;

  class Stack{
    private:
      int top;
      int arr[5];

    public:
      Stack (){
        top = -1;
        
        for(int i = 0; i < 5; i++){
          arr[i] = 0;
        }

      }

      bool isEmpty(){
        if(top == -1){
          return true;
        }else{
          return false;
        }
      }

      bool isFull(){
        if(top == 4){
          return true;
        }else{
          return false;
        }
      }

      void push(int val){
        if(isFull()){
          cout<<"stack-overflow"<<endl;
        }else{
          top++;
          arr[top] = val;
        }
      }

      int pop(){
        if(isEmpty()){
          cout<<"stack-underflow"<<endl;
          return 0;
        }else{
          int popValue = arr[top];
          arr[top] = 0;
          top--;
          return popValue;
        }
      }
      
      int count(){
        return (top+1);
      }

      int peek(int pos){
        if(isEmpty()){
          cout<<"stack-underflow"<<endl;
          return 0;
        }else{
          return arr[pos];
        }
      }

      void change(int pos, int val){
        arr[pos] = val;
        cout<<"value changed at location"<<pos<<endl;
      }

      void display(){
        cout<<"All values in the Stack:"<<endl;
        for(int i = 4; i >= 0; i--){
          cout<<arr[i]<<endl;
        }
      }
  };

int main() {

  Stack s1;

  int option,position,value;

  do{

    cout<<"Choose key"<<endl;
    cout<<"1.push"<<endl;
    cout<<"2.pop"<<endl;
    cout<<"3.isEmpty?"<<endl;
    cout<<"4.isFull?"<<endl;
    cout<<"5.peek"<<endl;
    cout<<"6.count"<<endl;
    cout<<"7.change"<<endl;
    cout<<"8.display"<<endl;
    cout<<"9.clearscreen"<<endl;

    cin>>option;

    switch(option){
      case 1:
        cout<<"enter value to push"<<endl;
        cin>>value;
        s1.push(value);
        break;
      case 2:
        cout<<"pop func called"<<endl;  
        s1.pop();
        break;
      case 3:
        if(s1.isEmpty())
          cout<<"stack is empty"<<endl;
        else
          cout<<"stack is not empty"<<endl;
        break;
      case 4:
        if(s1.isFull())
          cout<<"stack is full"<<endl;
        else
          cout<<"stack is not full"<<endl;
        break;
      case 5:
        cout<<"enter pos to peek"<<endl;
        cin>>position;
        cout<<"peek called "<<endl<<"value at pos: "<<position<<" is: "<<s1.peek(position)<<endl;
        break;
      case 6:
        cout<<"num off items in stack are "<<s1.count()<<endl;
        break;
      case 7:
        cout<<"change func called"<<endl;
        cout<<"enter pos (item) to change"<<endl;
        cin>>position;
        cout<<endl;
        cout<<"enter value of item you want to change : ";
        cin>>value;
        s1.change(position, value);
        break;
      case 8:
        cout<<"display func called"<<endl;
        s1.display();
        break;
      case 9:
        system("cls");
        break;
      default:
        cout<<"enter proper option number"<<endl;

    }

  }while(option != 0);

  return 0;
}
