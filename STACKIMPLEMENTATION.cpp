#include<bits/stdc++.h>
using namespace std;
#define n 100
class stackk
{
	int* arr;
	int top;
public:
	stackk()
	{
		arr = new int[n];
		top = -1;
	}
	void push(int x)
	{
		if (top == n - 1)
		{
			return;
		}
		else
		{
			top++;
			arr[top] = x;
		}
	}
	void pop()
	{
		if (top == -1)
		{
			cout << "stack is empty" << endl;
			return ;
		}
		top--;
	}
	int Top()
	{
		if (top == -1)
		{
			cout << "no element in stack" << endl;
			return -1;
		}
		return arr[top];
	}
	bool empty()
	{
		return top == -1;
	}
};

int main()
{
	stackk s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.Top() << endl;
	s.pop();
	cout << s.Top() << endl;
}