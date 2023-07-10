class Employee {

private:
int employeeSalary;

public:
int employeeId;
string employeeName;

string getEmployeeName() {
    return employeeName;
}

protected:
void setEmployeeSalary(int n) {
    employeeSalary = n;
    return;
}

};