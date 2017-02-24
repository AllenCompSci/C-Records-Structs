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
	struct Comfort {
		int RATING;
		void init(int val, int outOf) {
			RATING =(int)((double)(val) / (double)outOf * 6);
		}
		string rate() {
			switch (RATING) {
			case 0:
				return "Poor";
			case 1:
				return "Fair";
			case 2:
				return "Good";
			case 3: 
				return "Very Good";
			case 4:
				return "Great";
			case 5:
				return "Very Great";
			}
			return "Perfect";
		}
	};
	struct Cushion {
		bool hasCushion;
		string Material;
		string Color;
		Comfort rating;

	};
	struct Chair {
		int numberLeg;
		double height;
		double length;
		double width;
		bool hasWheels;
		Cushion CHAIRCUSHION;
		string Color;
		double weight;
		Comfort Rating;

	}tallGenericChair;

	tallGenericChair.Rating.init(4, 9);
	cout << tallGenericChair.Rating.rate() << endl;
	Chair genericChair[4];
	cout << tallGenericChair.length << endl;

	struct Student {
		string Name;
		long ID;
		int numGrades;
		int * grade;
		double GPA;
		Student * NEXTSTUDENT;
		void init(int numGrade) {
			numGrades = numGrade;
			grade = new int[numGrades];
		}
	}First, *Current;

	Current = &First;
	for (int i = 0; i < 7000; i++) {
		Current->init(rand() % 9);
		for (int j = 0; j < Current->numGrades; j++) {
			Current->grade[j] = rand() % 100;
		}
		Current->NEXTSTUDENT = new Student;
		Current = Current->NEXTSTUDENT;
	}
	system("pause");
}