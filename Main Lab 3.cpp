#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string GetMaleOrFemale();
string GetContractLength();
void GetApartmentChoices(string maleOrFemale, string contractType, int topPrice, int numBaths); 

int main() {
	char exitOrContinueInput;
	string maleVsFemale;
	string contractLength;
	int maxPrice = 0;
	int bathNum = 0;
	string userInput;

	cout << "Welcome to BYU Housing Guide Options!" << endl;
	cout << "(not all incluive, shared rooms only)" << endl;
	cout << "Enter \'Y\' to continue and enter \'X\' to exit." << endl;
	cin >> exitOrContinueInput;
	if (exitOrContinueInput == 'X') {
		return 0;
	}
	else if (exitOrContinueInput == 'Y') {
		maleVsFemale = GetMaleOrFemale();
		if (maleVsFemale == "female") {
			cout << "You selected female." << endl;
			contractLength = GetContractLength();
			if (contractLength == "year") {
				cout << "Year contracts will be shown." << endl;
				cout << "Enter max price (between $300 - $450, enter as an integer): " << endl;
				cin >> maxPrice;
				cout << "To find the total cost for the entire period of the contract enter \"total\"" << endl;
				cout << "To skip find the total enter \"no\"" << endl;
				cin >> userInput;

				
				cout << "Enter \"1\" for one bathroom." << endl;
				cout << "Enter \"2\" for two or more bathrooms." << endl;
				cin >> bathNum;
				GetApartmentChoices(maleVsFemale, contractLength, maxPrice, bathNum);
				return 0;
			}
			else if (contractLength == "f/w") {
				cout << "Fall/winter contracts will be shown." << endl;
				cout << "Enter max price (between $300 - $500, enter as an integer): " << endl;
				cin >> maxPrice;
				cout << "Enter \"1\" for one bathroom." << endl;
				cout << "Enter \"2\" for two or more bathrooms." << endl;
				cin >> bathNum;
				GetApartmentChoices(maleVsFemale, contractLength, maxPrice, bathNum);
				return 0;
			}
			else if (contractLength == "s/s") {
				cout << "Spring/summer contracts will be shown." << endl;
				cout << "Enter max price (between $150 - $300, enter as an integer): " << endl;
				cin >> maxPrice;
				cout << "Enter \"1\" for one bathroom." << endl;
				cout << "Enter \"2\" for two or more bathrooms." << endl;
				cin >> bathNum;
				GetApartmentChoices(maleVsFemale, contractLength, maxPrice, bathNum);
				return 0;
			}
		}
		else if (maleVsFemale == "male") {
			cout << "You selected male." << endl;
			contractLength = GetContractLength();
			if (contractLength == "year") {
				cout << "Year contracts will be shown." << endl;
				cout << "Enter max price (between $300 - $450, enter as an integer): " << endl;
				cin >> maxPrice;
				cout << "Enter \"1\" for one bathroom." << endl;
				cout << "Enter \"2\" for two or more bathrooms." << endl;
				cin >> bathNum;
				GetApartmentChoices(maleVsFemale, contractLength, maxPrice, bathNum);
				return 0;
			}
			else if (contractLength == "f/w") {
				cout << "Fall/winter contracts will be shown." << endl;
				cout << "Enter max price (between $300 - $500, enter as an integer): " << endl;
				cin >> maxPrice;
				cout << "Enter \"1\" for one bathroom." << endl;
				cout << "Enter \"2\" for two or more bathrooms." << endl;
				cin >> bathNum;
				GetApartmentChoices(maleVsFemale, contractLength, maxPrice, bathNum);
				return 0;
			}
			else if (contractLength == "s/s") {
				cout << "Spring/summer contracts will be shown." << endl;
				cout << "Enter max price (between $150 - $300, enter as an integer): " << endl;
				cin >> maxPrice;
				cout << "Enter \"1\" for one bathroom." << endl;
				cout << "Enter \"2\" for two or more bathrooms." << endl;
				cin >> bathNum;
				GetApartmentChoices(maleVsFemale, contractLength, maxPrice, bathNum);
				return 0;
			}
		}
	}
}

string GetMaleOrFemale() {
	string maleOrFemaleInput;
	cout << "Enter \"female\" to view female BYU approved housing." << endl;
	cout << "OR enter \"male\" to view male BYU approved housing." << endl;
	cin >> maleOrFemaleInput;
	if (maleOrFemaleInput == "female") {
		cout << "You selected female." << endl;
	}
	else if (maleOrFemaleInput == "mae") {
		cout << "You selected male." << endl;
	}
	return maleOrFemaleInput;
}

string GetContractLength() {
	string contractInput;
	cout << "Enter \"year\" for a year contract." << endl;
	cout << "Enter \"f/w\" for a fall/winter contract." << endl;
	cout << "Enter \"s/s\" for a spring/summer contract." << endl;
	cin >> contractInput;
	return contractInput;
}

void GetApartmentChoices(string maleOrFemale, string contractType, int topPrice, int numBaths) {
	if (maleOrFemale == "female" && contractType == "year" && topPrice == 300 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "East Point Apt" << endl;
		cout << "Elite Apt." << endl;
	}
	else if (maleOrFemale == "female" && contractType == "year" && topPrice == 300 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Colony Houses" << endl;
	}
	else if (maleOrFemale == "female" && contractType == "year" && topPrice <= 375 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "East Point Apt" << endl;
		cout << "Elite Apt." << endl;
		cout << "Foxwood" << endl;
		cout << "Liberty on Eighth" << endl;
	}
	else if (maleOrFemale == "female" && contractType == "year" && topPrice <= 375 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Colony Houses" << endl;
		cout << "Cinnoman Tree Houses" << endl;
		cout << "Crown Apt." << endl;
	}
	else if (maleOrFemale == "female" && contractType == "year" && topPrice <= 450 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "East Point Apt" << endl;
		cout << "Elite Apt." << endl;
		cout << "Foxwood" << endl;
		cout << "Liberty on Eighth" << endl;
		cout << "Heather Heights" << endl;
	}
	else if (maleOrFemale == "female" && contractType == "year" && topPrice <= 450 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Colony Houses" << endl;
		cout << "Cinnoman Tree Houses" << endl;
		cout << "Crown Apt." << endl;
		cout << "Chatsworth" << endl;
		cout << "Chandell" << endl;
	}
	else if (maleOrFemale == "female" && contractType == "f/w" && topPrice == 300 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Paka's House" << endl;
	}
	else if (maleOrFemale == "female" && contractType == "f/w" && topPrice == 300 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Not Available/Does Not Exist" << endl;
	}
	else if (maleOrFemale == "female" && contractType == "f/w" && topPrice <= 400 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Paka's House" << endl;
		cout << "Linford 1-6" << endl;
	}
	else if (maleOrFemale == "female" && contractType == "f/w" && topPrice <= 400 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Chatham Towne #4" << endl;
		cout << "Connections Apt." << endl;
	}
	else if (maleOrFemale == "female" && contractType == "f/w" && topPrice <= 500 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Paka's House" << endl;
		cout << "Linford 1-6" << endl;
	}
	else if (maleOrFemale == "female" && contractType == "f/w" && topPrice <= 500 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Chatham Towne #4" << endl;
		cout << "Connections Apt." << endl;
		cout << "Crown Apt." << endl;
	}
	else if (maleOrFemale == "female" && contractType == "s/s" && topPrice == 150 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Paka's House" << endl;
	}
	else if (maleOrFemale == "female" && contractType == "s/s" && topPrice == 150 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Park Place" << endl;
	}
	else if (maleOrFemale == "female" && contractType == "s/s" && topPrice <= 200 && numBaths == 1) {
		cout << "Paka's House" << endl;
		cout << "Cinnoman Tree Apt (some)" << endl;
	}
	else if (maleOrFemale == "female" && contractType == "s/s" && topPrice <= 200 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Park Place" << endl;
		cout << "Crown Apt." << endl;
	}
	else if (maleOrFemale == "female" && contractType == "s/s" && topPrice <= 300 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Paka's House" << endl;
		cout << "Cinnoman Tree Apt (some)" << endl;
		cout << "Linford 1-6" << endl;
	}
	else if (maleOrFemale == "female" && contractType == "s/s" && topPrice <= 300 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Park Place" << endl;
		cout << "Crown Apt." << endl;
		cout << "Connections Apt." << endl;
		cout << "Chatham Towne #4" << endl;
	}
	else if (maleOrFemale == "male" && contractType == "year" && topPrice == 300 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "East Point Apt" << endl;
		cout << "Kimball Apt." << endl;
	}
	else if (maleOrFemale == "male" && contractType == "year" && topPrice == 300 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Colony Houses" << endl;
	}
	else if (maleOrFemale == "male" && contractType == "year" && topPrice <= 375 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "East Point Apt" << endl;
		cout << "Kimball Apt." << endl;
		cout << "Center Pointe Apt." << endl;
		cout << "Fairfax" << endl;
		cout << "Foxwood Apt." << endl;
	}
	else if (maleOrFemale == "male" && contractType == "year" && topPrice <= 375 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Colony Houses" << endl;
		cout << "Devere Court" << endl;
		cout << "Goldstone" << endl;
	}
	else if (maleOrFemale == "male" && contractType == "year" && topPrice <= 450 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "East Point Apt" << endl;
		cout << "Kimball Apt." << endl;
		cout << "Center Pointe Apt." << endl;
		cout << "Fairfax" << endl;
		cout << "Foxwood Apt." << endl;
	}
	else if (maleOrFemale == "male" && contractType == "year" && topPrice <= 450 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Colony Houses" << endl;
		cout << "Devere Court" << endl;
		cout << "Goldstone" << endl;
		cout << "Devonshire" << endl;
		cout << "Chatham Towne #4" << endl;
	}
	else if (maleOrFemale == "male" && contractType == "f/w" && topPrice == 300 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Paka's House" << endl;
	}
	else if (maleOrFemale == "male" && contractType == "f/w" && topPrice == 300 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Not Available/Does Not Exist" << endl;
	}
	else if (maleOrFemale == "male" && contractType == "f/w" && topPrice <= 400 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Paka's House" << endl;
		cout << "Jarman Place (down)" << endl;
	}
	else if (maleOrFemale == "male" && contractType == "f/w" && topPrice <= 400 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Not Available/Does Not Exist" << endl;
	}
	else if (maleOrFemale == "male" && contractType == "f/w" && topPrice <= 500 && numBaths == 1) {
		cout << "Paka's House" << endl;
		cout << "Jarman Place (down)" << endl;
	}
	else if (maleOrFemale == "male" && contractType == "f/w" && topPrice <= 500 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Cinnoman Tree Apt." << endl;
	}
	else if (maleOrFemale == "male" && contractType == "s/s" && topPrice == 150 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Not Available/Does Not Exist" << endl;
	}
	else if (maleOrFemale == "male" && contractType == "s/s" && topPrice == 150 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Park Place" << endl;
	}
	else if (maleOrFemale == "male" && contractType == "s/s" && topPrice <= 200 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Kimball Apts." << endl;
		cout << "Colony Apts." << endl;
	}
	else if (maleOrFemale == "male" && contractType == "s/s" && topPrice <= 200 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Park Place" << endl;
	}
	else if (maleOrFemale == "male" && contractType == "s/s" && topPrice <= 300 && numBaths == 1) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Kimball Apts." << endl;
		cout << "Colony Apts." << endl;
		cout << "Jarman Place (down)" << endl;
	}
	else if (maleOrFemale == "male" && contractType == "s/s" && topPrice <= 300 && numBaths == 2) {
		cout << "Apartment(s) that fit this criteria: " << endl;
		cout << "Park Place" << endl;
		cout << "Cinnoman Tree Apts" << endl;
	}
}

