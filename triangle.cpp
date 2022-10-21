#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"enter a,b,c : ";
    cin>>a>>b>>c;
    if(a==b&&b==c)
        cout<<"Equilateral triangle\n";
    
    else
        if(a!=b&&b!=c&&c!=a)
            cout<<"Scalene triangle\n";
        
        else
            cout<<"Isoceles triangle\n"; 
        
    
}
