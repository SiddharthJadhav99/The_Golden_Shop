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
    string s1 = "sid";
    string s2 = "sanket";
    string s3 = "sachin";
    string s4 = "komal";
    a.enque(s1);
    a.enque(s2);
    a.enque(s3);
    a.enque(s4);
    a.display();
}