#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <forward_list>

using namespace std;

void main()
{
	int i;
	cout << "--array test--" << endl;
	array<int, 5> arr1 = { 1,2,3,4 };
	for (i = 0; i < arr1.size(); i++)
	{
		cout << arr1[i];
	}
	cout << endl;

	arr1[4] = 5;
	cout << "원소 추가=>";
	for (i = 0; i < arr1.size(); i++)
	{
		cout << arr1[i];
	}
	cout << endl;

	arr1[0] = 0;
	cout << "원소 삭제=>";
	for (i = 0; i < arr1.size(); i++)
	{
		cout << arr1[i];
	}
	cout << endl;

	arr1.fill(3);
	cout << "원소 3으로 채우기=>";
	for (i = 0; i < arr1.size(); i++)
	{
		cout << arr1[i];
	}
	cout << endl;

	cout << "arr size =>";
	cout << arr1.size() << endl;

	array<int, 5> arr2 = { 11,22,33,44,55 };
	cout << "arr2 = ";
	for (i = 0; i < arr2.size(); i++)
	{
		cout << arr2[i];
	}
	cout << endl;
	
	cout << "arr1 swap arr2=> arr1= ";
	arr1.swap(arr2);
	for (i = 0; i < arr1.size(); i++)
	{
		cout << arr1[i];
	}
	cout << " ,arr2= ";
	for (i = 0; i < arr2.size(); i++)
	{
		cout << arr2[i];
	}
	cout << endl << endl;

	cout << "--vector test--" << endl;
	vector<int> v1;

	cout << "vector assign(5,7)=>";
	v1.assign(5, 7);
	for (i = 0; i < v1.size(); i++)
	{
		cout << v1[i];
	}
	cout << endl;

	cout << "원소삽입==>";
	v1.push_back(3);
	for (i = 0; i < v1.size(); i++)
	{
		cout << v1[i];
	}
	cout << endl;

	cout << "원소삭제==>";
	v1.pop_back();
	for (i = 0; i < v1.size(); i++)
	{
		cout << v1[i];
	}
	cout << endl;

	cout << "vector.size()=>"; //요소의 개수
	cout << v1.size() << endl;

	cout << "vector.capacity()=>"; //할당된 메모리
	cout << v1.capacity() << endl << endl;

	cout << "--deque test--" << endl;
	deque<int> dq1;

	cout << "deque.assign(5,3)=>";
	dq1.assign(5, 3);
	for (i = 0; i < dq1.size(); i++)
	{
		cout << dq1[i];
	}
	cout << endl;

	cout << "원소삽입=>";
	dq1.push_front(7);
	dq1.push_back(5);
	for (i = 0; i < dq1.size(); i++)
	{
		cout << dq1[i];
	}
	cout << endl;

	cout << "원소삭제=>";
	dq1.pop_front();
	for (i = 0; i < dq1.size(); i++)
	{
		cout << dq1[i];
	}
	cout << endl;

	cout << "deque.rbegin(), dq1.rend()=>";
	deque<int>::reverse_iterator riter;
	for (riter = dq1.rbegin(); riter != dq1.rend(); riter++)
	{
		cout << *riter;
	}
	cout << endl;

	deque<int>::iterator iter;
	cout << "deque.begin(), dq1.end()=>";
	for (iter = dq1.begin(); iter != dq1.end(); iter++)
	{
		cout << *iter;
	}
	cout << endl << endl;

	cout << "--list test--" << endl;
	list<int> lt;

	cout << "원소삽입=>";
	for (i = 0; i < 5; i++)
	{
		lt.push_front(9);
	}
	list<int>::iterator iter2;
	for (iter2 = lt.begin(); iter2 != lt.end(); iter2++)
	{
		cout << *iter2;
	}
	cout << endl;

	cout << "원소앞 제거후 7삽입&뒤 3삽입=>";
	lt.pop_front();
	lt.push_front(7);
	lt.push_front(3);
	for (iter2 = lt.begin(); iter2 != lt.end(); iter2++)
	{
		cout << *iter2;
	}
	cout << endl;

	cout << "list.sort()=>";
	lt.sort();
	for (iter2 = lt.begin(); iter2 != lt.end(); iter2++)
	{
		cout << *iter2;
	}
	cout << endl;

	cout << "list.unique()=>"; //인접한 원소가 같으면 중복제거
	lt.unique();
	for (iter2 = lt.begin(); iter2 != lt.end(); iter2++)
	{
		cout << *iter2;
	}
	cout << endl;

	cout << "list.remove(9)=>";
	lt.remove(9);
	for (iter2 = lt.begin(); iter2 != lt.end(); iter2++)
	{
		cout << *iter2;
	}
	cout << endl << endl;

	cout << "--queue test--" << endl;
	queue<int> que;

	cout << "원소삽입 5개=>";
	que.push(3);
	que.push(5);
	que.push(7);
	que.push(8);
	que.push(3);

	while (!que.empty())
	{
		cout << que.front();
		que.pop();
	}
	cout << endl;

	cout << "원소삭제=>";
	que.push(3);
	que.push(5);
	que.push(7);
	que.push(8);
	que.push(3);
	que.pop();

	while (!que.empty())
	{
		cout << que.front();
		que.pop();
	}
	cout << endl;
	
	cout << "queue.front()=>";
	que.push(5);
	que.push(7);
	que.push(8);
	que.push(3);
	cout << que.front() << endl;

	cout << "queue.back()=>";
	cout << que.back() << endl;

	cout << "queue.empty()=>";
	cout << que.empty() << endl << endl;

	cout << "--stack test--" << endl;
	stack<int> st;

	cout << "원소삽입=>";
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);

	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}
	
	cout << endl;

	cout << "원소삭제=>";
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.pop();

	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}

	cout << endl;

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);

	cout << "stack.size()=>";
	cout << st.size() << endl;

	cout << "stack.top()=>";
	cout << st.top() << endl;

	cout << "stack.empty()=>";
	cout << st.empty() << endl << endl;

	cout << "--forward_list test--" << endl;
	forward_list<int> flist;
	forward_list<int>::iterator iter3;
	cout << "원소삽입=>";
	for (i = 0; i < 5; i++)
	{
		flist.push_front(i);
	}

	for (iter3 = flist.begin(); iter3 != flist.end(); iter3++)
	{
		cout << *iter3;
	}

	cout << endl;

	cout << "flist.insert_after(iter=begin,7)=>";
	flist.insert_after(flist.begin(), 7);
	for (iter3 = flist.begin(); iter3 != flist.end(); iter3++)
	{
		cout << *iter3;
	}

	cout << endl;

	cout << "flist.emplace_after(iter=begin,8)=>";
	flist.emplace_after(flist.begin(), 8);
	for (iter3 = flist.begin(); iter3 != flist.end(); iter3++)
	{
		cout << *iter3;
	}

	cout << endl;

	cout << "원소삭제=>";
	flist.pop_front();
	for (iter3 = flist.begin(); iter3 != flist.end(); iter3++)
	{
		cout << *iter3;
	}

	cout << endl;

	forward_list<int> flist2;
	forward_list<int>::iterator iter4;
	for (i = 5; i < 10; i++)
	{
		flist2.push_front(i);
	}

	cout << "flist2=";
	for (iter4 = flist2.begin(); iter4 != flist2.end(); iter4++)
	{
		cout << *iter4;
	}

	cout << endl;

	cout << "flist.splice_after()=>";
	flist.splice_after(flist.begin(),flist2);

	for (iter3 = flist.begin(); iter3 != flist.end(); iter3++)
	{
		cout << *iter3;
	}

	cout << endl;


	

	system("pause");

}