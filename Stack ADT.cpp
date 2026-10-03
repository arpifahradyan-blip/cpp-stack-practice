#include <iostream>
using namespace std;
#include <cassert>
#include "Stack.h"
stack::stack() :top(-1) {
}
stack::~stack() {
	cout << "Destructor" << endl;
}
void stack::push(double a) {
	assert(!isFull());
	top++;
	array[top] = a;
}
double stack::pop(){
	assert(top != -1);
	double k = array[top];
	top--;
	return top;
	}
double stack::get_first() const {
	assert(top != -1);
	return array[top];
}
bool stack::isEmpty() const {
	return top == -1;
}
bool stack::isFull() const {
	return top == 9;
}
void stack::makeEmpty() {
	top = -1;
}
int main() {
	stack a1;
	a1.push(2.4); a1.isEmpty();
	a1.push(3.1);a1.isFull();
	cout << a1.get_first() << endl;
	cout << a1.pop() << endl;
	a1.makeEmpty();
	return 0;
}

