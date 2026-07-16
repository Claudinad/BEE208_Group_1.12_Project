# Algorithm — Hospital Patient Queue Management System

This algorithm describes the logical steps used to collect patient details,
assign queue numbers, classify priority and produce the final queue report.

1. **Start** the programme.
2. **Display** the system title and welcome message.
3. **Ask** the user to enter the number of patients to be registered.
4. **Open** the output file `patient_queue_report.txt` for writing, and write
   the report title into it.
5. **Initialise** counters: `emergencyCount = 0`, `priorityCount = 0`,
   `regularCount = 0`, `invalidCount = 0`.
6. **Repeat** the following steps for each patient, from patient 1 to the
   total number of patients entered:
   1. Assign a queue number equal to the current patient's position in the
      registration order.
   2. Collect the patient's ID, full name, age, department and reason for
      visit.
   3. Validate the age entered — if it is not a whole number, ask the user
      to re-enter it.
   4. Check whether the record is valid:
      - If the patient ID is empty **or** the age is less than 0, mark the
        record as **Invalid Record**.
   5. If the record is valid, classify the priority using the decision
      guide:
      - If the visit reason indicates Emergency, Accident, Severe Pain or
        Breathing Difficulty → **Emergency**.
      - Else if the age is 60 or above, or below 5 → **Priority**.
      - Else → **Regular**.
   6. Update the matching category counter.
   7. Display the patient's full record on the screen.
   8. Save the patient's full record to `patient_queue_report.txt`.
7. **After** all patients have been processed, display the summary:
   total patients, and the count for each of Emergency, Priority, Regular
   and Invalid Record (if any).
8. **Save** the summary to `patient_queue_report.txt`.
9. **Close** the output file.
10. **Display** a confirmation message that the report was saved.
11. **End** the programme.
