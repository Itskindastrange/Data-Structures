//#include<iostream>
//using namespace std;
//
//template<class T>
//
//class List
//{
//	class Node
//	{
//	public:
//		T data;
//		Node* next;
//
//    };
//	Node* head;
//	Node* tail;
//
//public:
//	List()
//	{
//		head = tail = NULL;
//	}
//	void Insert_at_Start(T d)
//	{
//		Node* temp = new Node<T>;
//		temp->data = d;
//		temp->next = head;
//		if (head == NULL)
//		{
//			head = tail = temp;
//		}
//		else head = temp;
//
//	}
//
//	void Insert_at_End(T d)
//	{
//		Node* temp = new Node;
//		temp->data = d;
//		temp->next = NULL;
//		if (head==NULL)
//		{
//			head = tail = temp;
//		}
//		else
//		{
//			tail->next = temp;
//			tail = temp;
//		}
//	}
//	void print()
//	{
//		Node* temp = head;
//		while (temp!=NULL)
//		{
//			cout << temp->data << "\n"; temp = temp->next;
//		}
//	}
//	Node* Search(T d)
//	{
//		Node* temp = head;
//		while (temp != NULL)
//		{
//			if (temp->data=d)
//			{
//				return temp;
//				temp = temp->next;
//			}
//			return temp;
//		}
//	}
//
//	void delete_at_start()
//	{
//		if (head!=NULL)
//		{
//			Node* temp = head;
//			head = head->next;
//			delete temp;
//			if (head==NULL)
//			{
//				tail = NULL;
//			}
//		}
//	}
//	void delete_at_end()
//	{
//		if (head!=NULL)
//		{
//			if (head==tail)
//			{
//				delete head;
//				head = tail = NULL;
//
//			}
//			else
//			{
//				Node* temp = head; 
//				while (temp->next != tail)
//				{
//					temp = temp->next;
//				}
//				delete tail;
//				tail = temp;
//				tail->next = NULL;
//			}
//		}
//	}
//	~List()
//	{
//		while (head != NULL)
//		{
//			delete_at_start();
//		}
//	}
//};
//	
////template<typename T>
////void Removefrominbetween(Iterator it)
////{
////	Node* t = it.curr;
////	if (t->next==tail)
////	{
////		delete tail;
////		t->next = NULL;
////		tail = t;
////	}
////	else
////	{
////		Node* temp = t->next;
////		t->data = temp->data;
////		t->next = temp->next;
////		delete temp;
////	}
////}
//int main()
//{
//	List<int>L1;
//	L1.Insert_at_Start(5);
//	L1.Insert_at_Start(10);
//
//}