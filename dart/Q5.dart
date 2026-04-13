/*
Create a class Employee

Properties:
name
salary
Constructor:
If salary < 0 → set it to 0

👉 Output:

Name: Ram Salary: 0
 */
import 'dart:io';

class Employee {
  String _name;
  int _salary;
  Employee(this._name, this._salary);
  void setname(String name) {
    _name = name;
  }

  String getname() {
    return _name;
  }

  void setSalary(int salary) {
    if (salary > 0) {
      _salary = salary;
    } else {
      _salary = 0;
    }
  }

  int getSalary() {
    return _salary;
  }

  void showinfo() {
    print("The name of employee : $_name");
    print("The price of salary is : $_salary");
  }
}

void main() {
  String? name;
  int? salary;
  print("Enter the name of employee :");
  name = stdin.readLineSync() ?? "unkown";
  print("Enter the salary :");
  salary = int.parse(stdin.readLineSync() ?? "0");
  Employee e = Employee(name, salary);
  e.showinfo();
}
