#include <iostream>
#include <fstream>
using namespace std;

void student_data();
void new_student();
void fee_calculator();

int main()
{
    



    system("pause");
    return 0;
}

void fee_calculator()
{
    int fee_per_credit_hour = 4200;
    int credit_hour, total_fee;
    
    cout << "How many credit hours do you have to study in this semester?\n";
    cin >> credit_hour;

    total_fee = fee_per_credit_hour * credit_hour;

    cout << "Your fee for this semester would be = " << total_fee << "\n";
}

void new_student()
{
    
    fstream writeData("studentdata.txt", ios::in | ios::out | ios::app);
    string enrollment;
    char choice;
    char name[30];
    
    while(choice != 'n' && choice != 'N')
    {
        system("cls");
    cout << "Enter new student's name\n";
    
    cin.getline(name, 30);

    cout << "Assign enrollment id for " << name << "\n";
    cin >> enrollment;
    writeData << "\n" << enrollment << "           |       " << name;

    cout << "Do you want to add another student?(y/n)\n";
    cin >> choice;

    cin.ignore();
    }
    writeData.close();

}

void student_data()
{
    string studentData;
    ifstream read_student_data("studentdata.txt");

    while(getline(read_student_data, studentData))
    {
        cout << studentData << endl;

    }

    read_student_data.close();

}