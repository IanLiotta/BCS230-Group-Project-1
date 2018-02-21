//BCS 230 Assignment 3
//Written by Ian Liotta

class PatientAccount {
private:
	double totalFees;
	double const dailyRate = 2000.0;
	int daysInHospital;
public:
	PatientAccount() {
		totalFees = 0.0;
		daysInHospital = 0;
	}

	void PatientAccount::addCharges(double);
	double PatientAccount::getCharges() const;
	void PatientAccount::setDays(int);
	int PatientAccount::getDays() const;
};
