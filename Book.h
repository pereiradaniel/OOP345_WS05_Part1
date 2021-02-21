#ifndef SDDS_BOOK_H
#define SDDS_BOOK_H

#include <string>
using namespace std;

namespace sdds {
	class Book {
		string b_author{};
		string b_title{};
		string b_country{};
		size_t b_year{};
		double b_price{};
		string b_des{};
	public:
		Book() = default;
		const string& title() const;
		const string& country() const;
		const size_t& year() const;
		double& price();
		Book(const string& strBook);
		friend ostream& operator<<(ostream& os, Book& src);
	};
}
#endif
