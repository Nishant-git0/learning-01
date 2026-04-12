import 'dart:io';

class Student {
  String name;
  int age;
  Student(this.name, this.age);
  void showinfo() {
    print("my name : $name and my age is  $age");
  }
}

void main() {
  print("Enter the name of student ");
  String name = stdin.readLineSync() ?? "unknown";
  print("Enter the age of student ");
  int age = int.parse(stdin.readLineSync()??"0");
  Student s1 = Student(name, age);
  s1.showinfo();
  
}
