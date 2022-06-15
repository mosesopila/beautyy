#include<stdio.h>
#include<conio.h>
#include<iostream>

class Employee
{
   char emp_name[30];
   int emp_number,comm,commrate;
   float basic,sales, net_salary,;
   public:
   void read_emp_details(int count){
	 cout<<"\n\n*** Enter Employee "<<count<<" Details ***";
	 cout<<"\nEmployee Number: ";
	 cin>>emp_number;
	 cout<<"Employee Name: ";
	 cin>>emp_name;
	 cout<<" basic Salary: ";
	 cin>>basic;
     cout<<"Employee Sales:";
     cin>>sales;
	 cout<<"\n---- Employee "<<count<<" Datails are saved ----\n\n";
   }
   float find_net_salary(){
    if(sales<20000){
        commrate=0.1;
    }
    if(sales>=20000 && sales<=30000){
        commrate =0.2;

    }
    else
    commrate=0.3;



      comm= sales * commrate;
      net_salary = (basic + comm);
      return net_salary;
   }
   void display_emp_details(int count){
      cout<<"\nEmployee Number	: "<<emp_number;
      cout<<"\nEmployee Name	: "<<emp_name;
      cout<<"\nNet Salary: "<<net_salary;
   }
};
int main(){
   Employee emp[100];
   int number_of_emp, count;
   cout<<"\nPlease enter the number of Employees (Max. 100): ";
   cin>>number_of_emp;
   for(count=0; count< number_of_emp; count++){
      emp[count].read_emp_details(count+1);
   }
   for(count=0; count < number_of_emp; count++){
      emp[count].find_net_salary();
   }
   for(count=0; count < number_of_emp; count++){
      emp[count].display_emp_details(count+1);
   }
   cout<<"\nPress any key to close!!!";
   getch();
   return 0;
}