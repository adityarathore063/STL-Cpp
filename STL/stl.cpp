#include<bits/stdc++.h>
#include<vector>
#include <deque>
#include<list>
#include <stack>
#include <queue>
#include<set>
#include <map>
using namespace std;

int main() {

	// ************** Vector ***************
	// vector<int> v;
	// vector<int> a(5, 1);

	// vector<int> b(a); // copying of vector a into b
	// cout << "capacity of vector " << v.capacity() << "\n"; /// how much memory allocated for vector
	// cout << "size of vector " << v.size() << "\n"; /// how much elements in the vector
	// v.push_back(1);
	// cout << "capacity of vector " << v.capacity() << "\n";
	// cout << "size of vector " << v.size() << "\n";
	// v.push_back(2);
	// cout << "capacity of vector " << v.capacity() << "\n";
	// cout << "size of vector " << v.size() << "\n";
	// v.push_back(3);
	// cout << "capacity of vector " << v.capacity() << "\n"; // when vector are filled and then try to fill other element it doubles the own capacity
	// cout << "size of vector " << v.size() << "\n";

	// cout << v.front() << "\n";
	// cout << v.back() << "\n";

	// cout << "element at index 2 is " << v.at(1) << "\n";

	// for (auto i : v) {
	// 	cout << i << " ";
	// }
	// cout << "\n";
	// v.clear(); // it does not reduce the capacity of a vector
	// cout << "capacity of vector " << v.capacity() << "\n";
	// cout << "size of vector " << v.size() << "\n";
	// for (auto i : a) {
	// 	cout << i << " ";
	// }
	// cout << "\n";
	// for (auto i : b) {
	// 	cout << i << " ";
	// }
	// cout << "\n";

	// ************** DEQUEUE*************
	// Doubly ended queue
	// it is also dynamic
	// at both end insertion and deletion is possible
	// it is implemented by using multiple contigous array
	// Random access possible
	// deque<int> d;
	// d.push_back(1);
	// d.push_front(2);
	// for (auto i : d) {
	// 	cout << i << " ";
	// }
	// cout << "\n";
	// d.pop_back();
	// d.pop_front();
	// for (auto i : d) {
	// 	cout << i << " ";
	// }
	// cout << "\n";

	// cout << "first element is " << d.at(0) << "\n";

	// cout << d.front() << "\n";
	// cout << d.back() << "\n";

	// cout << "Empty or not-> " << d.empty() << "\n";

	// cout << d.size() << "\n";
	// d.erase(d.begin(), d.begin() + 1);
	// cout << d.size() << "\n";

	// *************** LIST **********************
	// stl list implementation -> using doubly linked list
	// direct acess is not possible
	// list<int> l;
	// l.push_back(1);
	// l.push_front(2);
	// for (auto i : l) {
	// 	cout << i << " ";
	// }
	// cout << "\n";
	// cout << "size of list " << l.size() << "\n";
	// l.erase(l.begin());
	// for (auto i : l) {
	// 	cout << i << " ";
	// }
	// ********************* Stack **************(LIFO Data structures)
	// stack<string> s;
	// s.push("aditya");
	// s.push("kumar");
	// s.push("singh");
	// cout << s.top() << "\n";
	// s.pop();
	// cout << s.top() << "\n";
	// cout << "size of stack is " << s.size() << "\n";
	// cout << "Empty or not " << s.empty() << "\n";

	// ***************** QUEUE ************(FIFO data structure)
	// queue<int> q;
	// q.push(3);
	// q.push(4);
	// q.push(5);
	// cout << q.front() << "\n";
	// cout << q.size() << "\n";
	// q.pop();
	// cout << q.front() << "\n";
	// cout << q.size() << "\n";
	// cout << "Empty or not " << q.empty() << "\n";

	// ********** Priority queue **********
	// if we make a priroty queue of max_heap then if we out/print the element it always out the max element
	// if we make a priroty queue of min_heap then if we out/print the element it always out the min element
	// default priority queue is by using max_heap
	// max heap
	// priority_queue<int> maxi;
	// min heap
	// priority_queue<int, vector<int>, greater<int> > mini;
	// maxi.push(1);
	// maxi.push(3);
	// maxi.push(2);
	// maxi.push(0);

	// cout << "size of maxi is " << maxi.size() << "\n";
	// int n = maxi.size();
	// for (int i = 0; i < n; i++) {
	// 	cout << maxi.top() << " ";
	// 	maxi.pop();
	// }
	// cout << "\n";
	// cout << "Empty or not " << maxi.empty() << "\n";

	// mini.push(5);
	// mini.push(1);
	// mini.push(0);
	// mini.push(4);
	// mini.push(3);
	// int m = mini.size();
	// cout << n << "\n";
	// for (int i = 0; i < m; i++) {
	// 	cout << mini.top() << " ";
	// 	mini.pop();
	// }
	// cout << "\n";

	// ************** Set ************
	// set stores only unique element
	// implementation using bst
	// no modification with element allows
	// element returns in sorted order
	// unordered_set is faster than set and implemented using hashing
	// in unordered_set elements does not returns in sorted way
	// set<int> s;
	// s.insert(5); // tc -> O(logn)
	// s.insert(6);
	// s.insert(3);
	// s.insert(9);
	// s.insert(9); // does not insert bcz already 9 is present
	// for (auto i : s) {
	// 	cout << i << " ";
	// } cout << "\n";
	// s.erase(s.begin()); // O(logn)

	// for (auto i : s) {
	// 	cout << i << " ";
	// } cout << "\n";

	// cout << "check 6 is present or not-> " << s.count(5) << "\n"; // O(logn)
	// cout << *(s.find(9)) << "\n"; // O(logn) // if element is present then it returns the iterator pointing towards element

	// *************** Map ***************
	// there is the value exist in key value pair
	// key is distinct and one key pointing towards only one pair
	// same key not point the two value
	// map print in sorted order but unordered_map print random order
	map<int, string> m;
	m[1] = "aditya";
	m[2] = "singh";
	m[6] = "pagal";
	m.insert({5, "kumar"});
	for (auto i : m) {
		cout << i.first << " " << i.second << "\n";
	}

	cout << "finding 5 -> " << m.count(5) << "\n";
	m.erase(5);
	cout << "finding 5 -> " << m.count(5) << "\n";
	return 0;
}