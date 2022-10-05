//#include<iostream>
//using namespace std;
//template <class T>
//class DList
//{
//	class DNode
//	{
//		T data;
//		DNode* next;
//		DNode* prv;
//	};
//	DNode* head;
//	DNode* tail;
//
//public:
//	DList()
//	{
//		head = new DNode;
//		tail = new DNode;
//		head->next = tail;
//		tail->prv = head;
//		tail->next = head->prv = NULL;
//	}
//	void insert_at_start(T d)
//	{
//		DNode* temp = new DNode;
//		temp->data = d;
//	
//		temp->prv = head;
//		temp->next=tail;
//		head->next->prv=temp;
//		head->next = temp;
//
//	}
//	void insert_at_end(T d)
//	{
//		DNode* temp = new Node;
//		temp->data = d;
//		temp->next = tail;
//		temp->prv = tail->prv;
//		tail->prv->next = temp;
//		tail->prv = temp;
//	}
//
//	void delete_at_end()
//	{
//		DNode* temp = tail->prv;
//		temp->prv->next = temp->next;
//		temp->next->prv = temp->prv;
//		delete temp;
//	}
//};
//
//
//
//int main()
//{
//	
//}