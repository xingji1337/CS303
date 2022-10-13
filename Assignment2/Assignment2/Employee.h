//Employee class header- Xing Ji
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>

class Employee {
public:
	Employee(double salary, double healthInsuranceContribution, double vacationHours, double hoursWorked);
	virtual double calculateWeeklySalary() const = 0;
	virtual double calculateHealthInsuranceContribution() const = 0;
	virtual double calculateVacationHours() const = 0;
	virtual std::string to_string() const = 0;

protected:
	double salary;
	double healthInsuranceContribution;
	double vacationHours;
	double hoursWorked;
};
#endif
