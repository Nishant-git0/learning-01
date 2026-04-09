void main() {
  int a = 1;
  String name = 'Nishant';
  double marks = 26;
  bool male = true;
  int age = 2;
  print(a);
  print(name);
  print(male);
  print(marks);
  if (age >= 20) {
    print('your are age $age');
  } else {
    print('your age  hih $age');
  }
  for (int i = 0; i < 5; i++) {
    print('count $i');
  }
  int add(age, marks) {
    return age + marks.toInt();
  }

  print('okay add functioned is called = ${add(age,marks)}');
}
