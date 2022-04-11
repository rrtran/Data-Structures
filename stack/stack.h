template<class T>
class Stack
{
public:
	Stack();
	Stack(int);
	T top();
	boolean empty();
	void push(T);
	T pop();
private:
	T* container;
	int size;
};