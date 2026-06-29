// ------------- FILE HEADER -------------
// Author: Luis Hernandez
// Assignment:Assignment 1
// Date: June 28, 2026


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {
  cout << "Hello, World!" << endl;
  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: Weekly Payroll

Program Description: During September, businesses across the United States take time to thank their payroll teams and reflect on all of the successful paydays of the past year. While technology has made it easier than ever for HR teams to pay their employees, crunching the numbers can still be a laborious task for payroll professionals. National Payroll Week serves as a reminder that there are dedicated professionals working hard everyday to ensure we get paid accurately and on time.
First calculate the total gross pay from the hours worked and the hourly rate inputs. 
Then calculate the Federal Tax withholding using the gross pay and the federal withholding rate.
Then calculate the Net Pay by subtracting the federal tax withholding from the gross pay.


Design:
A. INPUT
int employeeID
int employeeHours = 0;
int USDPerHour = 0;
int IntegerWithholdingRate = 0;
 

B. OUTPUT
double grossPayUSD = 0.0;
double federalTaxWithholdingUSD = 0.0;
double netPayUSD = 0.0;

C. CALCULATIONS

grossPayUSD = employeeHours * USDPerHour;
double decimalWithholdingRate = IntegerWithholdingRate / 100.0;
federalTaxWithholdingUSD = grossPayUSD * decimalWithholdingRate;
netPayUSD = grossPayUSD - federalTaxWithholdingUSD;



D. LOGIC and ALGORITHMS
WELCOME "Welcome to my Weekly Payroll Program"

DISPLAY "Enter your employee ID number (numbers only): " 
INPUT employeeID

DISPLAY "Enter number of hours worked (whole numbers): "
INPUT employeeHours

DISPLAY "Enter the hourly rate: "
INPUT USDPerHour

DISPLAY "Enter the federal withholding rate: "
INPUT federalWithholdingRatePercent


HEADING "Your Payroll Summery: "
LABEL "Gross Pay: "
DATA grossPayUSD

LABEL "Federal Tax Withholding: "
DATA federalTaxWithholdingUSD

LABEL "Net Pay: "
DATA netPayUSD

GOODBYE "Thank you for using the Weekly Payroll program"




SAMPLE RUNS
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 34567
Enter number of hours worked (whole numbers): 40
Enter the hourly rate: 17
Enter the federal withholding rate: 15

Your Payroll Summary:
Total Gross Pay: $680
Federal Tax Withholding: $102
Net Pay: $578

Thank you for using my Weekly Payroll program!!


*/
