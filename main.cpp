/*
 * HOSPITAL PATIENT QUEUE MANAGEMENT SYSTEM
 * BEE 208 - C++ Programming
 *
 * This program allows hospital staff to register patients,
 * assign queue numbers, classify patient priority, and
 * generate a queue report.
 */

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <limits>
#include <vector>
using namespace std;

// Patient Class Definition
class Patient {
private:
    string patientID;
    string fullName;
    int age;
    string department;
    string visitReason;
    int queueNumber;
    string priorityStatus;

public:
    // Constructor
    Patient() {
        age = 0;
        queueNumber = 0;
        priorityStatus = "";
    }

    // Set patient details
    void setPatientDetails(int number) {
        queueNumber = number;

        cout << "\nPatient " << number << endl;
        cout << "--------------------------------------------" << endl;

        cout << "Patient ID: ";
        cin >> patientID;

        cout << "Full Name: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, fullName);

        cout << "Age: ";
        cin >> age;

        cout << "Department: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, department);

        cout << "Reason for Visit: ";
        getline(cin, visitReason);
    }

    // Validate patient details
    bool validateDetails() {
        if (patientID.empty()) {
            cout << "Error: Patient ID cannot be empty!" << endl;
            return false;
        }

        if (age < 0) {
            cout << "Error: Age cannot be negative!" << endl;
            return false;
        }

        return true;
    }

    // Classify patient priority
    void classifyPriority() {

        if (!validateDetails()) {
            priorityStatus = "Invalid Record";
            return;
        }

        if (visitReason == "Emergency" || visitReason == "emergency" ||
            visitReason == "Accident" || visitReason == "accident") {
            priorityStatus = "Emergency";
        }
        else if (age >= 60 || age < 5) {
            priorityStatus = "Priority";
        }
        else {
            priorityStatus = "Regular";
        }
    }

    // Display patient record
    void displayPatientRecord() {
        cout << "\nPatient Record" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Queue Number: " << queueNumber << endl;
        cout << "Patient ID: " << patientID << endl;
        cout << "Full Name: " << fullName << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
        cout << "Reason for Visit: " << visitReason << endl;
        cout << "Priority Status: " << priorityStatus << endl;
        cout << "----------------------------------------" << endl;
    }

    // Save patient record to file
    void savePatientRecord(ofstream &file) {
        file << "Queue Number: " << queueNumber << endl;
        file << "Patient ID: " << patientID << endl;
        file << "Full Name: " << fullName << endl;
        file << "Age: " << age << endl;
        file << "Department: " << department << endl;
        file << "Reason for Visit: " << visitReason << endl;
        file << "Priority Status: " << priorityStatus << endl;
        file << "----------------------------------------" << endl;
    }

    // Getter methods
    string getPriorityStatus() const {
        return priorityStatus;
    }

    int getQueueNumber() const {
        return queueNumber;
    }
};

// Function to display system title
void displayTitle() {
    cout << "\n================================================" << endl;
    cout << "   HOSPITAL PATIENT QUEUE MANAGEMENT SYSTEM" << endl;
    cout << "================================================" << endl;
    cout << "   Welcome to the Hospital Queue System" << endl;
    cout << "   Please register patients to generate queue" << endl;
    cout << "================================================" << endl;
}

// Function to display final summary
void displaySummary(int total, int emergency, int priority, int regular) {
    cout << "\n================================================" << endl;
    cout << "                 QUEUE SUMMARY" << endl;
    cout << "================================================" << endl;
    cout << "TOTAL PATIENTS: " << total << endl;
    cout << "EMERGENCY PATIENTS: " << emergency << endl;
    cout << "PRIORITY PATIENTS: " << priority << endl;
    cout << "REGULAR PATIENTS: " << regular << endl;
    cout << "================================================" << endl;
}

// Main function
int main() {
vector<Patient> patients;
    // Display system title
    displayTitle();

    int numberOfPatients;
    int emergencyCount = 0;
    int priorityCount = 0;
    int regularCount = 0;
    int invalidCount = 0;
cout << "Enter number of patients: ";
cin >> numberOfPatients;

// Open the output file once, at the start, so records can be appended as each patient is processed.
    ofstream reportFile("patient_queue_report.txt");
    if (!reportFile) {
        cerr << "Error: could not open patient_queue_report.txt for writing.\n";
        return 1;
    }
    reportFile << "HOSPITAL PATIENT QUEUE MANAGEMENT SYSTEM";
    reportFile << "Queue Report";

    for (int i = 1; i <= numberOfPatients; i++)
{
        Patient p;
        p.setPatientDetails(i);
        p.classifyPriority();
        string status = p.getPriorityStatus();
        if (status == "Emergency") emergencyCount++;
        else if (status == "Priority") priorityCount++;
        else if (status == "Regular") regularCount++;
        else invalidCount++;

        p.displayPatientRecord();
        p.savePatientRecord(reportFile);

        patients.push_back(p); }
        int total = static_cast<int>(patients.size());

    void displaySummary(int total,
                        int emergencyCount,
                        int priorityCount,
                        int regularCount,
                        int invalidCount);


    reportFile.close();

    cout << "\nReport saved as patient_queue_report.txt\n";

    return 0;
    }
