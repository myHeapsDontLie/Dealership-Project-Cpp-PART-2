#pragma once

#include <iostream>
#include <fstream>

class Address {
private:
	char* city;
	char* street;
	unsigned houseNum;

public:
	Address();
	Address(std::ifstream& inFile);
	Address(const char* city, const char* street, unsigned houseNum);
	Address(const Address& other);
	Address(Address&& other) noexcept;
	const Address& operator=(const Address& other);
	const Address& operator=(Address&& other) noexcept;
	~Address();


	friend std::istream& operator>>(std::istream& in, Address& address);
	friend std::ostream& operator<<(std::ostream& out, const Address& address);

	void setStreet(const char* street);
	void setCity(const char* street);
	const char* getCity() const { return city; }
	const char* getStreet() const { return street; }
	unsigned getHouseNum() const { return houseNum; }

};