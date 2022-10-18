//Operating the Employee Class- Xing Ji

#include "Employee.h"
#include "Professional_Employee.h"
#include "Nonprofessional_Employee.h"
#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	std::string answer;
	std::cout << "Are you a professional employee?(Y/N)" << std::endl;
	std::cin >> answer;
	
	if (answer == "y" || answer == "Y")
	{
		double salary,
			vacationHours,
			healtInsuranceContribution,
			hoursWorked;

		std::cout << "What is your monthly salary?" << std::endl;
		std::cin >> salary;

		healtInsuranceContribution = salary / 10;//health insurance contribution is 1/10th of your salary

		vacationHours = 80 / 12; //12 months in a year and 80 hours vacation time a year

		hoursWorked = 40;//salary employees should be full time (40 hour weeks)
		
		ProfessionalEmployee proEmployee(salary, healtInsuranceContribution, vacationHours, hoursWorked);//create a professional employee instance

		//Calculate all the weekly stats and output them
		salary = proEmployee.calculateWeeklySalary();
		vacationHours = proEmployee.calculateVacationHours();
		healtInsuranceContribution = proEmployee.calculateHealthInsuranceContribution();

		std::cout << "As a professional employee, this week you have earned: $" << std::setprecision(6) << salary << std::endl
			<< "Vacation Hours earned this week: " << std::setprecision(3) << vacationHours << " hours" << std::endl
			<< "Health insurance contribution earned this week: $" << std::setprecision(5) << healtInsuranceContribution << std::endl;

	}

	else if (answer == "n" || answer == "N")
	{
		double salary,
			vacationHours,
			healtInsuranceContribution,
			hoursWorked;

		std::cout << "What is your hourly wage?" << std::endl;
		std::cin >> salary;

		std::cout << "How many hours have you worked this week?" << std::endl;
		std::cin >> hoursWorked;

		//per hour worked the amount of health insurance contribution rate is lower than professional employee
		healtInsuranceContribution = salary / 15;

		vacationHours = .01; //100 hours worked will earn you one vacation hour

		//create a nonprofessional employee instance
		NonprofessionalEmployee nProEmployee(salary, healtInsuranceContribution, vacationHours, hoursWorked);

		//Calculate the weekly stats and output them
		salary = nProEmployee.calculateWeeklySalary();		
		vacationHours = nProEmployee.calculateVacationHours();
		healtInsuranceContribution = nProEmployee.calculateHealthInsuranceContribution();

		std::cout << "As a nonprofessional employee, this week you have earned: $" << std::setprecision(6) << salary << std::endl
			<< "Vacation Hours earned this week: " << std::setprecision(3) << vacationHours << " hours" << std::endl
			<< "Health insurance contribution earned this week: $" << std::setprecision(5) << healtInsuranceContribution << std::endl;

	}
	else//in case they put in an incorrect input
	{
		std::cout << "Sorry, I didn't understand that response, please try again." << std::endl;
	}
	

	return 0;
}
