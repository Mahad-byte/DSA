#include<iostream>
#include <vector> //STL container
using namespace std;


int main() {

	vector<int> vec;
	
	cout << "Capacity: " << vec.capacity() << endl; 
	cout << "Size : " << vec.size() << endl; 


	vec.push_back(1);
	
	cout << "After Capacity: " << vec.capacity() << endl; 
	cout << "Size : " << vec.size() << endl; 

	vec.push_back(2);
	cout << "After Capacity: " << vec.capacity() << endl; 
	cout << "Size : " << vec.size() << endl;  


	vec.push_back(3);
	cout << "After Capacity: " << vec.capacity() << endl; 
	cout << "Size : " << vec.size() << endl;   

	vec.push_back(4);
	cout << "After Capacity: " << vec.capacity() << endl; 
	cout << "Size : " << vec.size() << endl;  

	vec.push_back(5);
	cout << "After Capacity: " << vec.capacity() << endl; 
	cout << "Size : " << vec.size() << endl;  

	vec.push_back(6);
	cout << "After Capacity: " << vec.capacity() << endl;
	cout << "Size : " << vec.size() << endl;  

	vec.push_back(7);
	cout << "After Capacity: " << vec.capacity() << endl;
	cout << "Size : " << vec.size() << endl; 


	//For Each Loop, where i give the values not the indices. Used for vectors
	for(int val : vec){
		cout << val;
		//cout << typeid(i).name();
	}
	return 0;
}