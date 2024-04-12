#pragma once
#include <string>

class shopping
{
public:
    void menu();
    void administrator(); // for administrators
    void customer();      // for customer
};


class staff : public shopping
{
private:
    int empcode;
    char empname[30];
    std :: string section;           // bo phan
    std :: string academic_standard; // trinh do van hoa
    int basicsalary;          // luong căn ban

    // number of workdays
    int dayoff_authorized;   // nghi co phep
    int dayoff_unauthorized; // nghi khong phep
    int overtime;            // ngay lam them
    int netsalary;           // luong thuc linh

public:
    void employee();
    void addemployee();
    void modifyemployee();
    void rememployee();
    void searchemployee();
    void employeelist();
};


class product : public shopping
{
private:
    int productcode;    // product code
    std :: string productname; // name of the product
    float price;
    float discount; // discount
public:
    void products();
    void add();     // to add a product
    void modify();  // to edit a prodcut
    void rem();     // to remove a product
    void search();  // to search a product
    void list();    // to list all products
    void receipt(); // to get the receipt
};