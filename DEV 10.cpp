#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentID, studentName;
    int semester;
    float tuitionFee, discount = 0, finalFee;
    float totalCollectedFee = 0;
    int studentCount = 0;
    char choice;

    do {
        cout << "Enter Student Details" << endl;
        cout << "Enter Student ID: ";
        cin >> studentID;
        cin.ignore(); 
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        cout << "Enter Semester: ";
        cin >> semester;
        cout << "Enter Tuition Fee: ";
        cin >> tuitionFee;

        discount = 0;

        
        if (semester >= 1 && semester <= 2) {
            discount = tuitionFee * 0.10; // 10%
        } else if (semester >= 3 && semester <= 6) {
            discount = tuitionFee * 0.05; // 5%
        } else {
            discount = 0; // No scholarship
   }
        if (tuitionFee > 100000) {
            discount = discount + (tuitionFee * 0.02);
        }

        finalFee = tuitionFee - discount;
        totalCollectedFee += finalFee;
        studentCount++;

        cout << "\n--- Fee Slip ---" << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Original Fee: Rs. " << tuitionFee << endl;
        cout << "Discount / Scholarship: Rs. " << discount << endl;
        cout << "Final Fee: Rs. " << finalFee << endl;

        cout << "\nDo you want to enter another student? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << " Final Report" << endl;
    cout << "Total Students Processed: " << studentCount << endl;
    cout << "Total Collected Fee: Rs. " << totalCollectedFee << endl;

    return 0;
}

