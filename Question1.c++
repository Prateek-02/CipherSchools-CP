#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int roll;
    float marks[3];
};


int main(){
    Student* student = new Student;

    cout<<"Enter name : ";
    getline(cin,student->name);

    cout<<"Enter roll: ";
    cin>>student->roll;

    cout<<"Enter marks: ";
    for(int i=0;i<3;i++){
        cin>>student->marks[i];
    }

    float sum = 0.0;
    for(int i=0;i<3;i++){
        sum += student->marks[i];
    }

    float avg = sum/3;

    cout<<"Student details: "<<endl;
    cout << "Name: " << student->name << endl;
    cout << "Roll Number: " << student->roll << endl;
    cout << "Marks: ";
    for (int i = 0; i < 3; i++) {
        cout << student->marks[i] << " ";
    }
    cout << "\nAverage Marks: " << avg << endl;

    delete student;

}