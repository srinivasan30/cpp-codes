#include<iostream>
#include<conio.h>
using namespace std;
int cp(int,int,int,int=50);
void printline(char ch='*',int range= 70);
class per;
class acc
{
int rno,tot;
static int count;
int m1,m2,m3;
char name[20],grade;
float avg;
public:
void getdata()
{
cout<<"Enter id:";
cin>>rno;
cout<<"Enter name:";
cin>>name;
cout<<"Enter m1";
cin>>m1;
cout<<"Enter m2";
cin>>m2;
cout<<"Enter m3";
cin>>m3;
}
friend void display(acc,per);
void cal()
{
tot=0;
if(cp(m1,m2,m3))
{
cout<<"Result=pass"<<endl;
tot=m1+m2+m3;
avg=tot/3;
count=count+1;
if(avg>=90)
grade='O';
if(avg>=70&&avg<90)
grade='A';
if(avg>=50&&avg<70)
grade='B';
}
else
{
cout<<"Result=Fail"<<endl;
}
}
static void showcount(void)
{
cout<<endl;
cout<<"count:"<<count;}};
int acc::count;
class per
{
char add[25];
long tel;
public:
void getdata1()
{
cout<<"Enter address";
cin>>add;
cout<<"Enter phoneno:";
cin>>tel;
}
friend void display(acc a,per p)
{
cout<<endl;
cout<<"Name:"<<a.name<<endl;
cout<<"ID:"<<a.rno<<endl;
cout<<"Address:"<<p.add<<endl;
cout<<"Phone no.:"<<p.tel<<endl;
cout<<"M1:"<<a.m1<<endl;
cout<<"M2:"<<a.m2<<endl;
cout<<"M3:"<<a.m3<<endl;
if(cp(a.m1,a.m2,a.m3))
{
cout<<"Total:"<<a.tot<<endl;
cout<<"Average:"<<a.avg<<endl;
cout<<"Grade:"<<a.grade<<endl;
}}};
int cp(int m1,int m2,int m3,int pass1)
{
if(m1>=pass1&&m2>=pass1&&m3>=pass1)
return(1);
else
return(0);
}
int main()
{
int i,n;
//clrscr();
per p1[20];
acc a1[20];
cout<<"Enter no of students:";
cin>>n;
for(i=0;i<n;i++)
{
a1[i].getdata();
p1[i].getdata1();
}
for(i=0;i<n;i++)
{
printline('-');
display(a1[i],p1[i]);
printline();
}
acc::showcount();
getch();
return 0;
}
void printline(char ch,int range)
{
int i;
cout<<endl;
for(i=0;i<range;i++)
cout<<ch;
}