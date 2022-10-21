#include<iostream>
using namespace std;
int main(){
    int hostnum,guestnum;
    cout<<"enter hostnum : ";
    cin>>hostnum;
    system("cls");
    cout<<"enter guestnum : ";
    cin>>guestnum;
    (guestnum==hostnum)?cout<<"Correct":cout<<"false";
    /*if(hostnum==guestnum){
        cout<<"Correct";
    }
    else{
        cout<<"Failed";
    }*/
}