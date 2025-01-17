#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound();
};

class Dog : public Animal{
    public:
    void sound() override{
        cout<<"Bark"<<endl;
    }
};

class Cat: public Animal{
    public:
    void sound() override{
        cout<<"Meow"<<endl;
    }
};


int main(){
    Dog obj1;
    obj1.sound();

    Cat obj2;
    obj2.sound();
}