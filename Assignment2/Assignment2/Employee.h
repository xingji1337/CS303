//Employee class header- Xing Ji
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee {
public:
	/**Contruct an Employee instance
		@param salary set the employee's monthly salary
		@param healthInsuranceContribution set the emplyee's monthly health insurance contribution
		@param vacationHours set the employee's month vacationHours
		@param hoursWorked will set the hoursWorked by the employee*/
	Employee(const double salary, const double healthInsuranceContribution, const double vacationHours, const double hoursWorked);
	

		/**An accessor function to retrieve the employee's salary
			@return the salary**/
	double getSalary() const;

	/**An accessor function to retrieve the employee's healthInsuranceContribution
		@return the health insurance contribution**/
	double getHealthInsuranceContribution() const;

	/**An accessor function to retrieve the employee's vacation hours
		@return the vacation hours**/
	double getVacationHours() const;

	/**An accessor function to retrieve the employee's weekly worked hours
		@return the hours worked this week**/
	double getHoursWorked() const;

	virtual double calculateWeeklySalary() const = 0;
	virtual double calculateHealthInsuranceContribution() const = 0;
	virtual double calculateVacationHours() const = 0;

protected:
	/**The salary for the employee**/
	double salary;

	/**The  health insurance contribution of the employee**/
	double healthInsuranceContribution;

	/**The vacation hours for the employee**/
	double vacationHours;

	/**The hours worked this week for the employee**/
	double hoursWorked;
};
#endif
