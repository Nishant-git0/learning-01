/*
Named Constructor

👉 Create a class Book

Properties:
title
price
Add:
Default constructor
Named constructor → Book.free()
title = "Unknown"
price = 0

👉 Output:

Title: Unknown Price: 0
*/
import 'dart:io';

class Book {
  String? _title;
  int? _price;
  Book(this._title, this._price);
  Book.free() {
    _title = "unknown";
    _price = 0;
  }
  void showinfo() {
    print("name of book : $_title");
    print("The price of book : $_price");
  }
}

void main() {
  String? title;
  int? price;
  print("Enter name of Book :");
  title = stdin.readLineSync();
  print("Enter for price :");
  price = int.parse(stdin.readLineSync() ?? "0");
  Book b1 = Book(title, price);
  Book b2 = Book.free();
  print("for default constructor");
  b1.showinfo();
  print("for named constructor");
  b2.showinfo();
}
