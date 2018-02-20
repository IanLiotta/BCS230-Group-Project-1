//BCS 230 Assignment 3
//Written by Ian Liotta

class PatientAccount {
private:
	int totalFees;
	int const dailyRate = 2000;
	int daysInHospital;
public:
	PatientAccount() {
		totalFees = 0;
		daysInHospital = 0;
	}

	void PatientAccount::addCharges(int);
	int PatientAccount::getCharges() const;
	void PatientAccount::setDays(int);
	int PatientAccount::getDays() const;
};
