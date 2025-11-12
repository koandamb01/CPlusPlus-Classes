#include <iostream>
#include<cmath>
#include <string>
using namespace std;

// 1. add funtion
int addFunction(int a, int b){
    int sum = a + b;
    return sum;
}

// 2. square function
int squareFunction(int n){
    int square = n * n;
    return square;
}

// 3. circleArea function
double cirleAreaFunction(double radius){
    double area = (3.14 *(radius * radius));
    return area;
}

// 4. average function
double averageFunction(double a, double b){
    double average = (a + b)/2;
    return average;
}

// 5. power function
int powerFunction(int base, int exponent){
    int power = pow(base, exponent);
    return power;
}

// 6. isPositive function
bool ispositiveFunction(int n){
    bool isPositive = false;
    if (n > 0){
        isPositive = true;
        return true;
    //  return;
    }
    return isPositive;
}

// 7. isVowel function 
bool isVowelFunction(char c){
    bool isVowel = false;
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
    isVowel = true;
    }
    return isVowel;
}

// 8. countVowels function
int countVowelsFunction(string str){
    int count =0;
    for(char c: str){
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            count++;
        }
    }
    return count;
}

// 9. isAdult function
bool isAdultFunction(int age){
    bool isAdult = false;
    if(age >= 18){
        isAdult = true;
    }
    return isAdult;
}

// Display menu
void main_menu(){
    cout<<"1. Add Function.\n";
    cout<<"2. square function.\n";
    cout<<"3. circleArea function\n";
    cout<<"4. average function\n";
    cout<<"5. power function\n";
    cout<<"6. isPositive function\n";
    cout<<"7. isPositive function\n";
    cout<<"8. isVowel function\n";
    cout<<"9. isAdult function\n";
    cout<<"10. Exit\n";
}

int main(){
    cout<<"\n";
    cout<<"Please chose an option from the main menu: \n";
    main_menu();
    int option;
    cin>>option;
    while (option!=10) {
        switch (option) {
            case 1:{
                int a;
                int b;
                cout<<"enter first number a: ";
                cin>> a;
                cout<<"enter second number b: ";
                cin>> b;
                int sum = addFunction(a,b);
                cout<<sum;
                cout<<"\n";
            break;
            }

            case 2:{
                int n;
                cout<<"enter a number n: ";
                cin>> n;
                int square = squareFunction(n);
                cout<<square;
                cout<<"\n";
            break;
            }

            case 3:{
                double radius;
                cout<<"enter your circle Radius: ";
                cin>> radius;
                double area = cirleAreaFunction(radius);
                cout<<area;  
                cout<<"\n";
            break;
            }

            case 4:{
                double a;
                double b;
                cout<<"enter first number a: ";
                cin>> a;
                cout<<"enter second number b: ";
                cin>> b;
                double average = averageFunction(a,b);
                cout<<average;
                cout<<"\n";
            break;
            }

            case 5:{
                int base;
                int exponent;
                cout<<"enter base: ";
                cin>> base;
                cout<<"enter exponent: ";
                cin>> exponent;
                int power = powerFunction(base,exponent);
                cout<<power;
                cout<<"\n";
            break;
            }

            case 6:{
                int n;
                cout<<"enter any number: ";
                cin>> n;
                bool isPositive = ispositiveFunction(n);
                cout<<isPositive;
                cout<<"\n";
            break;
            }

            case 7:{
                char c;
                cout<<"enter a character: ";
                cin>> c;
                bool isVowel = isVowelFunction(c);
                cout<<isVowel;
                cout<<"\n";
            break;
            }

            case 8:{
                string str;
                cout<<"enter a word: ";
                cin>> str;
                int countVowels = countVowelsFunction(str);
                cout<<countVowels;
                cout<<"\n";
            break;
            }

            case 9:{
                int age;
                cout<<"enter an age: ";
                cin>> age;
                bool isAdult = isAdultFunction(age);
                cout<<isAdult;
                cout<<"\n";
            break;
            }

            default:{
            cout<<"Please choose from the main menu.\n";
            break;
            }
        }
        cout<<"Want to try something else?\n";
        main_menu();
        cin>>option;
    }
    cout<<"Exiting.....!\n";
    return 0;
}