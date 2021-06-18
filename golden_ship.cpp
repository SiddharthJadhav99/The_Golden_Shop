#include <iostream>
using namespace std;

class queue{
    public:
    int front, rear, size;
    int *queue;
    void queue(int n){
        front = rear = 0;
        queue = new int;
        size = n;
    }
    int enque(int num){
        if(rear == size){
            cout<<"The Queue is Full"<<endl;
            return;
        }
        else{
            queue[rear] = num;
            rear++;
        }
    }
    int deque(){
        if(front == rear){
            cout<<"The Queue is Empty"<<endl;
            return;
        }
        else{
            for (int i = 0; i < rear-1; i++){
                queue[i] = queue[i+1];
                front++;
            }
        }
    }
    void display(){
        if (front == rear){
            cout<<"The Queue is Empty"<<endl;
        }
        for (int j = front; j < rear; j++){
            cout<<queue[j]<<"-->";
        }
    }
};
int main(){

}