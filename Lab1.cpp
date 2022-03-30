#include <iostream>
#include <string>
using namespace std;
//QUESTION 1
int main(){
    string name;
    int id;

    cout<<"What is your name?"<<endl;
    cin>>name;
    cout<<name<<endl;
    cout<<"Hello "<<name<<endl;

    cout<<"Hello "<<name<<" What is your id?"<<endl;
    cin>>id;
    cout<<"Your id is "<<id<<endl;

    return 0;

}

//QUESTION 2
int main() {
    int num1;
    int num2;

    cout<<"Enter the first number:"<<endl;
    cin>>num1;
    cout<<"First number: "<<num1<<endl;

    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    cout<<"Second number: "<<num2;

    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;

    cout<<"Sum: "<<sum<<endl;
    cout<<"Diff: "<<diff<<endl;
    cout<<"Prod: "<<prod<<endl;




}
