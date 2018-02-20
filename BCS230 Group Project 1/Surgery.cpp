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