//BCS 230 Assignment 3
//Written by Ian Liotta

#include "stdafx.h"
#include "PatientAccount.h"
#include <iostream>

using namespace std;

void PatientAccount::addCharges(int charges) {
	totalFees += charges;
}
int PatientAccount::getCharges() const {
	return totalFees;
}
void PatientAccount::setDays(int days) {
	daysInHospital = days;
	addCharges(days * dailyRate);
}
int PatientAccount::getDays() const {
	return daysInHospital;
}