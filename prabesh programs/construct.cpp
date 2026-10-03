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

        person(const person& source) {
            name = source.name;
            age = source.age;
            }


            void displayInfo() {
                cout << "Name: " << name << endl;
                cout << "Age: " << age << endl;
            }
        };
        int main() {
            person p1("John", 25);
            person p2 = p1; // Copy constructor is called

            p1.displayInfo();
            p2.displayInfo();
        return 0;
}