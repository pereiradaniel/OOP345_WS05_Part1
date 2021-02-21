#include <iomanip>
#include <sstream>
#include "Book.h"

namespace sdds {
	const string& Book::title() const {
		return b_title;
	}

	const string& Book::country() const {
		return b_country;
	}

	const size_t& Book::year() const {
		return b_year;
	}

	double& Book::price() {
		return b_price;
	}

	Book::Book(const string& strBook) {
		stringstream line(strBook);
		string tempInt{};

		getline(line, b_author, ',');
		b_author.erase(0, b_author.find_first_not_of(' '));
		b_author.erase(b_author.find_last_not_of(' ') + 1);

		getline(line, b_title, ',');
		b_title.erase(0, b_title.find_first_not_of(' '));
		b_title.erase(b_title.find_last_not_of(' ') + 1);

		getline(line, b_country, ',');
		b_country.erase(0, b_country.find_first_not_of(' '));
		b_country.erase(b_country.find_last_not_of(' ') + 1);

		getline(line, tempInt, ',');
		b_price = stod(tempInt);

		getline(line, tempInt, ',');
		b_year = stoi(tempInt);

		getline(line, b_des, '\n');
		b_des.erase(0, b_des.find_first_not_of(' '));
		b_des.erase(b_des.find_last_not_of(' ')+1);
	}

	ostream& operator<<(ostream& os, Book& src) {
		os << setw(20) << src.b_author << " | ";
		os << setw(22) << src.title() << " | ";
		os << setw(5) << src.country() << " | ";
		os << setw(4) << src.year() << " | ";
		os << setw(6) << fixed << setprecision(2) << src.price() << " | ";
		os << src.b_des << endl;
		return os;
	}
}