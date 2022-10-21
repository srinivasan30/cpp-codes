#include<iostream>
using namespace std;
int main(){
    float weight,height,bmi;
    cout << "Enter your weight in kg : ";
    cin>>weight;
    cout<<"Enter your height in m : ";
    cin>>height;
    bmi=weight/(height*height);
    if(bmi<18.5){
        cout<<"Underweight"<<endl;
    }
    else{
        if(bmi>25){
            cout<<"Overweight"<<endl;
        }
        else{
            cout<<"Normal weight"<<endl;
        }
    }
    cout<<"Your BMI is : "<<bmi<<endl;

}