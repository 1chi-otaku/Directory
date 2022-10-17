#pragma once
#include <iostream>
using namespace std;
class Directory
{
	string firm_name;
	string owner;
	string phone_number;
	string address;
	string occupation;
public:
	Directory();
	Directory(string firm, string own, string phone, string addr, string occup);
	void Write();
	void Read();

	void Print();



	void SetFirmName(string firm_name);
	void SetOwner(string owner);
	void SetPhone(string phone);
	void SetAddress(string address);
	void SetOccupation(string occupation);

};

