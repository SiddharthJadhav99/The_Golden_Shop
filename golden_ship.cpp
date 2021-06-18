#include <iostream>
#include <string.h>
using namespace std;

class Queue{
    public:
    int front, rear, size;
    string *queue;
    Queue (int n){
        front = rear = 0;
        queue = new string;
        size = n;
    }
    void enque(string data){
        if(rear == size){
            cout<<"The Queue is Full"<<endl;
            return;
        }
        else{
            queue[rear] = data;
            rear++;
        }
        return;
    }
    void deque(){
        if(front == rear){
            cout<<"The Queue is Empty"<<endl;
            return;
        }
        else{
            for (int i = 0; i < rear-1; i++){
                queue[i] = queue[i+1];
            }
            rear--;
        }
        return;
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
    int l;
    string name;
    cout<<"Enter the length"<<endl;
    cin>>l;
    Queue a(l);
    for (int i = 0; i < l; i++){
        cout<<"Enter the name is person in Queue at Position "<<i<<endl;
        cin>>name;
        a.enque(name);
    }
    a.display();
}