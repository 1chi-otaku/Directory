#include "Directory.h"
#include <fstream>
Directory::Directory()
{
	firm_name = "N/A";
	owner = "N/A";
	phone_number = "N/A";
	address = "N/A";
	occupation = "N/A";
}
Directory::Directory(string firm, string own, string phone, string addr, string occup)
{
	firm_name = firm;
	owner = own;
	phone_number = phone;
	address = addr;
	occupation = occup;
}

void Directory::Write()
{
	ofstream write("Directory.txt", ios::app);
	write << endl << firm_name << endl <<
		owner << endl <<
		phone_number << endl <<
		address << endl <<
		occupation;
	write.close();
}

void Directory::Read()
{
	Directory temp;
	ifstream read("Directory.txt");
	if (read) {
		read >> temp.firm_name >> temp.owner >> temp.phone_number >> temp.address >> temp.occupation;
		cout << "Firm name - " << temp.firm_name << endl;
		cout << "Owner - " << temp.owner << endl;
		cout << "Phone number - " << temp.phone_number << endl;
		cout << "Address - " << temp.address << endl;
		cout << "Occupation - " << temp.occupation << endl;
	}
	else {
		cout << "The file cannot be opened..." << endl;
	}
	
	read.close();
}

void Directory::Print()
{
	cout << "Firm name - " << firm_name << endl;
	cout << "Owner - " << owner << endl;
	cout << "Phone number - " << phone_number << endl;
	cout << "Address - " << address << endl;
	cout << "Occupation - " << occupation << endl << endl;
}



void Directory::SetFirmName(string firm_name)
{
	this->firm_name = firm_name;
}

void Directory::SetOwner(string owner)
{
	this->owner = owner;
}

void Directory::SetPhone(string phone)
{
	this->phone_number = phone;
}

void Directory::SetAddress(string address)
{
	this->address = address;
}

void Directory::SetOccupation(string occupation)
{
	this->occupation = occupation;
}
