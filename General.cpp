#include "General.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <conio.h>

using namespace std;

void shopping :: menu()
{
start:
    int choice;
    std :: string email;
    std :: string password;
    while (true)
    {
        system("cls");
        cout << "  ........................................................................\n";
        cout << " >>>                 SUPERMARKET MANAGEMENT SYSTEM                      <<< \n";
        cout << "  ........................................................................";
        cout << endl;
        cout << "\n\t\t______PLEASE SELECT YOUR OPTION______\n";
        cout << endl;
        cout << "                      1. Administrator                     \n";
        cout << "                      2. Customer                          \n";
        cout << "                      3. Exit                              \n";

        cout << endl;
        cout << "  Enter your choice <1-3>  : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {

            cout << "\n  _______LOGIN_______     \n";
            cout << "Username : ";
            cin >> email;
            cout << "Password  : ";
            char ch;
            ch = _getch();
            while (ch != 13) {//character 13 is enter
                password.push_back(ch);
                cout << '*';
                ch = _getch();
            }

            if (email == "admin" && password == "admin")
            {
                administrator();
            }
            else
            {
                cout << "\nInvalid Username Or Password \n";
                cout << "_________________________\n";
                cout << "\nPress any key to continue...";
            }
            getch();
            break;
        }

        case 2:
        {
            customer();
            break;
        }

        case 3:
        {
            exit(0);
            break;
        }
        default:
        {
            cout << "Please select from the given Options \n";
            cout << "_________________________\n";
            cout << "\nPress any key to continue...";
        }
        }
        getch();
        goto start;
    }
}

void shopping ::administrator()
{
start:
    int choice;
    staff emp;
    product pro;
    while (true)
    {
        system("cls");
        cout << "  ........................................................................ \n";
        cout << " >>>                 SUPERMARKET MANAGEMENT SYSTEM                      <<<\n";
        cout << "  ........................................................................ \n";
        cout << "                        <<< ADMINISTRATOR >>>";
        cout << endl;
        cout << "\n\t\t______PLEASE SELECT YOUR OPTION______\n";
        cout << endl;
        cout << "                      1. Products                                          \n";
        cout << "                      2. Employees                                         \n";
        cout << "                      3. Supplier                                          \n";
        cout << "                      4. Inventory                                         \n";
        cout << "                      5. Revenue                                           \n";
        cout << "                      6. Back to menu                                      \n";
        cout << "                      7. Exit                                              \n";

        cout << "\nEnter your choice <1-7>  : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            pro.products();
            break;
        }
        case 2:
        {
            emp.employee();
            break;
        }
        case 3:
        {
            // supplier();
            break;
        }
        case 4:
        {
            // inventory();
            break;
        }
        case 5:
        {
            // revenue();
            break;
        }
        case 6:
        {
            menu();
            break;
        }
        case 7:
        {
            exit(0);
            break;
        }
        default:
            cout << "Please select from the given Options \n";
            cout << "_________________________\n";
            cout << "\nPress any key to continue...";
        }
        getch();
        goto start;
    }
}

void shopping ::customer()
{
start:
    int choice;
    product pro;
    while (true)
    {
        system("cls");
        cout << "  ........................................................................\n";
        cout << " >>>                 SUPERMARKET MANAGEMENT SYSTEM                      <<< \n";
        cout << "  ........................................................................\n";
        cout << "                          <<< CUSTOMER >>>";
        cout << endl;
        cout << "\n\t\t______PLEASE SELECT YOUR OPTION______\n";
        cout << endl;
        cout << "                      1. Buy Product                     \n";
        cout << "                      2. Back to menu                    \n";
        cout << "                      3. Exit                            \n";

        cout << "\nEnter your choice <1-3>  : ";
        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:
        {
            pro.receipt();
            break;
        }
        case 2:
        {
            menu();
            break;
        }
        case 3:
        {
            exit(0);
            break;
        }
        default:
            cout << "Please select from the given Options \n";
            cout << "_________________________\n";
            cout << "\nPress any key to continue...";
        }
        getch();
        goto start;
    }
}

// CLASS STAFF FUNCTION
void staff ::employee()
{
start:
    int choice;
    while (true)
    {
        system("cls");
        cout << "  ........................................................................\n";
        cout << " >>>                 SUPERMARKET MANAGEMENT SYSTEM                      <<< \n";
        cout << "  ........................................................................\n";
        cout << "                        <<< ADMINISTRATOR >>>";
        cout << endl;
        cout << "\n\t\t______PLEASE SELECT YOUR OPTION______\n";
        cout << "\n\t\t          **** EMPLOYEE ****          \n\n";
        cout << "                      1. Add employee                     \n";
        cout << "                      2. Modify employee                  \n";
        cout << "                      3. Search employee                  \n";
        cout << "                      4. Delete employee                  \n";
        cout << "                      5. Display employee                 \n";
        cout << "                      6. Back to menu                     \n";
        cout << "                      7. Exit                             \n";

        cout << "\nEnter your choice <1-7>  : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            addemployee();
            break;
        }
        case 2:
        {
            modifyemployee();
            break;
        }
        case 3:
        {
            searchemployee();
            break;
        }
        case 4:
        {
            rememployee();
            break;
        }
        case 5:
        {
            employeelist();
            cout << "\nPress any key to continue...";
            getch();
            break;
        }
        case 6:
        {
            menu();
            break;
        }
        case 7:
        {
            exit(0);
            break;
        }
        default:
            cout << "Please select from the given Options \n";
            cout << "_________________________\n";
            cout << "\nPress any key to continue...";
        }
        getch();
        goto start;
    }
}

void staff ::addemployee()
{
start:
    fstream data;
    int ec;
    int flat = 0;
    int bs;
    float d;
    string n;
    string s;
    string as;
    string da;
    string du;
    string o;
    string net;
    string choice;

    cout << "\n______ADD EMPLOYEE______\n";
    cout << "\n 1. Enter Employee Code  : ";
    cin >> empcode;
    cout << " 2. Enter Employee Name  : ";
    cin >> empname;
    cout << " 3. Enter Employee Section : ";
    cin >> section;
    cout << " 4. Enter Academic Standard : ";
    cin >> academic_standard;
    cout << " 5. Enter Basic Salary : ";
    cin >> basicsalary;
    cout << " 6. Enter Day off (Authorized) : ";
    cin >> dayoff_authorized;
    cout << " 7. Enter Day off (UnAuthorized) : ";
    cin >> dayoff_unauthorized;
    cout << " 8. Enter Overtime : ";
    cin >> overtime;
    cout << " 9. Enter Net Salary : ";
    cin >> netsalary;

    data.open("employee.txt", ios::in);

    if (!data)
    {
        data.open("employee.txt", ios::app | ios::out);
        data << " " << empcode << "\t" << empname << "\t" << section << "\t" << academic_standard << "\t" << basicsalary << "\t" << dayoff_authorized << "\t" << dayoff_unauthorized << "\t" << overtime << "\t" << netsalary << "\n";
        data.close();
    }
    else
    {
        data >> ec >> n >> s >> as >> bs >> da >> du >> o >> net;

        while (!data.eof())
        {
            if (ec == empcode)
            {
                flat++;
            }

            data >> ec >> n >> s >> as >> bs >> da >> du >> o >> net;
        }
        data.close();

        if (flat == 1) // if the flat value is incremented to 1 it means that the product is already present
        {
            goto start;
        }
        else
        {
            data.open("employee.txt", ios::app | ios::out); // ios::app is used to append to the file and ios:: out is used to write in the file
            data << " " << empcode << "\t" << empname << "\t" << section << "\t" << academic_standard << "\t" << basicsalary << "\t" << dayoff_authorized << "\t" << dayoff_unauthorized << "\t" << overtime << "\t" << netsalary << "\n";
            data.close(); // closing the file
        }
    }

    cout << "\nAdd Employee Successfully !!" << endl;
    cout << "_________________________\n";
    cout << "\n Do you want to add another Employee (Y/N) ? ";
    cin >> choice;
    if (choice == "y" || choice == "Y" || choice == "yes" || choice == "Yes")
    {
        goto start;
    }
    else
    {
        cout << "\nPress any key to continue...";
        getch();
    }
}

void staff ::modifyemployee()
{
    fstream data, data1; // creating two objects of the fstream class
    int key;             // to get the product code from the administrator
    int flat = 0;

    int ec;
    int bs;
    float d;
    string n;
    string s;
    string as;
    string da;
    string du;
    string o;
    string net;
    string choice;
    cout << "\n______MODIFY EMPLOYEE______\n";
    cout << "\n Enter Employee Code  : ";
    cin >> key;

    data.open("employee.txt", ios::in);

    if (!data) // if the file doesnt exist
    {
        cout << "\n\nFile doesn't Exist ! ";
    }
    else
    {
        data1.open("employee1.txt", ios::app | ios::out);

        data >> ec >> n >> s >> as >> bs >> da >> du >> o >> net;

        while (!data.eof())
        {
            if (key == empcode) // if the product exists
            {
                cout << "\n 1. Enter Employee New Code  : ";
                cin >> empcode;
                cout << " 2. Enter Employee Name  : ";
                cin >> empname;
                cout << " 3. Enter Employee Section : ";
                cin >> section;
                cout << " 4. Enter Academic Standard : ";
                cin >> academic_standard;
                cout << " 5. Enter Basic Salary : ";
                cin >> basicsalary;
                cout << " 6. Enter Day off (Authorized) : ";
                cin >> dayoff_authorized;
                cout << " 7. Enter Day off (UnAuthorized) : ";
                cin >> dayoff_unauthorized;
                cout << " 8. Enter Overtime : ";
                cin >> overtime;
                cout << " 9. Enter Net Salary : ";
                cin >> netsalary;

                data1 << " " << empcode << "\t" << empname << "\t" << section << "\t" << academic_standard << "\t" << basicsalary << "\t" << dayoff_authorized << "\t" << dayoff_unauthorized << "\t" << overtime << "\t" << netsalary << "\n";
                cout << "\nModify Employee Successfully !!" << endl;
                flat++; // incrementing flat bcs we find the product with the same product code
            }
            else // when the key entered by the user doesnt matches with the existing products code
            {
                data1 << " " << empcode << "\t" << empname << "\t" << section << "\t" << academic_standard << "\t" << basicsalary << "\t" << dayoff_authorized << "\t" << dayoff_unauthorized << "\t" << overtime << "\t" << netsalary << "\n";
            }

            data >> ec >> n >> s >> as >> bs >> da >> du >> o >> net;
        }
        // closing both the files
        data.close();
        data1.close();

        // we will firstly remove the old database file and then we will rename the database1.txt to database.txt
        remove("employee.txt");
        rename("employee1.txt", "employee.txt");

        if (flat == 0) // it means that the product with the pcode is not present as the flat value is not incremented
        {
            cout << "\n\nSorry! Record not found ";
        }
    }
    cout << "_________________________\n";
    cout << "\nPress any key to continue...";
    getch();
}

void staff ::rememployee()
{
    fstream data, data1; // creating object of the fstream class
    int key;
    int flat = 0;
    cout << "\n\n______Delete Product_________ ";
    cout << "\n\n Please enter Employee code  :";
    cin >> key;

    data.open("employee.txt", ios::in); // opening the file

    if (!data) // if file doesn't exist
    {
        cout << "File doesn't Exist" << endl;
        cout << "_________________________\n";
        cout << "\n Press any key to continue";
        getch();
    }
    else
    {
        data1.open("employee1.txt", ios::app | ios::out);
        data >> empcode >> empname >> section >> academic_standard >> basicsalary >> dayoff_authorized >> dayoff_unauthorized >> overtime >> netsalary; // getting the values of the different variables so that we can iterate over the file

        while (!data.eof()) // we will iterate till the end of the file
        {
            if (empcode == key)
            {
                cout << "\n\nEmployee deleted Successfully ";
                flat++; // incrementing the flat because we find the product
            }
            else
            {
                data1 << " " << empcode << "\t" << empname << "\t" << section << "\t" << academic_standard << "\t" << basicsalary << "\t" << dayoff_authorized << "\t" << dayoff_unauthorized << "\t" << overtime << "\t" << netsalary << "\n"; // writing into the file
            }

            data >> empcode >> empname >> section >> academic_standard >> basicsalary >> dayoff_authorized >> dayoff_unauthorized >> overtime >> netsalary; // for iteratiion
        }

        // closing the opened files
        // and removing and renaming the files

        data.close();
        data1.close();

        remove("employee.txt");
        rename("employee1.txt", "employee.txt");

        if (flat == 0)
        {
            cout << "\nRecord Not found" << endl;
        }
    }
}

void staff ::searchemployee()
{
    fstream data, data1; // creating object of the fstream class
    int key;
    cout << "\n\nSearch Employee ";
    cout << "\n\nEmployee code  :";
    cin >> key;

    data.open("employee.txt", ios::in); // opening the file

    if (!data) // if file doesn't exist
    {
        cout << "File doesn't Exist" << endl;
    }
    else
    {
        cout << "\n_________________________________________________________________________________________________________________________________________\n";
        cout << "Code\tName\tSection\tAcademic Standard\tBasic Salary\tDay off (Authorized)\tDay off (Unauthorized)\tOvertime\tNet Salary";
        cout << "\n_________________________________________________________________________________________________________________________________________\n";
        data >> empcode >> empname >> section >> academic_standard >> basicsalary >> dayoff_authorized >> dayoff_unauthorized >> overtime >> netsalary;
        while (!data.eof()) // we will iterate till the end of the file
        {
            if (empcode == key)
            {
                cout << " " << empcode << "\t" << empname << "\t" << section << "\t" << academic_standard << "\t" << basicsalary << "\t" << dayoff_authorized << "\t" << dayoff_unauthorized << "\t" << overtime << "\t" << netsalary << "\n";
                data >> empcode >> empname >> section >> academic_standard >> basicsalary >> dayoff_authorized >> dayoff_unauthorized >> overtime >> netsalary;
                break;
            }
            else
            {
                cout << "\n\t\tRecord Not found" << endl;
                break;
            }
        }
        cout << "__________________________________________________________________________________________________________________________________________\n";
        data.close();
        cout << "\n Press any key to continue";
        getch();
    }
}
// this function will displays all the items present to the users
void staff ::employeelist()
{
    fstream data;
    data.open("employee.txt", ios::in);
    cout << "\n\t\t\t\t\t\t<<< EMPLOYEE LIST >>>";
    cout << "\n_________________________________________________________________________________________________________________________________________\n";
    cout << "Code\tName\t\tSection\t\tAcademic\tBasicSalary\tDayoff(A)\tDayoff(U)\tOvertime\t   NetSalary";
    cout << "\n_________________________________________________________________________________________________________________________________________\n";
    data >> empcode >> empname >> section >> academic_standard >> basicsalary >> dayoff_authorized >> dayoff_unauthorized >> overtime >> netsalary;

    while (!data.eof())
    {
        cout << " " << empcode << "\t" << empname << "\t\t" << section << "\t\t" << academic_standard << "\t\t" << basicsalary << "\t\t" << dayoff_authorized << "\t\t" << dayoff_unauthorized << "\t\t" << overtime << "\t\t   " << netsalary << "\n";
        data >> empcode >> empname >> section >> academic_standard >> basicsalary >> dayoff_authorized >> dayoff_unauthorized >> overtime >> netsalary; // for iteration purpose
    }
    cout << "___________________________________________________________________________________________________________________________________________\n";
    data.close();
}

// CLASS PRODUCT FUNCTION
void product ::products()
{
start:
    int choice;
    while (true)
    {
        system("cls");
        cout << "  ........................................................................\n";
        cout << " >>>                 SUPERMARKET MANAGEMENT SYSTEM                      <<< \n";
        cout << "  ........................................................................\n";
        cout << "                        <<< ADMINISTRATOR >>>";
        cout << endl;
        cout << "\n\t\t______PLEASE SELECT YOUR OPTION______\n";
        cout << "\n\t\t          **** PRODUCTS ****          \n\n";
        cout << "                      1. Add Product                     \n";
        cout << "                      2. Modify Product                  \n";
        cout << "                      3. Search Product                  \n";
        cout << "                      4. Delete Product                  \n";
        cout << "                      5. Display Products                \n";
        cout << "                      6. Back to menu                    \n";
        cout << "                      7. Exit                            \n";

        cout << "\nEnter your choice <1-7>  : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            add();
            break;
        }
        case 2:
        {
            modify();
            break;
        }
        case 3:
        {
            search();
            break;
        }
        case 4:
        {
            rem();
            break;
        }
        case 5:
        {
            list();
            cout << "\nPress any key to continue...";
            getch();
            break;
        }
        case 6:
        {
            menu();
            break;
        }
        case 7:
        {
            exit(0);
            break;
        }
        default:
            cout << "Please select from the given Options \n";
            cout << "_________________________\n";
            cout << "\nPress any key to continue...";
        }
        getch();
        goto start;
    }
}

void product ::add()
{
start:
    fstream data;
    int c;
    int flat = 0;
    float p;
    float d;
    string n;
    string choice;

    cout << "\n______ADD PRODUCT______\n";
    cout << "\n 1. Enter Product Code  : ";
    cin >> productcode;
    cout << "\n 2. Enter Product Name  : ";
    cin >> productname;
    cout << "\n 3. Enter Product Price ($) : ";
    cin >> price;
    cout << "\n 4. Discount on Product (%) : ";
    cin >> discount;

    data.open("datafile.txt", ios::in); //

    if (!data) // if the file doesnt exist
    {
        data.open("datafile.txt", ios::app | ios::out); // ios::app is used to append to the file and ios:: out is used to write in the file
        data << " " << productcode << "\t\t" << productname << "\t\t" << price << "\t\t" << discount << "\n";
        data.close(); // closing the file
    }
    else
    {
        data >> c >> n >> p >> d; // if the file exists then we will iterate over the file values

        while (!data.eof()) // this will help us to iterate till the last of the file
        {
            if (c == productcode) // if a product with the same code exists then we will not add it again and thats why we are using flat variable to keep count if it already exists or not
            {
                flat++;
            }

            data >> c >> n >> p >> d;
        }
        data.close(); // closing the file

        if (flat == 1) // if the flat value is incremented to 1 it means that the product is already present
        {
            goto start;
        }
        else
        {
            data.open("datafile.txt", ios::app | ios::out); // ios::app is used to append to the file and ios:: out is used to write in the file
            data << " " << productcode << "\t\t" << productname << "\t\t" << price << "\t\t" << discount << "\n";
            data.close(); // closing the file
        }
    }

    cout << "\nAdd Product Successfully !!" << endl;
    cout << "_________________________\n";
    cout << "\n Do you want to add another Product (Y/N) ? ";
    cin >> choice;
    if (choice == "y" || choice == "Y" || choice == "yes" || choice == "Yes")
    {
        goto start;
    }
    else
    {
        cout << "\nPress any key to continue...";
        getch();
    }
}

void product ::modify()
{
    fstream data, data1; // creating two objects of the fstream class
    int key;             // to get the product code from the administrator
    int flat = 0;
    int c;
    float p;
    float d;
    string n;
    cout << "\n______MODIFY PRODUCT______\n";
    cout << "\n Enter Product Code  : ";
    cin >> key;

    data.open("datafile.txt", ios::in);

    if (!data) // if the file doesnt exist
    {
        cout << "\n\nFile doesn't Exist ! ";
    }
    else
    {
        data1.open("datafile1.txt", ios::app | ios::out);

        data >> productcode >> productname >> price >> discount;

        while (!data.eof())
        {
            if (key == productcode) // if the product exists
            {
                cout << "\n 1. Enter Product New Code  : ";
                cin >> c;
                cout << "\n 2. Enter Product Name  : ";
                cin >> n;
                cout << "\n 3. Enter Product Price ($) : ";
                cin >> p;
                cout << "\n 4. Discount on Product (%) : ";
                cin >> d;

                data1 << " " << c << "\t\t" << n << "\t\t" << p << "\t\t" << d << "\n";
                cout << "\nModify Product Successfully !!" << endl;
                flat++; // incrementing flat bcs we find the product with the same product code
            }
            else // when the key entered by the user doesnt matches with the existing products code
            {
                data1 << " " << productcode << "\t\t" << productname << "\t\t" << price << "\t\t" << discount << "\n";
            }

            data >> productcode >> productname >> price >> discount; // this will helps us in iterating again and again
        }
        // closing both the files
        data.close();
        data1.close();

        // we will firstly remove the old database file and then we will rename the database1.txt to database.txt
        remove("datafile.txt");
        rename("datafile1.txt", "datafile.txt");

        if (flat == 0) // it means that the product with the pcode is not present as the flat value is not incremented
        {
            cout << "\n\nSorry! Record not found ";
        }
    }
    cout << "_________________________\n";
    cout << "\nPress any key to continue...";
    getch();
}

void product ::rem()
{
    fstream data, data1; // creating object of the fstream class
    int key;
    int flat = 0;
    cout << "\n\n______Delete Product_________ ";
    cout << "\n\n Please enter Product code  :";
    cin >> key;

    data.open("datafile.txt", ios::in); // opening the file

    if (!data) // if file doesn't exist
    {
        cout << "File doesn't Exist" << endl;
        cout << "_________________________\n";
        cout << "\n Press any key to continue";
        getch();
    }
    else
    {
        data1.open("datafile1.txt", ios::app | ios::out);
        data >> productcode >> productname >> price >> discount; // getting the values of the different variables so that we can iterate over the file

        while (!data.eof()) // we will iterate till the end of the file
        {
            if (productcode == key)
            {
                cout << "\n\nProduct deleted Successfully ";
                flat++; // incrementing the flat because we find the product
            }
            else
            {
                data1 << " " << productcode << " " << productname << " " << price << " " << discount << "\n"; // writing into the file
            }

            data >> productcode >> productname >> price >> discount; // for iteratiion
        }

        // closing the opened files
        // and removing and renaming the files

        data.close();
        data1.close();

        remove("datafile.txt");
        rename("datafile1.txt", "datafile.txt");

        if (flat == 0)
        {
            cout << "\nRecord Not found" << endl;
        }
    }
}

void product ::search()
{
    fstream data, data1; // creating object of the fstream class
    int key;
    cout << "\n\nSearch Product ";
    cout << "\n\nProduct code  :";
    cin >> key;

    data.open("datafile.txt", ios::in); // opening the file

    if (!data) // if file doesn't exist
    {
        cout << "File doesn't Exist" << endl;
    }
    else
    {
        cout << "\n_________________________________________________________________________________________\n";
        cout << "Code\t\tName\t\tPrime cost($)\t\tDiscount(%)\t\tPrice($)";
        cout << "\n_________________________________________________________________________________________\n";
        data >> productcode >> productname >> price >> discount;
        while (!data.eof()) // we will iterate till the end of the file
        {
            if (productcode == key)
            {
                cout << productcode << "\t\t" << productname << "\t\t " << price << "\t\t\t " << discount << "\t\t\t " << price - price * (discount / 100) << "\n";
                data >> productcode >> productname >> price >> discount;
                break;
            }
            else
            {
                cout << "\n\t\tRecord Not found" << endl;
                break;
            }
        }
        cout << "_________________________________________________________________________________________\n";
        data.close();
        cout << "\n Press any key to continue";
        getch();
    }
}
// this function will displays all the items present to the users
void product ::list()
{
    fstream data;
    data.open("datafile.txt", ios::in);
    cout << "\n\t\t\t\t<<< PRODUCTS LIST >>>";
    cout << "\n_________________________________________________________________________________________\n";
    cout << "Code\t\tName\t\tPrime cost($)\t\tDiscount(%)\t\tPrice($)";
    cout << "\n_________________________________________________________________________________________\n";
    data >> productcode >> productname >> price >> discount;

    while (!data.eof())
    {
        cout << productcode << "\t\t" << productname << "\t\t" << price << "\t\t\t" << discount << "\t\t\t " << price - price * (discount / 100) << "\n";
        data >> productcode >> productname >> price >> discount; // for iteration purpose
    }
    cout << "_________________________________________________________________________________________\n";
    data.close();
}

void product ::receipt()
{
start:
    fstream data;
    int arrc[100]; // we are taking a array to hold the code of the various product
    int arrq[100]; // we are taking a array to hold the quantity of each product
    string choice;
    int count = 0; // counter
    float amount = 0;
    float primecost = 0;
    float quantity = 0;
    float discount = 0;
    float dis = 0;
    float total = 0;
    float cash = 0;
    float change = 0;
    system("cls");
    cout << "  ........................................................................\n";
    cout << " >>>                 SUPERMARKET MANAGEMENT SYSTEM                      <<< \n";
    cout << "  ........................................................................\n";
    cout << "                        <<< GROCERY LIST >>>";
    cout << endl;
    cout << "\n\t\t______PLEASE SELECT YOUR OPTION______\n";
    data.open("datafile.txt", ios::in); // opening the database file in read mode

    if (!data) // if the file doesn't exists
    {
        cout << "\n\n\tEMPTY DATAFILE" << endl;
        return;
    }
    else
    {
        data.close();
        list();

        do
        {
            bool check = true;
            cout << "\n Enter Product Code  : ";
            cin >> arrc[count];
            cout << "\n Enter the product Quantity : ";
            cin >> arrq[count];

            for (int i = 0; i < count; i++)
            {
                if (arrc[count] == arrc[i])
                {
                    arrq[i] += arrq[count];
                    check = false;
                }
            }
            if (check)
            {
                count++;
            }

            cout << "\n___________________________________________________________";
            cout << "\n Do you want to Buy another Product (Y/N) ? ";
            cin >> choice;
            cout << "___________________________________________________________\n";
        } while (choice == "y" || choice == "Y" || choice == "yes" || choice == "Yes");

        system("cls");
        cout << "  ........................................................................\n";
        cout << " >>>                 SUPERMARKET MANAGEMENT SYSTEM                      <<< \n";
        cout << "  ........................................................................\n";
        cout << "                         <<< CASH RECEIPT >>>" << endl;
        cout << "______________________________________________________________________________________________________________" << endl;
        cout << "\nCode\t\tName\t\tQuantity\t\tPrice\t\tAmount\t\tAmount with Discount" << endl;
        cout << "______________________________________________________________________________________________________________" << endl;

        for (int i = 0; i < count; i++)
        {
            data.open("datafile.txt", ios::in);
            data >> productcode >> productname >> price >> discount;

            while (!data.eof())
            {
                if (productcode == arrc[i]) // checking if the product key matches with any key in the whole file or not
                {
                    amount = price * arrq[i];
                    dis += amount * discount / 100;
                    primecost += amount;
                    discount = amount - (amount * discount / 100);
                    total = total + discount;
                    quantity += arrq[i];
                    cout << endl;
                    cout << productcode << "\t\t" << productname << "\t\t" << arrq[i] << "\t\t\t" << price << "\t\t" << amount << "\t\t" << discount;
                }
                data >> productcode >> productname >> price >> discount;
                i++;
            }
        }

        data.close();
    }

    cout << "\n\n___________________________________";
    cout << "\nTotal Prime cost :  " << primecost << "$" << endl;
    cout << "\nTotal quantity of goods : " << quantity << endl;
    cout << "___________________________________";
    cout << "\n\nTotal discount amount : " << dis << "$" << endl;
    cout << "\n___________________________________";
    cout << "\nTotal Amount :  " << total << "$" << endl;
    cout << "\nCash ($) : ";
    cin >> cash;
    cout << "\nChange : " << cash - total << "$" << endl;
    cout << "\n___________________________________";
    cout << "\nPress any key to continue...";
    getch();
}
