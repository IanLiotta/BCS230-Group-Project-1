//BCS 230 Assignment 3
//Written by Ian Liotta

#include "stdafx.h"
#include "PatientAccount.h"
#include <iostream>

using namespace std;

//increase totalFees by the amount charges
void PatientAccount::addCharges(int charges) {
	totalFees += charges;
}

int PatientAccount::getCharges() const {
	return totalFees;
}
//set days in spent in hospital and charge appropriate fees
void PatientAccount::setDays(int days) {
	daysInHospital = days;
	addCharges(days * dailyRate);
}
int PatientAccount::getDays() const {
	return daysInHospital;
}