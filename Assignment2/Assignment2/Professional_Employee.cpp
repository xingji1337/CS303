//Implenmentation of Professional_Employee class - Xing Ji

#include "Professional_Employee.h"


/**A function that will calaculate the weekly salary for the professional employee
		@return the weekly salary**/
double ProfessionalEmployee ::calculateWeeklySalary() const
{
	double weeklySalary = salary / 4; //4 weeks in a month
	return weeklySalary;
}

/**A function that will calaculate the weekly health insurance contribution for the professional employee
		@return the weekly health insurance contribution**/
double ProfessionalEmployee :: calculateHealthInsuranceContribution() const
{
	double weeklyHealthInsuranceContribution = healthInsuranceContribution / 4; //4 weeks in a month
	return weeklyHealthInsuranceContribution;
}

/**A function that will calaculate the hours of vacation time earned for the professional employee
		@return the weekly vacation hours earned**/
double ProfessionalEmployee :: calculateVacationHours() const
{
	double weeklyVacationHours = vacationHours / 4; //4 weeks in a month
	return weeklyVacationHours;
}
