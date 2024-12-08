#include <iostream>
#include <fstream>
using namespace std;

class Temp {
    string username, email, password;
    fstream file;

public:
    void login();
    void signUp();
    void forgotPassword();
};

int main() {
    Temp obj;
    char choice;
    cout << "\n1- Login";
    cout << "\n2- Sign-Up";
    cout << "\n3- Forgot password";
    cout << "\n4- Exit";
    cout << "\nEnter Your Choice: ";
    cin >> choice;
    cin.ignore(); // To ignore the newline after choice input

    switch (choice) {
        case '1':
            obj.login();
            break;
        case '2':
            obj.signUp();
            break;
        case '3':
            obj.forgotPassword();
            break;
        case '4':
            return 0;
        default:
            cout << "Invalid Selection...!";
    }
    return 0;
}

void Temp::signUp() {
    cout << "\nEnter Your User Name: ";
    getline(cin, username);
    cout << "Enter Your Email Address: ";
    getline(cin, email);
    cout << "Enter Your Password: ";
    getline(cin, password);

    file.open("loginData.txt", ios::out | ios::app);
    file << username << "*" << email << "*" << password << endl;
    file.close();

    cout << "\nAccount created successfully!";
}

void Temp::login() {
    string searchName, searchPass;
    cout << "--------LOGIN-------" << endl;
    cout << "Enter Your User Name: ";
    getline(cin, searchName);
    cout << "Enter Your Password: ";
    getline(cin, searchPass);

    file.open("loginData.txt", ios::in);
    bool found = false;

    while (getline(file, username, '*') && getline(file, email, '*') && getline(file, password)) {
        if (username == searchName && password == searchPass) {
            cout << "\nAccount Login Successful!";
            cout << "\nUserName: " << username << endl;
            cout << "Email: " << email << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Username or Password is incorrect!";
    }

    file.close();
}

void Temp::forgotPassword() {
    string searchName, searchEmail;
    cout << "\nEnter Your User Name: ";
    getline(cin, searchName);
    cout << "Enter Your Email Address: ";
    getline(cin, searchEmail);

    file.open("loginData.txt", ios::in);
    bool found = false;

    while (getline(file, username, '*') && getline(file, email, '*') && getline(file, password)) {
        if (username == searchName && email == searchEmail) {
            cout << "\nAccount found!";
            cout << "\nYour password: " << password << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nAccount not found!";
    }

    file.close();
}
