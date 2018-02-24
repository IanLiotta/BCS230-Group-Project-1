// BCS 230 Assignment 3
// Driver Program
// Edited by Scott K

//Pharmacy, doSurgery, prescribeMeds currently dummied out! - Ian

#include "stdafx.h"
#include "PatientAccount.h"
#include "Surgery.h"
//PLACEHOLDER
//#include "Pharmacy.h"
#include <iostream>
using namespace std;


int main()
{

	//Objects
	PatientAccount patient;
// PLACEHOLDER
	//Pharmacy meds;
	Surgery surgeries;

	//Variables
	int input = 0;
	int medicineOption = 0;
	int stay = 0;

	//Surgery Menu
	do
	{
		cout << "\tSurgery Menu" << endl;
		cout << "----------------------------" << endl;
		cout << "1: Appendectomy" << endl;
		cout << "2: Biopsy" << endl;
		cout << "3: Cataract" << endl;
		cout << "4: Hernia" << endl;
		cout << "5: Thyroid" << endl;
		cout << "\n";
		cout << "What surgey did you have?: ";
		cin >> input;
		cout << patient.getCharges() << endl; //before

		if (input > 0 && input < 6)
			surgeries.doSurgery(patient, input);
			cout << input << endl;
	} while (input <= 0 || input >= 6);
	cout << patient.getCharges() << endl; //after

	//Medication Menu
	do
	{
		cout << "\tMedication Menu" << endl;
		cout << "------------------------" << endl;
		cout << "1: Appendectomy Medicine" << endl;
		cout << "2: Biopsy Medicine" << endl;
		cout << "3: Cataract Medicine" << endl;
		cout << "4: Hernia Medicine" << endl;
		cout << "5: Thyroid Medicine" << endl;
		cout << "\n";
		cout << "0: Exit Menu" << endl;
		cout << "What medicine do you need?: ";
		cin >> medicineOption;

		if (medicineOption > 0 && medicineOption < 6)
// PLACEHOLDER
			//	prescribeMed(patient, medicineOption);
			cout << medicineOption << endl;
	} while (medicineOption != 0);

	//How long the User stayed
	cout << "How long was your stay?: ";
	cin >> stay;
	patient.setDays(stay);

	//Display Total Charge
	cout << "Total charges: " << patient.getCharges() << endl;

	system("pause");
	return 0;
}