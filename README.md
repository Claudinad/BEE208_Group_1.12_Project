# Hospital Patient Queue Management System

**Course:** BEE 208 — C++ Programming
**Assessment:** Mid-Semester Practical Project Examination
**Project Category:** Non-Technical Project Question 10
**Institution:** Accra Technical University — Faculty of Engineering, Department of Electrical/Electronic Engineering

---

## 1. Group Members

| Responsibilities | Index Number | Student |
|---|---|---|
| _Project lead_ | _01245742B_ | Abaahom Sethyna Say |
| _Algorithm writer_ | _01244782B_ | Joel Luke Kwadwo Agyei-Henaku |
| _Pseudocode writer_ | _01243253B_ | Sulemana Raihan Tuteya |
| _Flowchart designer_ | _01242255B_ | Ankomah Richard Bamfo |
| _C++ programmer 1_ | _01243971B_ | Jedrek Twumasi Ankrah |
| _C++ programmer 2_ | _01243985B_ | Ako-Adjie Joshua Badu |
| _Testing and validation lead_ | _01245079B_ | Lamptey Nicholas |
| _GitHub repository manager_ | _01246485B_ | Odai Claudinad Afotey |
| _Documentation lead_ | _01242246B_ | Gifty Apuko |
| _Presentation and defence lead_ | _01246286B_ | Komlakuma Wisdom |

---

## 2. Project Background

Hospitals and clinics attend to many patients each day. Patients may arrive for general
consultation, emergency care, laboratory tests, pharmacy services or review appointments.
When patient queues are not properly organised, waiting time becomes difficult to manage
and staff may struggle to know who should be attended to first.

This project involved developing a simple C++ application that records patient details,
assigns queue numbers, classifies patient priority and displays a clear queue report.

## 3. Problem Statement

Many small clinics still manage patient queues manually using notebooks or verbal
announcements. This can lead to confusion, delays and poor tracking of patient order.
The Hospital Patient Queue Management System addresses this by using a simple C++
programme to record patient information, assign queue numbers and support basic
priority-based service.

## 4. Aim

To design and develop a C++ Hospital Patient Queue Management System that records
patient details, assigns queue positions, determines patient priority and generates a
queue report for hospital staff.

## 5. Objectives

- Allow hospital staff to register multiple patients.
- Store patient name, patient ID, age, department and reason for visit.
- Assign a queue number to each patient.
- Use decision statements to classify patients as Emergency, Priority or Regular.
- Display all patients in a readable queue report.
- Count the number of patients in each priority category.
- Save the final queue report into a text file.
- Apply C++ programming concepts to solve a non-technical administrative problem.

## 6. Priority Decision Rules

| Condition | Queue Priority |
|---|---|
| Visit reason is Emergency, Accident, Severe Pain or Breathing Difficulty | Emergency |
| Patient age is 60 years or above | Priority |
| Patient age is below 5 years | Priority |
| All other valid patient records | Regular |
| Age is less than 0 or patient ID is empty | Invalid Record |

## 7. Algorithm

See [`algorithm.md`](algorithm.md) for the full numbered algorithm.

## 8. Pseudocode

See [`pseudocode.md`](pseudocode.md) for the full pseudocode.

## 9. Flowchart

See [`flowchart.png`](flowchart.png).


The flowchart shows the Start, patient-count input, the registration loop, validation,
priority decision points (Emergency, Priority, Regular, Invalid Record), display, file
saving and End symbols.

## 10. C++ Concepts Used

| Concept | Where it is used |
|---|---|
| Classes and objects | The `Patient` class encapsulates all data and behaviour for one patient record. |
| Vectors | `vector<Patient>` stores all registered patient records dynamically. |
| Functions | `setPatientDetails()`, `validateDetails()`, `classifyPriority()`, `displayPatientRecord()`, `savePatientRecord()`, plus helper functions for title, summary and input handling. |
| Loops | A `for` loop registers each patient in turn; `while` loops re-prompt for invalid numeric input. |
| Conditional statements | `if / else if / else` statements validate records and classify priority. |
| Input validation | Age input is checked to ensure it is numeric; empty IDs and negative ages are flagged as Invalid Record. |
| File handling | `ofstream` is used to write each patient record and the final summary to `patient_queue_report.txt`. |
| Strings | `std::string` is used for all text fields (ID, name, department, reason, priority status). |

## 11. Programme Features

1. Clear title screen for the system.
2. Easy-to-understand input prompts.
3. Automatic queue number assignment based on registration order.
4. Priority classification using conditional statements.
5. Summary counts for Emergency, Priority, Regular and Invalid Record patients.
6. A saved queue report file (`patient_queue_report.txt`).
7. Well-commented C++ source code (`main.cpp`).

## 12. Sample Input and Output
A screen shot of the sample input and output has been uploaded

## 13. How to Build and Run

```bash
g++ -std=c++17 -Wall -o hospital_queue main.cpp
./hospital_queue
```

The programme will prompt for the number of patients, collect each patient's details,
display the queue report on screen and save it to `patient_queue_report.txt` in the same
folder.


## 14. Challenges Faced and Lessons Learned

_1. Learning how to use GitHub for group collaboration, including inviting collaborators and managing commits.

2. Coordinating the work so that different group members could complete their assigned tasks without overlapping.
   
3. Splitting the C++ programming work between two programmers while keeping the program functional._

---
