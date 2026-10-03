#include <iostream>
using namespace std;
class person{
    private:
        string name;
        int age;

    public:
        person(string n, int a) {
            name = n;
            age = a;
        }

        person(const person& soource) {
            name = source.name;
            age = source.age;
            }
            void displayInfo() {
                cout << "Name: " << name << endl;
                cout << "Age: " << age << endl;
            }
        }
        return 0;
}