//Implenmentation of Employee class - Xing Ji

#include "Employee.h"

/**Contruct an Employee instance
		@param salary set the employee's monthly salary
		@param healthInsuranceContribution set the emplyee's monthly health insurance contribution
		@param vacationHours set the employee's month vacationHours
		@param hoursWorked will set the hoursWorked by the employee*/
Employee::Employee(const double the_salary, const double the_healthInsuranceContribution, const double the_vacationHours, const double the_hoursWorked) :
	salary(the_salary), healthInsuranceContribution(the_healthInsuranceContribution),
	vacationHours(the_vacationHours), hoursWorked(the_hoursWorked)
{}

/**An accessor function to retrieve the employee's salary
			@return the salary**/
double Employee::getSalary() const
{
	return salary;
}

/**An accessor function to retrieve the employee's healthInsuranceContribution
		@return the health insurance contribution**/
double Employee::getHealthInsuranceContribution() const
{
	return healthInsuranceContribution;
}

/**An accessor function to retrieve the employee's vacation hours
		@return the vacation hours**/
double Employee::getVacationHours() const
{
	return vacationHours;
}

/**An accessor function to retrieve the employee's weekly worked hours
		@return the hours worked this week**/
double Employee::getHoursWorked() const
{
	return hoursWorked;
}