#include <iostream>
#include <string>
#include <ctime>
using namespace std;


void main() {
	srand((unsigned int)time(NULL));
	// Objects What are they
	/*
	Relating the real world and pulling
	significant data to store, modifiy,
	change and use to compare against.
	Is the purpose of Coding. Describing
	the real world, with code.


	*/

	enum tumblr { Male, Female, OTHER, Toaster, Triggered, ApacheAttackHelicopter };
	struct Shoe {
		bool hasLaces;
		string LacesColor;
		bool isVelcro;
		bool isClosedToe;
		struct Sandal {

		};
		bool hopefullynotCrocs;
		string Color;
		string Style;
		string backgroundColor;
	};
	struct Student {
		long IDNumber;
		string name;
		tumblr Gender;
		Shoe typeShoes;
		Student * nextStudent;
		void init(bool xD) {
			if (xD)
				Gender = ApacheAttackHelicopter;
			else {
				Gender = Triggered;
			}
		}
		void init(string NAME, long id, int gen) {
			name = NAME;
			IDNumber = id;
			Gender = (tumblr)gen;
		}
		string printTumblr() {
			switch (Gender) {
			case Male:
				return "Male";
			case Female:
				return "Female";
			case OTHER:
				return "OTtER";
			case Toaster:
				return "Toaster";
			case Triggered:
				return "Michael";
			case ApacheAttackHelicopter:
				return "Apache Attack Helicopter";

			}
			return "default";
		}
		void print() {
			cout << "Name : " << name << "\n";
			cout << "ID : " << IDNumber << "\n";
			cout << "tumblr : " << printTumblr() << "\n";
		}
		void randID() {
			IDNumber = (rand() % 1000000) + rand() % 50000;
		}
		void randt() {
			Gender = (tumblr)(rand() % 8);
		}
		void random() {
			randID();
			randt();
		}
	} aStudent;

	aStudent.name = "Fred";
	aStudent.IDNumber = 233333;
	aStudent.Gender = (tumblr)10;
	aStudent.print();
	aStudent.init(true);
	aStudent.print();
	Student arr[19];
	aStudent.nextStudent=&arr[0];
	for (int i = 0; i < 19; i++)
	{
		cin >> arr[i].name;
		arr[i].random();
		arr[i].print();
		if (i < 18)
			arr[i].nextStudent = &arr[i + 1];
	}
	
	Student * current = &aStudent;

	for (int i = 0; i < 13; i++) {
		current = current->nextStudent;
	}
	current->print();

	current = new Student;
	for (int i = 0; i < 13; i++) {
		cin >> current->name;
		current->random();
		current->print();
		current->nextStudent = new Student;
		current = current->nextStudent;
	}
	system("pause");

}