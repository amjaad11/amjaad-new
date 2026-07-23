
#include <vector>
#include <iostream>

using namespace std;

struct stEmployee
{
	
	string Name;
	string lastName;
	float Salary;

};


void readNumbers(vector <stEmployee>& vEmployee)
{
	stEmployee topEmployee;
	
	char ReadMore = 'Y';
		cout << "Please enter employee name: ";
		while (ReadMore == 'Y' || ReadMore == 'y')
		{
		cin >> topEmployee.Name;
		cout << "Please enter employee last name: ";
		cin >> topEmployee.lastName;
		cout << "Please enter employee salary: ";
		cin >> topEmployee.Salary;
		vEmployee.push_back(topEmployee);
		cout << "Do you want to add more numbers? Y/N ";
		cin >> ReadMore;
	}

}
void printVectorNumber(vector <stEmployee> & vEmployees)
{
	cout << "The numbers Vector: \n\n ";
	for (stEmployee& Employee: vEmployees)
	{
		cout << Employee.Name << endl;
		cout << Employee.lastName << endl;
		cout << Employee.Salary << endl;
	}
	cout << endl;
};


int main()
{
	vector <stEmployee> vEmployees;

	readNumbers(vEmployees);
	printVectorNumber(vEmployees);
};