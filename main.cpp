#include <iostream>

using namespace std;

class MyClass {  //syntax  follows the c syntax for structs 

    private:
        string field1;
        int field2;

    public: 
        //default constructor
        MyClass() : field1{"Hello"}, field2(2) { // initialixer list
            cout << "Default constructor called" << endl;
        }
        
        //parameterized constructor 

        MyClass(string field1arg, int field2arg) : field1(field1arg), field2(field2arg) {
            cout << "parameterized constructor called" << endl;
        }
    

    ~MyClass() {
        cout << "Destructor called" << endl;
    }

    //setters
    void setField1(const string& field1) { // passed by reference 
        this ->field1=field1; //this ptr
    }
    
    void setField2(const int field2) {
        this ->field2=field2;
    }

    //Getters
    const string& getField1()
    {
        return field1;
    }

    int getField2()
    {
        return field2;
    }
};


void say_hello(){
    std::cout << "Hello, from first_c++!\n";

    //stack
    MyClass myobj1, myobj2("Hello2", 5);
    myobj1.setField1("Hello1");
    myobj1.setField2(2);

    //Exercise - to display the fields of obj1 and obj2 to cont
    //heap - exercise take home ?!
}


//10/7

//non-member function
int main(int args, char** argv){
    cout <<"Hello, from cdemo2!" <<endl ; // printf() std::ostream

    //stack
    MyClass myobj1, myobj2("Hello2",5);
    myobj1.setField1("Hello1");
    myobj1.setField2(2);

    //Exercise to display yhe fields od obj1 and oj2 to cout
    cout << "obj1: " << myobj1.getField1() << myobj1.getField2() <<endl;
    cout << "obj2: " << myobj2.getField1() << myobj2.getField2() <<endl;


    //heap  exercise take home ??
    // In C, to access heap with malloc(), and release free()

    MyClass *myobj3 = new MyClass("Object3", 3); //NOT the mordern C++ way!!! raw pointers
    myobj3 -> setField2(4);

    delete myobj3;
    myobj3 = nullptr; //TESTABILITY !!!! null and nullptr vs null in C

    int myint2 = myobj3-> getField2(); //undefinded !!

    //Exercise 

}

