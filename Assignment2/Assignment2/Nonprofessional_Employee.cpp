//Implenmentation of Nonrofessional_Employee class - Xing Ji

#include "Nonprofessional_Employee.h"

/**A function that will calaculate the weekly salary for the nonprofessional employee
		@return the weekly salary**/
double NonprofessionalEmployee::calculateWeeklySalary() const
{
	double weeklySalary = salary * hoursWorked;//salary will be pay-rate for the nonprofessional employee
	return weeklySalary;
}

/**A function that will calaculate the weekly health insurance contribution for the nonprofessional employee
		@return the weekly health insurance contribution**/
double NonprofessionalEmployee::calculateHealthInsuranceContribution() const
{
	double weeklyHealthInsuranceContribution = healthInsuranceContribution * hoursWorked;
	return weeklyHealthInsuranceContribution;
}

/**A function that will calaculate the weekly hours of vacation earned for the nonprofessional employee
		@return the weekly vacation hours earned**/
double NonprofessionalEmployee::calculateVacationHours() const
{
	double weeklyVacationHours = vacationHours * hoursWorked;
	return weeklyVacationHours;
}
