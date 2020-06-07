#include<stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include<windows.h>
using namespace std;
void bool_right();
void bool_wrong();
void char_right();
void char_wrong();
void point_right();
void point_wrong();
void shift_right();
void shift_wrong();
void unsigned_right();
void unsigned_wrong();
void string_right();
void string_wrong();
void float_right();
void float_wrong();
void int_right();
void int_wrong();
void sign_right();
void sign_wrong();
void Deref_invalid_iterator_right();
void Deref_invalid_iterator_wrong();
void Erase_dereference_right();
void Erase_dereference_wrong();
void Invalid_iterator_right();
void Invalid_iterator_wrong();
void Invalid_pointer_right();
void Invalid_pointer_wrong();
void Iterators_right();
void Iterators_wrong();
void Mismatching_containers_right();
void Mismatching_containers_wrong();
int main() {
	bool_right();
	bool_wrong();
	char_right();
	char_wrong();
	point_right();
	point_wrong();
	shift_right();
	shift_wrong();
	unsigned_right();
	unsigned_wrong();
	string_right();
	string_wrong();
	float_right();
	float_wrong();
	int_right();
	int_wrong();
	sign_right();
	sign_wrong();
	Deref_invalid_iterator_right();
	Deref_invalid_iterator_wrong();
	Erase_dereference_right();
	Erase_dereference_wrong();
	Invalid_iterator_right();
	Invalid_iterator_wrong();
	Invalid_pointer_right();
	Invalid_pointer_wrong();
	Iterators_right();
	Iterators_wrong();
	Mismatching_containers_right();
	Mismatching_containers_wrong();
	return 0;
}
//bool 
void bool_right(){
	bool a=true;
}
void bool_wrong(){
	bool a="hello";
}
//char 
void char_right(){
	char a='a';
}
void char_wrong(){
	char a="hello";
}
//point
void point_right(){
	POINT a;
}
void point_wrong(){
	POINT a;
	a="hello";
}
//shift
void shift_right(){
	int  a[3] = { 10, 100, 200 };
	*(a + 2) = 500;
	cout << a[2] << endl;
}
void shift_wrong(){
	int  a[3] = { 10, 100, 200 };
	*(a + "hello") = 500;
	cout << a[2] << endl;
}
//unsigned
void unsigned_right(){
	unsigned int a=1;
}
void unsigned_wrong(){
	unsigned int a="hello";
} 
//string 
void string_right(){
	string a="hello";
}
void string_wrong(){
	string a=1;
}
//float
void float_right(){
	float a=0.1;
}
void float_wrong(){
	float a="hello";
}
//int 
void int_right(){
	int a=1;
}
void int_wrong(){
	int a="hello";
}
//sign
void sign_right(){
	signed int a=-1;
}
void sign_wrong(){
	signed int a="hello";
}
//Deref invalid iterator
void Deref_invalid_iterator_right(){
	vector<int> vec; 
	int a=1;
	vec.push_back(a);
	vector<int>::iterator v = vec.begin();
	while( v != vec.end()) {
		cout << "value of v = " << *v << endl;
    	v++;
    }
}
void Deref_invalid_iterator_wrong(){
	vector<int>::iterator v;
	cout << "value of v = " << *v << endl;
}
//Erase dereference
void Erase_dereference_right(){
	vector<int> vec; 
	int i;
    for(i = 0; i < 5; i++){
       vec.push_back(i);
    }
	vector<int>::iterator v = vec.begin();
	while( v != vec.end()) {
		cout << "value of v = " << *v << endl;
    	v++;
    }
}
void Erase_dereference_wrong(){
	vector<int> vec; 
	int i;
    for(i = 0; i < 5; i++){
       vec.push_back(i);
    }
	vector<int>::iterator v = vec.begin();
	vec.erase(v);
	while( v != vec.end()) {
		cout << "value of v = " << *v << endl;
    	v++;
    }
}
//Invalid iterator
void Invalid_iterator_right(){
	vector<int> vec; 
	int a=1;
	vec.push_back(a);
	vector<int>::iterator v = vec.begin();
	while( v != vec.end()) {
		cout << "value of v = " << *v << endl;
    	v++;
    }
}
void Invalid_iterator_wrong(){
	vector<int>::iterator v;
	cout << "value of v = " << *v << endl;
}
//Invalid pointer
void Invalid_pointer_right(){
	char *p="hello";
	cout<<p<<endl;
}
void Invalid_pointer_wrong(){
	char *p;
	cout<<p<<endl;
}
//Iterators
void Iterators_right(){
	vector<int> vec1; 
	int a=1;
	vec1.push_back(a);
	vector<int>::iterator v1 = vec1.begin();
	while( v1 != vec1.end()) {
		cout << "value of v1 = " << *v1 << endl;
    	v1++;
    }
    vector<int> vec2; 
	int b=2;
	vec2.push_back(b);
	vector<int>::iterator v2 = vec2.begin();
	while( v2 != vec2.end()) {
		cout << "value of v2 = " << *v2 << endl;
    	v2++;
    }
}
void Iterators_wrong(){
	vector<int>::iterator v;
	vector<int> vec1;
	int a=1;
	vec1.push_back(a);
	vector<int> vec2;
	int b=2;
	vec2.push_back(b);
	v = vec1.begin();
	while( v != vec1.end()) {
		cout << "value of v = " << *v << endl;
    	v++;
    }
    v = vec2.begin();
	while( v != vec2.end()) {
		cout << "value of v = " << *v << endl;
    	v++;
    }
}
//Mismatching containers
void Mismatching_containers_right(){
	vector<int> vec; 
	int a=1;
	vec.push_back(a);
}
void Mismatching_containers_wrong(){
	vector<int> vec;
	vec.push_back("hello");
}
