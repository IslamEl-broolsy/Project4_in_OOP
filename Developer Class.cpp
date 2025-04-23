#include <iostream>

using namespace std;

class clsPerson
{

private:

    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;


public:


    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    int ID()
    {
        return _ID;
    }

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string FirstName()
    {
        return _FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    string LastName()
    {
        return _LastName;
    }

    string FullName()
    {
        return  _FirstName + " " + _LastName;;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }

    string Email()
    {
        return _Email;
    }

    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    string Phone()
    {
        return _Phone;
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "\nThe following message sent successfully to email: " << _Email;
        cout << "\nSubject: " << Subject;
        cout << "\nBody: " << Body;
    }

    void SendSMS(string TextMessage)
    {
        cout << "\n\nThe following message sent successfully to Phone: " << _Phone << endl;
        cout << TextMessage << endl;
    }

    void Print()
    {
        cout << "\nInfo:\n";
        cout << "\n---------------------------";
        cout << "\nID       : " << _ID;
        cout << "\nFirstName: " << _FirstName;
        cout << "\nLastName : " << _LastName;
        cout << "\nFull Name: " << FullName();
        cout << "\nEmail    : " << _Email;
        cout << "\nPhone    : " << _Phone << endl;
        cout << "\n---------------------------\n";
    }

};

class clsEmployee : public clsPerson
{

private:

    string _Title;
    float _Salary;
    string _Department;

public:

    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary)
        : clsPerson(ID, FirstName, LastName, Email, Phone)
    {
        _Title = Title;
        _Salary = Salary;
        _Department = Department;
    }

    void SetTitle(string Title)
    {
        _Title = Title;
    }

    string Title()
    {
        return _Title;
    }

    void SetSalary(float Salary)
    {
        _Salary = Salary;
    }

    float Salary()
    {
        return _Salary;
    }

    void SetDepartment(string Department)
    {
        _Department = Department;
    }

    string Department()
    {
        return _Department;
    }

    void Print()
    {
        cout << "\nInfo:\n";
        cout << "\n---------------------------";
        cout << "\nID        : " << ID();
        cout << "\nFirstName : " << FirstName();
        cout << "\nLastName  : " << LastName();
        cout << "\nFull Name : " << FullName();
        cout << "\nEmail     : " << Email();
        cout << "\nPhone     : " << Phone();
        cout << "\nTitle     : " << _Title;
        cout << "\nSalary    : " << _Salary;
        cout << "\nDepartment: " << _Department << endl;;
        cout << "\n---------------------------\n";

    }
};

class clsDeveloper : public clsEmployee
{

private:

    string _MainPL;

public:

    clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary , string MainPL)
        :clsEmployee(ID, FirstName, LastName, Email, Phone , Title, Department, Salary)
    {
        _MainPL = MainPL;
    }

    void SetMainPL(string MainPL)
    {
        _MainPL = MainPL;
    }

    string MainPL()
    {
        return _MainPL;
    }

    void Print()
    {
        cout << "\nInfo:\n";
        cout << "\n---------------------------";
        cout << "\nID        : " << ID();
        cout << "\nFirstName : " << FirstName();
        cout << "\nLastName  : " << LastName();
        cout << "\nFull Name : " << FullName();
        cout << "\nEmail     : " << Email();
        cout << "\nPhone     : " << Phone();
        cout << "\nTitle     : " << Title();
        cout << "\nSalary    : " << Salary();
        cout << "\nDepartment: " << Department();
        cout << "\nMainPL    : " << _MainPL;
        cout << "\n---------------------------\n";

    }
};

int main()
{
    clsDeveloper Developer1(10, "Islam", "Ahmed", "My@gmail.com", "0109205", "CEO", "IS", 8000, "C++");
    Developer1.Print();

    Developer1.SendEmail("Hi", "How are you?");
    Developer1.SendSMS("How are you?");

    system("pause > 0");
    return 0;
}

