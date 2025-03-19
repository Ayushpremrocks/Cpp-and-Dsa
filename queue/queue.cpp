#include<iostream>
using namespace std;
int queue[10], maximum=10, front= -1 , rear=-1;

void enqueue(int num){
    if(rear>maximum-1){
        cout<<"queue is full"<<endl;
    }
    else{
        rear++;
        queue[rear]=num;
    }
}

void dequeue(){
    if(rear==front){
        cout<<"queue is full"<<endl;
    }
    else{
        front++;
    }
}

void frontele(){
	if(front == rear){
		cout<<"queue is empty"<<endl;
	}
	else{
		cout<<"front element is "<<queue[front]<<endl;
	}
}

void isempty(){
	if(front==rear){
		cout<<"queue is empty"<<endl;
	}
	else{
		cout<<"queue is not empty"<<endl;
	}
}

void isfull(){
	if(rear=maximum-1){
		cout<<"queue is full"<<endl;
	}
	else{
		cout<<"queue is not full"<<endl;
	}
}

void display(){
    for(int i=front+1;i<=rear;i++){
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    
    display();

    dequeue();
    dequeue();
    display();

    frontele();
}