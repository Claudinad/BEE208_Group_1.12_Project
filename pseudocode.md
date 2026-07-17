# Pseudocode — Hospital Patient Queue Management System

```text
BEGIN
    DISPLAY system title and welcome message
    INPUT numberOfPatients

    OPEN file "patient_queue_report.txt" FOR WRITING
    WRITE report title TO file

    SET emergencyCount = 0
    SET priorityCount  = 0
    SET regularCount   = 0
    SET invalidCount   = 0

    FOR patientNumber = 1 TO numberOfPatients DO
        queueNumber = patientNumber

        INPUT patientID
        INPUT fullName
        REPEAT
            INPUT age
            IF age IS NOT a whole number THEN
                DISPLAY "Invalid age entered. Please enter a whole number."
            END IF
        UNTIL age IS a whole number
        INPUT department
        INPUT visitReason

        IF patientID IS empty OR age < 0 THEN
            priorityStatus = "Invalid Record"
            invalidCount = invalidCount + 1
        ELSE IF visitReason CONTAINS "Emergency" OR "Accident"
                 OR "Severe Pain" OR "Breathing Difficulty" THEN
            priorityStatus = "Emergency"
            emergencyCount = emergencyCount + 1
        ELSE IF age >= 60 OR age < 5 THEN
            priorityStatus = "Priority"
            priorityCount = priorityCount + 1
        ELSE
            priorityStatus = "Regular"
            regularCount = regularCount + 1
        END IF

        DISPLAY patient record (ID, name, age, department, reason,
                                 queueNumber, priorityStatus)
        WRITE patient record TO file
    END FOR

    totalPatients = emergencyCount + priorityCount + regularCount + invalidCount

    DISPLAY totalPatients, emergencyCount, priorityCount, regularCount, invalidCount
    WRITE summary TO file

    CLOSE file
    DISPLAY "Report saved as patient_queue_report.txt"
END
```
