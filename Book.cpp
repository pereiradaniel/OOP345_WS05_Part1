#include "Book.h"

namespace sdds {
	const string& Book::title() const {
		return _title;
	}

	const string& Book::country() const {
		return _country;
	}

	const size_t& Book::year() const {
		return _year;
	}

	double& Book::price() {
		return _price;
	}

	Book::Book(const string& strBook) {

	}
}