//#include<iostream>
//using namespace std;
//template<class T>
//
//class List
//{
//
//	class Node
//	{
//	public:
//		T data;
//		Node* next;
//		Node* prv;
//	};
//	Node* head;
//	Node* tail;
//public:
//	class Iterator
//	{
//		friend class List<T>;
//		Node* curr;
//	public:
//		Iterator()
//		{
//			curr = NULL;
//		}
//		Iterator(Node* c)
//		{
//			curr = c;
//		}
//		T& operator*()
//		{
//			return curr->data;
//		}
//		Iterator& operator++()
//		{
//			curr = curr->next;
//			return *this;
//		}
//		bool operator!=(const Iterator& it)
//		{
//			if (curr != it.curr)
//			{
//				return true;
//			}
//			else return false;
//		}
//		Iterator operator++(int)
//		{
//			Iterator old;
//			old.curr = curr;
//			curr = curr->next;
//			return old;
//		}
//		Iterator& operator--()
//		{
//			curr = curr->prv;
//			return *this;
//		}
//
//
//	};
//	List()
//	{
//		head = new Node;
//		tail = new Node;
//		head->next = tail;
//		tail->prv = head;
//		tail->next = head->prv = NULL;
//	}
//
//
//	Iterator begin() const
//	{
//		Iterator it(head->next);
//		return it;
//	}
//	Iterator end() const
//	{
//		Iterator it(tail);
//		return it;
//	}
//
//	void Insert(Iterator it, T d)
//	{
//		Node* t = it.curr;
//		Node* temp = new Node;
//		temp->data = d;
//		temp->next = t;
//		temp->prv = t->prv;
//		t->prv->next = temp;
//		t->prv = temp;
//	}
//
//	Iterator Erase(Iterator it)
//	{
//		Node* t = it.curr;
//		Iterator ite(t->next);
//		t->prv->next = t->next;
//		t->next->prv = t->prv;
//		delete t;
//		return ite;
//	}
//	void insert_at_start(T d)
//	{
//		Insert(begin(), d);
//	}
//	void insert_at_end(T d)
//	{
//		Insert(end(), d);
//	}
//	void Erase_at_start()
//	{
//		Erase(begin());
//	}
//	void Erase_at_end()
//	{
//		Erase(--end());
//	}
//	void printList()
//	{
//		Node* temp = head->next;
//		cout << "\nEntered List:\n";
//		while (temp != tail)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//	}
//	~List()
//	{
//		while (head->next != tail)
//		{
//			Erase_at_start();
//		}
//		delete head;
//		delete tail;
//	}
//};
//template<typename T>
//void Delete(List<int>& L, T d)
//{
//	List<int>::Iterator it(L.begin());
//	while (it != L.end())
//	{
//		if (*it == d)
//		{
//			it = L.Erase(it);
//		}
//		else ++it;
//	}
//}
//int main()
//{
//	List<int>L_obj;
//	L_obj.insert_at_end(5);
//	L_obj.insert_at_end(3);
//	L_obj.insert_at_end(9);
//	List<int>::Iterator i_obj;
//	i_obj = L_obj.begin();
//	L_obj.Insert(i_obj, 8);
//	++i_obj;
//	L_obj.Insert(i_obj, 4);
//
//	L_obj.Insert(i_obj, 7);
//	i_obj = L_obj.end();
//
//	L_obj.Insert(i_obj, 10);
//	Delete(L_obj, 3);
//	Delete(L_obj, 8);
//	for (i_obj = L_obj.begin(); i_obj != L_obj.end(); ++i_obj)
//	{
//		cout << *(i_obj) << " ";
//	}
//
//}