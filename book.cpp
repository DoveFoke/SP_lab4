// book.cpp
#include "book.h"
#include <iostream>

// Реалізація конструктора
Book::Book(std::string title, std::string author, int year) {
    this->title = title;
    this->author = author;
    this->year = year;
}

// Реалізація методу для виведення інформації про книгу
void Book::displayInfo() {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Year: " << year << std::endl;
}
