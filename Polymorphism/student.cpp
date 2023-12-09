#include<iostream>
using namespace std;

class Human{
public:
	 virtual void say(){
		cout << "I'm human\n";
	}
};

class Student:public Human{
public:
    virtual void say(){  
		cout << "I'm a student\n";
	}
};

class CollegeStudent:public Student{
public:
	void say(){
		cout << "I'm a college student\n";
	}
};

int main(){
    CollegeStudent a;
    Human* p1 = (Human*) &a; 
    Student* p2 = (Student*) &a; 
    CollegeStudent* p3 = &a;
    p1->say();
    p2->say();
    p3->say();
}
