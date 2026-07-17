# BEE208_Group_1.12_Project
HOSPITAL PATIENT QUEUE MANAGEMENT SYSTEM
# BEE208 - Hospital Patient Queue Management System

## Project Description

This project was developed as part of the BEE 208 C++ Programming Mid-Semester Practical Examination at Accra Technical University.

The Hospital Patient Queue Management System is a C++ application that records patient details, assigns queue numbers, classifies patients according to priority, and generates a patient queue report.



## Objectives

- Register multiple patients.
- Record patient details.
- Assign queue numbers automatically.
- Classify patients as Emergency, Priority, or Regular.
- Display a queue report.
- Save the report to a text file.



## Technologies Used

- C++
- Visual Studio Code
- GitHub



## Priority Classification

| Condition | Priority |
|-----------|----------|
| Emergency, Accident, Severe Pain, Breathing Difficulty | Emergency |
| Age 60 years and above | Priority |
| Age below 5 years | Priority |
| All other valid patients | Regular |
| Invalid age or empty Patient ID | Invalid Record |



## Project Files

```
BEE208-Hospital-Patient-Queue-Management-System/

├── main.cpp
├── README.md
├── algorithm.md
├── pseudocode.md
├── flowchart.png
├── patient_queue_report.txt
└── screenshots/
```


## How to Run

1. Clone or download this repository.
2. Open the project in Visual Studio Code.
3. Compile the `main.cpp` file.
4. Run the program.
5. Enter the required patient information.
6. View the queue report on the screen.
7. Check the generated `patient_queue_report.txt` file.



## Output

The program displays:

- Patient details
- Queue number
- Priority status
- Total Emergency patients
- Total Priority patients
- Total Regular patients

It also saves the report into:

```
patient_queue_report.txt
```

## License

This project is for educational purposes only.
