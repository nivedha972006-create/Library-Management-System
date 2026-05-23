#include <iostream>
#include <fstream>

using namespace std;

class Library {

private:
string title;
string author;

public:

void addBook() {

cout << "Enter Book Title: ";
cin >> title;

cout << "Enter Author Name: ";
cin >> author;

ofstream file("books.txt");

file << title << endl;
file << author << endl;

file.close();

cout << "Book Saved Successfully\n";

}

void searchBook() {

ifstream file("books.txt");

file >> title;
file >> author;

file.close();

cout << "\nBook Found\n";

cout << "Title: " << title << endl;
cout << "Author: " << author << endl;

}

};

int main() {

Library lib;

lib.addBook();

lib.searchBook();

return 0;

}