#include <stdio.h>
int main(){
	int employeeCount=0;
	int salary;
	int totalSalary=0;
	int averageSalary;
	char departmentCode;
	int totalPayroll;
	const double bonusRate=12.0/100.0;
	int bonusPool;
	for(int i=1;i<=10;i++){
		employeeCount+=1;
		printf("Enter your Salary:");
		scanf("%d",&salary);
		totalSalary+=salary;
	}
	averageSalary=totalSalary/10;
	totalPayroll=totalSalary;
	bonusPool=totalPayroll*bonusRate;
	printf("Empolyee Count=%d\n",employeeCount);
	printf("Total Salary=%d\n",totalSalary);
	printf("Average Salary=%d\n",averageSalary);
	printf("Total Payroll=%d\n",totalPayroll);
	printf("Bonus Pool=%d\n",bonusPool);
	return 0;
}