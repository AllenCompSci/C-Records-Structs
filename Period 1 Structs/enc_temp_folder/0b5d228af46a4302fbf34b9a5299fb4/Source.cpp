#include <iostream>
#include <string>
using namespace std;


void main() {
	// Objects What are they
	/*
	Relating the real world and pulling 
	significant data to store, modifiy, 
	change and use to compare against. 
	Is the purpose of Coding. Describing
	the real world, with code.

	
	*/
	struct Scissors {
		string Color;
		string Metal;
		string Handle;
		string Brand;
		double length;
		double width;
		double weight;
		void init(int i) {
			Color = "Blue & Silver";
			if (i == 0)
				Metal = "Titanium";
			else 
			 Metal = "Steel";
			Handle = "Blue Plastic";
			Brand = "Westcott";
		}
		void setL(double len) {
			length = len;
		}
		void setW(double wid) {
			width = wid;
		}
		void setWeight(double wei) {
			weight = wei;
		}
		void setAll(double l, double wid, double wei) {
			setL(l);
			setW(wid);
			setWeight(wei);
		}
	}First;

	Scissors Second;
	Scissors Third;
	First.Color = "Blue & Silver";
	First.Metal = "Steel";
	First.Handle = "Blue Plastic";
	First.Brand = "Westcott";
	First.length = 19; // in feet?
	First.width = 1.5;// in feet?
	First.weight = 32; // lbs?
	Second.init(2);
	Second.setAll(17.2, 1.5, 31.4);
	Third.init(0);
	Third.setAll(8.9, 1.1, 15.8);

	cout << First.Metal << " : " << Second.Metal << " : " << Third.Metal << endl;

	system("pause");
}