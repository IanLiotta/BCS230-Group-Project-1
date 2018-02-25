#include "PatientAccount.h"
class Pharmacy {
	private:
		double appendectomyMed, biopsyMed, cataractMed, herniaRMed,
			thyroidMed;
	public:
		Pharmacy() {
			biopsyMed = 60;
			cataractMed = 25;
			herniaRMed = 45;
			thyroidMed = 20;
			appendectomyMed = 10;
		}

		void Pharmacy::addCharges(PatientAccount&, int);

	};