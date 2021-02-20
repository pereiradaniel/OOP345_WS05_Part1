#ifndef SDDS_BOOK_H
#define SDDS_BOOK_H

#include <string>
using namespace std;

namespace sdds {
	class Book {
		string _author{};
		string _title{};
		string _country{};
		size_t _year{};
		double _price{};
		string _des{};

	public:
		Book() = default;	// A default constructor.
		const string& title() const;	// a query that returns the title of the book
		const string& country() const;	// a query that returns the publication country
		const size_t& year() const;	// a query that returns the publication year
		double& price();	// a function that returns the price **by reference
		Book(const string& strBook);	// a constructor that receives a reference to an unmodifiable string that contains information about the book
	};
}

#endif
