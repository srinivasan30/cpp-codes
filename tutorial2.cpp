#include<iostream>
using namespace std;
int main()
{
    double annualsalary;
    cout << "please enter your annual salary: ";
    cin >> annualsalary;
    double monthlysalary = annualsalary/12;
    cout << "your monthly salary is"<<monthlysalary << endl;
    cout << "in 10 years u will earn : "<<annualsalary * 10;


}
