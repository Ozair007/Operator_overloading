#include <iostream>
using namespace std;
class Distance {
	private:
		float feet;
		float inches;
	public:
		Distance() {
			feet = 0;
			inches = 0;
		}
		Distance(float f, float i) {
			feet = f;
			inches = i;
		}
		void setData() {
			cout<<"Enter Values of feet and inches:"<<endl;
			cin>>feet>>inches;
		}
		void show() {
			cout<<"Values are:"<<endl;
			cout<<feet<<endl<<inches;
		}
		Distance operator < (Distance &obj2) {
			if (feet < obj2.feet) {
				cout<<"Distance of obj2 is greater"<<endl;
			}
			else {
				cout<<"Distance of obj1 is greater"<<endl;
			}
		}
		Distance operator += (Distance &obj2) {
			feet += obj2.feet;
			inches += obj2.inches;
			cout<<"Feets and Inches are:"<<feet<<" "<<inches<<endl;
		}
		Distance operator --() {
			feet += feet+1;
			inches += inches+1;
		}
};
int main() {
	Distance obj1, obj2, less, plus_eq, pre, post;
	obj1.setData();
	obj2.setData();
	less = obj1 < obj2;
	plus_eq = obj1 += obj2;
	pre = --obj1;
	return 0;
}
