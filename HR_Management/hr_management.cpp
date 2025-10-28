#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;


// creating a new type as a structure.
struct Employee_info{  
        int id;
        string fullName;
        int age;
        string ethnicity;
        string position;
        double salary;
    };
// Global variable
// int id = 0;
int max_employees = 3;
// vector<Employee_info> employees_list;
// Employee_info newEmployee;
// int lookup_id;

//Functions to be called in main code.
// Funtion to displays main menu.
void main_menu(){
    cout<<"1. Add a new employee.\n";
    cout<<"2. Update an employee’s information.(find by ID, then update)\n";
    cout<<"3. Remove an employee.(find by ID, then delete from the list)\n";
    cout<<"4. Find an employee by ID.(display all their details)\n";
    cout<<"5. Get Reports.\n";
    cout<<"6. Exit This Program.\n";
}

void repport_menu(){
    cout<<"1. Number of employees.\n";
    cout<<"2. Oldest employee.\n";
    cout<<"3. Youngest employee.\n";
    cout<<"4. Highest paid employee.\n";
    cout<<"5. Least paid employee.\n";
    cout<<"6. Percentage of employees by ethnicity.\n";
    cout<<"7. Average salary.\n";
    cout<<"8. Back to main menu.\n";
}

void display_vector(){
    vector<Employee_info> employees_list;
    if(employees_list.empty()){
        cout<<"You have no employee to display!\n";
    }
    else{
        for (Employee_info e : employees_list){
            cout<< e.id <<"\t";
            cout<< e.fullName <<"\t";
            cout<< e.age <<"\t";
            cout<< e.ethnicity <<"\t";
            cout<< e.position <<"\t";
            cout<< e.salary <<"\n";
        }
    }
}

// Function to add employees into the array
void add_employee(){
    vector<Employee_info> employees_list;
    if (employees_list.size() >= max_employees){
        cout<<"!!!WARNING!!!:You have reached the maximum number of employee! Please FIRE one before trying again!!!\n";
        return;
    }

    // if (employees_list.size() < max_employees){
        cout<<"Please enter the new employee's informations\n";
        int id = 0;
        Employee_info newEmployee;
        id++;
        newEmployee.id = id;

        cout<<"Full name: ";
        cin.ignore();
        getline(cin, newEmployee.fullName);

        cout<<"Age: ";
        cin>> newEmployee.age;

        cout<<"Ethnicity: ";
        cin.ignore();
        getline(cin, newEmployee.ethnicity);

        cout<<"Position: ";
        // cin.ignore();
        getline(cin, newEmployee.position);

        cout<<"Salary: ";
        cin>> newEmployee.salary;

        employees_list.push_back(newEmployee);
        cout<<"Employee with id #"<<newEmployee.id<<" added succesfully!\n\n";
// }  
   
}
// Function to update employee's info by id.
void update_info(){
    vector<Employee_info> employees_list;
    if(employees_list.empty()){
        cout<<"There is no employee in your database to update.\n";
        return;
    }
    
    cout<<"Enter employee ID to update: ";
    int lookup_id;
    cin>>lookup_id;
    bool isEmployeeFound = false;
    for(int x=0; x < employees_list.size();x++){
        if(lookup_id == employees_list[x].id){
            isEmployeeFound = true;
            string new_fullName;
            int new_age;
            string new_ethnicity;
            string new_position;
            double new_salary;
            cout<<"Found employee with id #"<<employees_list[x].id<<". Please proceed to updating emplyee's info.\n";
            cout<<"Enter new full name: ";
            cin.ignore();
            getline(cin,new_fullName);
            employees_list[x].fullName = new_fullName;

            cout<<"Enter New age: ";
            cin>>new_age;
            employees_list[x].age = new_age;

            cout<<"Enter New ethnicity: ";
            cin.ignore();
            getline(cin,new_ethnicity);
            employees_list[x].ethnicity = new_ethnicity;

            cout<<"Enter New position: ";
                // cin.ignore();
            getline(cin,new_position);    
            employees_list[x].position = new_position;

            cout<<"Enter new salary: ";
            cin>>new_salary;
            employees_list[x].salary = new_salary;
        }
    }
    if (isEmployeeFound == false){
        cout<<"Employee not found.\n";
    }
}

// Function to remove an employee
void remove_employee(){
    vector<Employee_info> employees_list;
    if(employees_list.empty()){
        cout<<"There is no employee in your database to remove.\n";
        return;
    }
   
    cout<<"Enter employee ID to remove: ";
    int lookup_id;
    cin>>lookup_id;
    bool isEmployeeFound = false;
    for(int x=0; x < employees_list.size();x++){
        if(lookup_id == employees_list[x].id){
            isEmployeeFound = true;
            employees_list.erase(employees_list.begin() + (employees_list[x].id - 1));
            cout<<"Employee with id #"<<employees_list[x].id<<" removed succesfully!\n";
            if(employees_list.empty()){
                cout<<"You fired all your employees!\n";
            }
        }
    }
    if (isEmployeeFound == false){
        cout<<"Employee not found.\n";
    }

}


// function to find employee by ID
void find_employee(){
    vector<Employee_info> employees_list;
    if(employees_list.empty()){
        cout<<"There is no employee in your database to find.\n";
        return;
    }
    
    cout<<"Enter employee ID to find: ";
    int lookup_id;
    cin>>lookup_id;
    bool isEmployeeFound = false;
    for(int x=0; x < employees_list.size();x++){
        if(lookup_id == employees_list[x].id){
            isEmployeeFound = true;
            cout<<"Found employee with id #"<<employees_list[x].id<<". Below is the employee's info:\n";
            cout<<"ID: "<<employees_list[x].id<<"\n";
            cout<<"Full name: "<<employees_list[x].fullName<<"\n";
            cout<<"Age: "<<employees_list[x].age<<"\n";
            cout<<"Ethnicity: "<<employees_list[x].ethnicity<<"\n";
            cout<<"Position: "<<employees_list[x].position<<"\n";
            cout<<"Salary: "<<employees_list[x].salary<<"\n";
        }
    }

    if (isEmployeeFound == false){
        cout<<"Employee not found.\n";
    }
}



void repport(){
    vector<Employee_info> employees_list;
    if(employees_list.empty()){
        cout<<"There is no employee in your database.\n";
        return;
    }
    
    int oldest;
    int youngest;
    int repport_choice;
    double highest_pay;
    double lowest_pay;

    cout<<"choose an option from the repport menu: \n";
    repport_menu();
    cin>>repport_choice;
    while (repport_choice!=8){
        switch (repport_choice) {
        case 1:
            cout<<"Number of employees: "<<employees_list.size()<<"\n";
        break;

        case 2:
            oldest = employees_list[0].age;
            for(int x=1; x<employees_list.size();++x ){
                if (employees_list[x].age > oldest){
                    oldest = employees_list[x].age;
                }
            }
            cout<<"Oldest employee: "<<oldest<<"\n";
        break;

        case 3:
            youngest = employees_list[0].age;
            for(int x=1; x<employees_list.size();++x ){
                if (employees_list[x].age < youngest){
                    youngest = employees_list[x].age; 
                }
            }
            cout<<"Youngest employee: "<<youngest<<"\n";
        break;

        case 4:
            highest_pay = employees_list[0].salary;
            for(int x=1; x<employees_list.size();++x ){
                if (employees_list[x].salary > highest_pay){
                    highest_pay = employees_list[x].salary;
                    
                }
            }
            cout<<"Highest Salary: "<<highest_pay<<"\n";
        break;
        case 5:
            lowest_pay = employees_list[0].salary;
            for(int x=1; x<employees_list.size();++x ){
                if (employees_list[x].salary < lowest_pay){
                    lowest_pay = employees_list[x].salary;   
                }
            }
            cout<<"Lowest Salary: "<<lowest_pay<<"\n";
        break;
        case 6:
            
        break;
        case 7:
            int numofEmployee = employees_list.size();
            double totalSalary = 0;
            double average;
            for(int x=0; x<employees_list.size(); ++x){
                totalSalary = totalSalary + employees_list[x].salary;
            }
            average = totalSalary / numofEmployee;
        break;
        }
        cout<<"What would you like to do next?\n";
        repport_menu();
        cin>>repport_choice;
    }
    cout<<"Returning to  main menu.\n";
    
}




//Main function
int main(){
    int chosen_option;
    cout<<"\n";
    cout<<"----Welcome to HR management program!-----\n";
    cout<<"Please chose an option from the main menu: ";
    main_menu();
    cin>>chosen_option;
    while (chosen_option!=6) {
        switch (chosen_option) {
            case 1:
                add_employee();
                display_vector();
                cout<<"\n";
            break;

            case 2:
                update_info();
                display_vector();
                cout<<"\n";
            break;

            case 3:
                remove_employee();
                display_vector();
            cout<<"\n";
            break;

            case 4:
                find_employee();
            break;

            case 5:
                repport();
            break;

            default:
            cout<<"Please choose from the main menu.\n";
            break;
        }
        cout<<"What would you like to do next?\n";
        main_menu();
        cin>>chosen_option;
    }
    cout<<"You are exiting the program!\n";
    cout<<"---Thank you for using the application---\n";
    return 0;
}