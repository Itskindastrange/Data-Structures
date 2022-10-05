//#include<iostream>
//using namespace std;
//template<class T>
//
//class Queue
//{
//	T* arr;
//	int maxsize;
//	int front;
//	int rear;
//	int size;
//public:
//	Queue(int s = 10)
//	{
//		arr = new T[s];
//		maxsize = s;
//		front = 0;
//		rear = -1;
//		size = 0;
//	}
//	bool Enqueue(T d)
//	{
//		if (!IsFull())
//		{
//			rear++;
//			size++;
//			arr[rear % maxsize] = d;
//			return true;
//		}
//		else return false;
//	}
//	bool Dequeue(T& d)
//	{
//		if (!IsEmpty())
//		{
//			d = arr[front % maxsize];
//			front++;
//			size--;
//			return true;
//		}
//		else return false;
//	}
//	bool IsEmpty()
//	{
//		return size == 0;
//	}
//	bool IsFull()
//	{
//		return (size == maxsize);
//	}
//
//	void printQueue()
//	{
//		cout << "\nThe Queue:\n";
//		for (int i = front; i < maxsize; i++)
//		{
//			cout << arr[i]<<" \n";
//		}
//	}
//};
//
//
//int main()
//{
//	Queue<int>Q(3);
//	cout << "\n";
//	Q.Enqueue(123);
//	Q.Enqueue(456);
//	Q.Enqueue(789);
//	cout << "\n";
//	Q.printQueue();
//	int x = 123;
//	cout<<Q.Dequeue(x);
//	cout << "\n";
//	Q.printQueue();
//
//}