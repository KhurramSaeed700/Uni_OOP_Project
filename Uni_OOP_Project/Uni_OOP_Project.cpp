
//milk man code
/*
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>

using namespace std;
string username, password;
int choice;

int main() {

    ifstream file("names.txt");
    vector<string> names;
    string input;
    while (file >> input) {
        names.push_back(input);
    }

    ifstream file2("password.txt");
    vector<string> pass;
    string input;
    while (file2 >> input) {
        pass.push_back(input);
    }

    menu();
    system("cls");
    if (choice == 1) {
        cout << "Enter User Name:\n";
        cin >> username;
        cout << "Enter Password:\n";
        cin >> password;

    }
    else
    {
        cout << "Enter User Name:\n";
        cin >> username;
        cout << "Enter Password:\n";
        cin >> password;

    }


}

int menu() {
    cout << "Press 1 to Register\nPress 2 to Sign In";
    cin >> choice;
    return choice;
}
*/

//operator overloading calculator

//1. internet code - runs good
/*
#include <iostream>
#include <conio.h>

using namespace std;

class cal{
    float num;

public:
    cal(){
        num = 0;
    }

    void getdata(){
        cout << "enter number: ";
        cin >> num;
        cout << "------------------\n";
    }

    void showdata(){
        cout << num << endl;
    }

    cal operator + (cal) const;
    cal operator - (cal) const;
    cal operator * (cal) const;
    cal operator / (cal) const;
};

cal cal::operator + (cal arg2) const{
    cal temp;
    temp.num = num + arg2.num;
    return temp;
}

cal cal::operator - (cal arg2) const{
    cal temp;
    temp.num = num - arg2.num;
    return temp;
}

cal cal::operator * (cal arg2) const{
    cal temp;
    temp.num = num * arg2.num;
    return temp;
}

cal cal::operator / (cal arg2) const{
    cal temp;
    temp.num = num / arg2.num;
    return temp;
}

void main(){
    cal n1, n2, n3;
    int op;

    n1.getdata();
    cout << "first number: ";
    n1.showdata();
    cout << endl;

    n2.getdata();
    cout << "second number: ";
    n2.showdata();
    cout << endl;

    cout << "for + press 1\nfor - press 2\nfor * press 3\nfor / press 4\n";
    cin >> op;
    cout << endl;

    switch (op){
    case 1:
        n3 = n1 + n2;
        break;
    case 2:
        n3 = n1 - n2;
        break;
    case 3:
        n3 = n1 * n2;
        break;
    case 4:
        n3 = n1 / n2;
        break;
    default:
        cout << "Invalid choice! " << endl;
    }

    cout << "Final Result :\n";
    n3.showdata();
    cout << "------------------\n";
}


*/

//2. abdul wahab code - has errors
/*
#include <iostream>
#include <string>
using namespace std;

class cal
{
private:
    float a;
    char op;
    string opnam;

public:
    //construtor
    cal()
    {
        a = 0;
    }
    //getter
    void get_data()
    {
        cout << "Enter the number :  ";
        cin >> a;
        cout << endl;
    }
    //setter
    void set_data()
    {
        cout << "Enter operator for arthematic task i.e  +,-,*,/ : ";
        cin >> op;
        cout << endl;
    }
    //operator ovrerloading
    cal operator +(cal t)
    {
        cal temp;
        temp.a = a + t.a;
        return temp;
    }
    cal operator -(cal t)
    {
        cal temp;
        temp.a = a - t.a;
        return temp;
    }
    cal operator *(cal t)
    {
        cal temp;
        temp.a = a * t.a;
        return temp;
    }
    cal operator /(cal t)
    {
        cal temp;
        temp.a = a / t.a;
        return temp;
    }
};

int main()
{
    cal val_1, val_2, answer, ope;
    string opname;
    val_1.get_data();
    val_2.get_data();
    ope.set_data();
    //cal.op = ope;
    switch (ope)
    {
    case '+':
        answer = val_1 + val_2;
        opname = "Addition";
        break;
    case '-':
        answer = val_1 - val_2;
        opname = "Subtration";
        break;
    case '*':
        answer = val_1 * val_2;
        opname = "Multiplication";
        break;
    case '/':
        opname = "Division";
        break;
    default:
        cout << "Wrong operator \n Thank you";
    }

    cout << " The " << opname << " of " << val_1 << " and " << val_2 << " is " << answer;

}
*/