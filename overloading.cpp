#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    student(){
        name = "unknown";
        age = 0;
    }

    student(string n){
        name = n;
        age = 0;
    }

   student(string n, int a){
        name = n;
        age = a;
    }

    void displayInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    private:
        string name;
        int age;
};

int main(){
    
    student s1;
    student s2("Alice");
    student s3("Bob", 20);

    s1.displayInfo();
    s2.displayInfo();
    s3.displayInfo();

    return 0;
}