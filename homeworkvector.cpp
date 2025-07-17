#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Employee
{
    string Name;
    string LastName;
    int Age;
    int Salary;

};

void ReadDataEmployee(vector<Employee>& vEmployee)
{
    Employee Emp1;


    char ReadData='Y';
    while (ReadData ='y' || ReadData ='Y')
    {
        cout<<"Enter Your FirstName";
        cin>>Emp1.Name;
        cout<<"Enter Your Last Name";
        cin>>Emp1.LastName;
        cout <<"Enter Your Age";
        cin>>Emp1.Age;
        cout <<"Enter Your Salary";
        cin>>Emp1.Salary;
        
        cout<<"You Want Add More Employee 'Y''N'";
        cin >>ReadData;
        vEmployee.push_back(Emp1);
    }
    

}

void PrintEmployee(const vector<Employee>& vEmployees)

{
    

    for(const Employee& emp : vEmployees)
    {
        cout<<"Your First Name" << emp.Name <<endl;
        cout <<"Last Name " << emp.LastName <<endl;
        cout <<"Age" <<emp.Age <<endl;
        cout <<"Salary" <<emp.Salary <<endl;

    }
}

int main()
{
    vector <Employee> Employees;

    ReadDataEmployee(Employees);
    PrintEmployee(Employees);
}