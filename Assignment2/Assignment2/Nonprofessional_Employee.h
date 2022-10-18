//Nonprofessional_Employee class header- Xing Ji
#ifndef NONPROFESSIONAL_EMPLOYEE_H_
#define NONPROFESSIONAL_EMPLOYEE_H_
#include "Employee.h"

class NonprofessionalEmployee : public virtual Employee {
public:

	/**Inherit the base class constructor**/
	using Employee::Employee;

	/**A function that will calaculate the weekly salary for the nonprofessional employee
		@return the weekly salary**/
	double calculateWeeklySalary() const;

	/**A function that will calaculate the weekly health insurance contribution for the nonprofessional employee
		@return the weekly health insurance contribution**/
	double calculateHealthInsuranceContribution() const;

	/**A function that will calaculate the weekly hours of vacation earned for the nonprofessional employee
		@return the weekly vacation hours earned**/
	double calculateVacationHours() const;

};
#endif