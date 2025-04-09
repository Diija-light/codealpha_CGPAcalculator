#include <iostream>
#include <stdlib.h>

using namespace std;

void calculateGPA();
void calculateCGPA();
void method();

int main()
{
    system("cls");
    int input;
    while(true){
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                    CGPA Calculator              "<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    cout<<"            MENU:"<<endl;
    cout<<"                   1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"                   2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
    cout<<"                   3. Method that is applied here for calclating GPA & CGPA"<<endl;
    cout<<"                   4. Exit Calculator"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    sub:
    cout<<"Enter your choice: ";
    cin>>input;
    switch(input)
    {
        case 1:
                calculateGPA();
                break;

        case 2:
                calculateCGPA();
                break;
        case 3:
                method();
                break;
        case 4:
                exit(EXIT_SUCCESS);
                break;
        default:
            cout<<"You have entered wrong input.Try again!\n"<<endl;
            break;
    }
 }
}

void calculateGPA() {
    int q;
    system("cls");
    cout << "-------------- GPA Calculating -----------------" << endl;
    cout << "How many subjects' points do you want to calculate? : ";
    cin >> q;

    float credit[q];
    float point[q];

    // Input credit and grades
    cout << endl;
    for (int i = 0; i < q; i++) {
        cout << "Enter the credit for the subject " << i + 1 << ": ";
        cin >> credit[i];
        cout << endl;
        cout << "Enter the point of the subject " << i + 1 << "(0 TO 4.0): ";
        cin >> point[i];
        if (credit[i] <= 0 || point[i] < 0 || point[i] > 4.0) {
        cout << "Error: Invalid input. Please enter valid credit and grade values.\n";
        i--;  // Retry current input
        continue;
        }

        cout << "-----------------------------------\n\n" << endl;
    }

    // Calculate GPA
    float sum = 0, tot;
    for (int j = 0; j < q; j++) {
        tot = credit[j] * point[j];
        sum += tot;
    }

    float totCr = 0;
    for (int k = 0; k < q; k++) {
        totCr += credit[k];
    }
    for (int i = 0; i < q; i++) {
    cout << "Subject " << i + 1 << ": Credit = " << credit[i]
         << ", Grade = " << point[i] << endl;
    }
    cout << "\n\n\nTotal Points: " << sum << " . Total Credits: " << totCr << " . Total GPA: " << sum / totCr << " ." << endl;

    // Menu for next actions
    int inmenu;
    while (true) {
        cout << "\n\n\n1. Calculate Again" << endl;
        cout << "2. Go Back to Main Menu" << endl;
        cout << "3. Exit This App \n\n" << endl;
        cout << "Your Input: ";
        cin >> inmenu;

        if (inmenu == 1) {
            calculateGPA();
            break;
        } else if (inmenu == 2) {
            return; // Return to main menu
        } else if (inmenu == 3) {
            exit(EXIT_SUCCESS);
        } else {
            cout << "\n\nYou have Entered Wrong Input! Please Choose Again!" << endl;
        }
    }
}
void calculateCGPA() {
    system("cls");
    int l;
    cout << "-------------- CGPA Calculating -----------------\n\n" << endl;
    cout << "How many semester results do you want to input? : ";
    cin >> l;

    float semrs[l];
    for (int i = 0; i < l; i++) {
        cout << "Enter Semester " << i + 1 << " Result (GPA): ";
        cin >> semrs[i];
        cout << "\n" << endl;
    }

    // Calculate CGPA
    float semtot = 0;
    for (int j = 0; j < l; j++) {
        semtot += semrs[j];
    }

    cout << "******** Your CGPA is " << semtot / l << " **********" << endl;

    // Menu for next actions
    int inmenu;
    while (true) {
        cout << "\n\n\n1. Calculate Again" << endl;
        cout << "2. Go Back to Main Menu" << endl;
        cout << "3. Exit This App \n\n" << endl;
        cout << "Your Input: ";
        cin >> inmenu;

        if (inmenu == 1) {
            calculateCGPA();
            break;
        } else if (inmenu == 2) {
            return; 
        } else if (inmenu == 3) {
            exit(EXIT_SUCCESS);
        } else {
            cout << "\n\nYou have Entered Wrong Input! Please Choose Again!" << endl;
        }
    }
}

void method() {
    system("cls");
    cout << "--------------- Method of Calculating GPA & CGPA ---------------\n\n" << endl;
    cout << "GPA = Sum of (Credit * Point) / Total Credits \n" << endl;
    cout << "CGPA = Sum of GPA / Number of Semesters " << endl;
    cout << "-----------------------------------------------------------------\n\n" << endl;

    // Menu for next actions
    int inmenu;
    while (true) {
        cout << "1. Go Back to Main Menu" << endl;
        cout << "2. Exit This App \n\n" << endl;
        cout << "Your Input: ";
        cin >> inmenu;

        if (inmenu == 1) {
            return;
        } else if (inmenu == 2) {
            exit(EXIT_SUCCESS);
        } else {
            cout << "\n\nYou have Entered Wrong Input! Please Choose Again!" << endl;
        }
    }
}


