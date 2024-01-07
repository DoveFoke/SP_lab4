// book.h
#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    // Конструктор
    Book(std::string title, std::string author, int year);

    // Метод для виведення інформації про книгу
    void displayInfo();

private:
    std::string title;
    std::string author;
    int year;
};

#endif // BOOK_H
