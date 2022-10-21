#include<iostream>
using namespace std;
int main(){
    //+,-,*,/,%
    cout<<5+2<<endl;
    cout<<5/2.0<<endl;
    cout<<5%2<<endl;

    //++,-- increment operator 2 types post increment and pre incremnet
    int counter=7;
    counter++;
    cout<<counter<<endl;
    counter--;
    cout<<counter<<endl;

    int counter2=9;
    cout<<++counter2<<endl;
    cout<<--counter2<<endl;


    //system("cls")  //for clearing screen

    // relational operator
    //<,>,<=,>=,==,!=
    int a =5 , b=8;
    cout<<(a < b)<<endl;


    //&&and,||or,!not logical operator
    cout<<(a==5 && b==5)<<endl;
    cout<<(a==5 && b==5+3)<<endl; // priority wise arithmetic ->binary/urnaru operators -> relational -> logical
    system("cls");
    //+=,-=,*=,/=,%= assignment operators
    int x =5;
    x+=2;
    //x=x+2 the above line and this are same 
    cout<<x;





}