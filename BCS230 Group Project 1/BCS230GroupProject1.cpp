// BCS 230 Assignment 3
// Driver Program
//Edited by Scott K
//Zeyad elgawish

#include "stdafx.h"
#include "PatientAccount.h"
#include <iostream>
using namespace std;

int main()
{
	PatientAccount patient;

	//test functions of PatientAccount
	patient.setDays(1);
	cout << patient.getDays() << endl;
	patient.addCharges(12345);
	cout << patient.getCharges() << endl;
    return 0;
}

