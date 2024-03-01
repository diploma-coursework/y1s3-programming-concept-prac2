#include <stdio.h>

#define MAX_SIZE 20

struct Date {
	int day;
	int month;
	int year;
};

typedef struct {
	char id[4];
	char name[20];
	struct Date dateJoined;
	char department[15];
} Employee;

void displayAll(Employee *emp, int nEmployee) {
	printf(
		"Employee Details\n\n"
		"Id   Name                 Date Joined   Department\n"
		"--------------------------------------------------\n"
	);
	for (int i = 0; i < nEmployee; i++) {
		printf(
			"%-4s %-20s %02d/%02d/%02d    %s\n",
			emp[i].id,
			emp[i].name,
			emp[i].dateJoined.day,
			emp[i].dateJoined.month,
			emp[i].dateJoined.year,
			emp[i].department
		);
	}
	printf(
		"-----------------------------------------------------\n"
		"Count of record: %d\n",
		nEmployee
	);
}

void search() {
	struct Date employeeJoinedDate;

	printf("Search employee joined date (03/2015): ");
	scanf("%d/%d", employeeJoinedDate.month, employeeJoinedDate.year);


}

int main() {
	Employee emp[MAX_SIZE] = {
		{ "E01", "Alice Chin", { 5, 12, 2008 }, "R&D" },
		{ "E02", "John", { 9, 12, 2011 }, "IT" },
		{ "E03", "Vivian", { 3, 3, 2015 }, "HR" },
		{ "E04", "Alice Chin", { 4, 4, 2011 }, "IT" },
		{ "E05", "Vivien Tan", { 5, 3, 2015 }, "HR" }
	}; 
	int nEmployee = 5;

	displayAll(emp, nEmployee);
}