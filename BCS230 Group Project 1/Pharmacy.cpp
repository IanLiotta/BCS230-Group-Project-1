#include <iostream>
#include "stdafx.h"
#include "Pharmacy.h"

void Pharmacy::addCharges(PatientAccount& patient, int input)
{
	switch (input) {
	case 1:
		patient.addCharges(appendectomyMed);
		break;
	case 2:
		patient.addCharges(biopsyMed);
		break;
	case 3:
		patient.addCharges(cataractMed);
		break;
	case 4:
		patient.addCharges(herniaRMed);
		break;
	case 5:
		patient.addCharges(thyroidMed);
		break;
	}
}