#include<iostream>
#include<list>
using namespace std;

bool compint(const int& a, const int& b) {
	return a - 3 > b + 3;
}

int main()
{
	list<int> mylist;

	// One
	mylist.push_back(3);			// 33
	mylist.push_back(13);			// 23
	mylist.push_back(23);			// 13
	mylist.push_back(15);			// 15
	mylist.push_back(9);			// 3
	mylist.push_back(13);			// 9
	mylist.push_back(12);			// 13
	mylist.push_back(33);			// 12

	// Two
	//mylist.push_back(33);			// 33
	//mylist.push_back(12);			// 23
	//mylist.push_back(13);			// 12
	//mylist.push_back(9);			// 13
	//mylist.push_back(15);			// 9
	//mylist.push_back(23);			// 15
	//mylist.push_back(13);			// 13
	//mylist.push_back(3);			// 3

	// Sort mylist with condition compint
	mylist.sort(compint);

	// -> Compair from last number in list with others in list. -> if diff > 6 -> move up

	list<int>::iterator p = mylist.begin();

	while (p != mylist.end())
	{
		cout << *p << endl; p++;
	}

	return 0;
}
