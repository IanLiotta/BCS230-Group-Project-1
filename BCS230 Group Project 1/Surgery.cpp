/*
BCS 230 Assignment 3
Author: Anthony Jaghab
*/

#include "stdafx.h"
#include "Surgery.h"
#include <iostream>

using namespace std;

double Surgery::getAppendectomyRate() const {
	return appendectomyRate;
}

void Surgery::setAppendectomyRate(double rate) {
	appendectomyRate = rate;
}

double Surgery::getBiopsyRate() const {
	return biopsyRate;
}

void Surgery::setBiopsyRate(double rate) {
	biopsyRate = rate;
}

double Surgery::getCataractRate() const {
	return cataractRate;
}

void Surgery::setCataractRate(double rate) {
	cataractRate = rate;
}

double Surgery::getHerniaRate() const {
	return herniaRate;
}

void Surgery::setHerniaRate(double rate) {
	herniaRate = rate;
}

double Surgery::getThyroidRate() const {
	return thyroidRate;
}

void Surgery::setThyroidRate(double rate) {
	thyroidRate = rate;
}

void Surgery::doSurgery(PatientAccount& p, int i) {
	enum TheSurgeries { Appendectomy = 1 , Biopsy, Cataract, Hernia, Thyroid }; // creating an enumerated data type called TheSurgeries ranging from 1-5
	//TheSurgeries s; // creating a local instance of the enumerated datatype

	// checks to see which input was 
	
	if (i == Appendectomy)
		p.addCharges(getAppendectomyRate());
	else if (i == Biopsy)
		p.addCharges(getBiopsyRate());
	else if (i == Cataract)
		p.addCharges(getCataractRate());
	else if (i == Hernia)
		p.addCharges(getHerniaRate());
	else if (i == Thyroid)
		p.addCharges(getThyroidRate());
}