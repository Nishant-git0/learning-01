/*

Create a class Student

Properties:
name
age
Use default constructor

👉 Print:

Name: Nishant
Age: 20
 */
import 'dart:io';

class Student {
  String? _name;
  int? _age;
  Student(String name, int age) {
    _name = name;
    _age = age;
  }
  void showinfo() {
    print("Name is : $_name\nand age is : $_age");
  }
}

void main() {
  print("Enter the name :");
  String _name = stdin.readLineSync() ?? "unknown";
  print("Enter the age :");
  int _age = int.parse(stdin.readLineSync() ?? "0");
  Student s = Student(_name, _age);
  s.showinfo();
}
