//#include<iostream>
//using namespace std;
//template<class T>
//class Stack//LIFO
//{
//	T* arr;
//	int maxsize;
//	int stkptr;
//public:
//	Stack(int s = 10)
//	{
//		arr = new T[s];
//		maxsize = s;
//		stkptr = 0;
//	}
//	bool isEmpty()
//	{
//		return(stkptr == 0);
//	}
//	bool isFull()
//	{
//		return(stkptr == maxsize);
//	}
//	bool push(T d)
//	{
//		if (!isFull())
//		{
//			arr[stkptr++] = d; return true;
//		}
//		else return false;
//	}
//	bool pop(T& d)
//	{
//		if (!isEmpty())
//		{
//			d = arr[--stkptr]; return true;
//		}
//		else return false;
//	}
//	bool top(T& d)
//	{
//		if (!isEmpty())
//		{
//			d = arr[stkptr - 1]; return true;
//		}
//		else return false;
//	}
//	bool checkTop()
//	{
//		if (!isEmpty())
//		{
//			cout << "\nThe element at top is:\n";
//			cout << arr[stkptr - 1]; return true;
//		}
//		else 
//		{
//			cout << "\nEmpty!!!\n"; return false;
//		}
//	}
//	void printStack()
//	{
//		cout << "\nThe entered stack: \n";
//		for (int i = 0; i < maxsize; i++)
//		{
//			cout << arr[i];
//			if (i < maxsize - 1)
//				cout << "->";
//		}
// 
//	}
//};
//
//
//
//int main()
//{
//	int s = 1;
//	cout << "\nEnter size for stack:\n"; cin >> s;
//	Stack<int>S(s);
//	int x = 0; int *arr=new int [s];
//	cout << "Enter stack elements:\n";
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> x;
//		arr[x];
//		S.push(x);
//	}
//	S.printStack();
//	S.checkTop();
//	cout << "\nAfter poping 1 element:\n";
//	S.pop(arr[x]);
//	S.checkTop();
//}