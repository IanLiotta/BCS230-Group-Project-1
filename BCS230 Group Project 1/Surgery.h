/*
BCS 230 Assignment 3
Author: Anthony Jaghab
*/

class Surgery {
private:
	double appendectomyRate, biopsyRate, cataractRate, herniaRate, thyroidRate;
public:
	Surgery() {
		appendectomyRate = 3.00;
		biopsyRate = 3.00;
		cataractRate = 3.00;	
		herniaRate = 3.00;
		thyroidRate = 3.00;
	}

	// mutator and accessor prototypes for the following member variables

	double Surgery::getAppendectomyRate() const;
	void Surgery::setAppendectomyRate(double);
	double Surgery::getBiopsyRate() const;
	void Surgery::setBiopsyRate(double);
	double Surgery::getCataractRate() const;
	void Surgery::setCataractRate(double);
	double Surgery::getHerniaRate() const;
	void Surgery::setHerniaRate(double);
	double Surgery::getThyroidRate() const;
	void Surgery::setThyroidRate(double);
	
};
