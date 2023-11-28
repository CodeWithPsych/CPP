// write c++ program: imagine a publishing company that market both book and audiocases create a class publisher that store the price and title of the publication from this class add 2 classes book which add a page count and tape which adds playing time in minute Each of these classes should have get data function to get data and put data function to display it data Write a main program to test the book and tape classes by creating intense of them asking the user to fill in data with get data function and print the data using put data function start with the publication book and tape classes suppose you to add the data of publication for both book and tape from the publication class derive drive a new class publication that include this member data and change book and tape so they are derived from publication instead of publication make all the nessasry changes in member function so the user can input and output dates along with other data the data stores data month and year
// multi level inheritance 
#include <iostream>
#include <string>
using namespace std;

class Publisher
{
protected:
    int price;
    string title;

public:
    virtual void getData()
    {
        cout << "Enter title: ";
        cin >> title;
        cin.ignore();
        cout << "Enter price: ";
        cin >> price;
    }

    virtual void putData()
    {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    }
};

class Publication2 : public Publisher
{
protected:
    int publicationMonth;
    int publicationYear;

public:
    void getData() override
    {
        Publisher::getData();
        cout << "Enter publication month (1-12): ";
        cin >> publicationMonth;
        cout << "Enter publication year: ";
        cin >> publicationYear;
    }

    void putData() override
    {
        Publisher::putData();
        cout << "Publication Date: " << publicationMonth << "/" << publicationYear << endl;
    }
};

class Book : public Publication2
{
private:
    int pageCount;

public:
    void getData() override
    {
        Publication2::getData();
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void putData() override
    {
        Publication2::putData();
        cout << "Page Count: " << pageCount << " pages" << endl;
    }
};

class Tape : public Publication2
{
private:
    int playingTimeMinutes;

public:
    void getData() override
    {
        Publication2::getData();
        cout << "Enter playing time (minutes): ";
        cin >> playingTimeMinutes;
    }

    void putData() override
    {
        Publication2::putData();
        cout << "Playing Time: " << playingTimeMinutes << " minutes" << endl;
    }
};

int main()
{
    int n;
    Book book;
    Tape tape;
    Publisher *ptrBook = &book;
    Publisher *ptrTape = &tape;
    cout << "For book press 1 and for tape press 2: ";
    cin >> n;
    if (n == 1)
    {
        cout << "Enter data for Book" << endl;
        ptrBook->getData();
        ptrBook->putData();
    }
    else
    {
        cout << "Enter data for tape" << endl;
        ptrTape->getData();
        ptrTape->putData();
    }

    return 0;
}
