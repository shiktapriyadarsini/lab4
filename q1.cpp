#include<iostream>
using namespace std;
#include<iostream>

#define SIZE 5
 
using namespace std;
 
class STACKLL
{
    private:
        int num[SIZE];
        int top;
    public:
        STACK();    //default constructor
        int push(int);
        int pop();
        int isEmpty();
        int top();
};
STACKLL::STACK(){
    top=-1;
}
 
int STACKLL::isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;   
}
 
int STACKLL::isFull(){
    if(top==(SIZE-1))
        return 1;
    else
        return 0;
}
 
int STACKLL::push(int n){
    //check stack is full or not
    if(isFull()){
        return 0;
    }
    ++top;
    num[top]=n;
    return n;
}

int STACKLL::pop(){
    //to store and print which number
    //is deleted
    int temp;
    //check for empty
    if(isEmpty())
        return 0;
    temp=num[top];
    --top;
    return temp;
     
}
 
