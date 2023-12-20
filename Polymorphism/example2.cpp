#include<iostream>
using namespace std;

class Human{
public:
	virtual void toilet() = 0;
};

class Man : public Human{
public:
	void toilet(){
		cout << "go to male toilet\n";
	}
};

class Woman : public Human{
public:
	void toilet(){
		cout << "go to female toilet\n";
	}
};

class Non: public Human{
public:
	void toilet(){
		cout << "go to non-sexuality toilet\n";
	}
};

void func(Human* human){
		human->toilet();
}

int main(){
	Man man1, man2, man3;
	Woman woman1, woman2, woman3;
	Non non1, non2, non3;

	func(&man1);
    func(&woman1);
    func(&non1);
}