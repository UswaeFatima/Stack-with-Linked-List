#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

class Stack{
	private:
		Node* top;
	public:
		Linked_List(){
			top = NULL;
		}
		
		bool is_Empty(){
			return top == NULL;
		}
		
		void push(int t_data){
			Node* new_node = new Node;
			new_node->data = t_data;
			if(is_Empty())
			{
				new_node->next = NULL;
				top = new_node;
				return;
			}
			new_node->next = top;
			top = new_node;
		}
		
		void pop(){
			if(is_Empty())
			{
				cout<<"Stack is Empty."<<endl;
				return;
			}
			Node* temp = top;
			top = top->next;
			delete temp;
		}
		
		void peek(){
			if(is_Empty())
			{
				cout<<"Stack is Empty."<<endl;
				return;
			}
			cout <<"TOP: " <<top->data<<endl;
		}
		
		int size(){
			if(is_Empty())
			{
				return 0;
			}
			Node* curr = top;
			int i=0;
			while(curr != NULL)
			{
				i++;
				curr = curr->next;
			}
			return i;
		}
};

int main()
{
	Stack s;
	s.push(10);
	s.peek();
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout <<"SIZE: " <<s.size() <<endl;
	s.peek();
	s.pop();
	s.pop();
	s.pop();
	s.peek();
	cout <<"SIZE: " <<s.size() <<endl;
	
	return 0;
}
