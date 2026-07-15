/*
*HOSPITAL PAITENT QUEUE MANAGEMENT SYSTEM
*Bee 208 - C++ Programming
*
*This program allows hospital staff to register paitents
*assign queue numbers, classify paient priority and
*generate a queue report .
*/

#include <iostream>
#include <string> 
#include <fstream>
#include <iomanip>
#include <limits>

using namespace std;

//Paitent Class Definition 
class paitent {
private :
   string paitentID;
   string fullname;	
	int age;
	string department;
	string visitReason;
	int queueNumber;
	string priorityStatus;
	
	public:
		//Constructor 
		paitent(){
			age = 0;
			queueNumber =0;
			priorityStatus = "";
	    }  
	
	//Set paitent details
	void setPaitentDetails(int number)  {
		queueNumber = number;
		
	    cout << "\nPaitent" << number <<endl;
		cout <<"--------------------------------------------"<< endl;	
		
		cout << "Paitnt ID: ";
		cin >> paitentID;
		
		cout <<"Full Name: ";
		cin.ignore();
		getline(cin, fullname);
		
		cout <<"Age: ";
		cin>> age;
		
		  cout << "Department: ";
        cin.ignore();
        getline(cin, department);
        
          cout << "Reason for Visit: ";
        getline(cin, visitReason);
    }
		
	// Validate patient details
    bool validateDetails() {
        if (paitentID.empty()) {
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
        // First check if details are valid
        if (!validateDetails()) {
            priorityStatus = "Invalid Record";
            return;
     }

  // Priority classification logic
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
        cout << "Patient ID: " << paitentID << endl;
        cout << "Full Name: " << fullname << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
        cout << "Reason for Visit: " << visitReason << endl;
        cout << "Priority Status: " << priorityStatus << endl;
        cout << "----------------------------------------" << endl;
}

   // Save patient record to file
    void savePatientRecord(ofstream& file) {
        file << "Queue Number: " << queueNumber << endl;
        file << "Paitent ID: " << paitentID << endl;
        file << "Full Name: " << fullname << endl;
        file << "Age: " << age << endl;
        file << "Department: " << department << endl;
        file << "Reason for Visit: " << visitReason << endl;
        file << "Priority Status: " << priorityStatus << endl;
        file << "----------------------------------------" << endl;
    }
	
   // Getter methods for summary
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
    cout << "================================================" << endl; }


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
    
    // Main function
int main() {
    // Display system title
    displayTitle();

    int numberOfPatients;
    int emergencyCount = 0;
    int priorityCount = 0;
    int regularCount = 0;
    int invalidCount = 0;












