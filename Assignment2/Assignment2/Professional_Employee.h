//Professional_Employee class header- Xing Ji
#ifndef PROFESSIONAL_EMPLOYEE_H_
#define PROFESSIONAL_EMPLOYEE_H_
#include "Employee.h"

class ProfessionalEmployee: public virtual Employee {
public:

	/**Inherit the base class constructor**/
	using Employee::Employee;

	/**A function that will calaculate the weekly salary for the professional employee
		@return the weekly salary**/
	double calculateWeeklySalary() const;

	/**A function that will calaculate the weekly health insurance contribution for the professional employee
		@return the weekly health insurance contribution**/
	double calculateHealthInsuranceContribution() const;

	/**A function that will calaculate the hours of vacation time earned for the professional employee
		@return the weekly vacation hours earned**/
	double calculateVacationHours() const;

};
#endif

