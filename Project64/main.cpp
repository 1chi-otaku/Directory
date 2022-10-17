#include <iostream>
#include "fstream"
#include "Directory.h"
using namespace std;


void ReadAll();
void Search(string subject);



int main() {

	Directory obj1("SEGA", "Richard", "+4983921231", "Shinagawa", "Games");
	Directory obj2("Microsoft", "Richard", "+4983921231", "Alabama", "Software");
	Directory obj3("IBM", "Tom", "+3825911231", "Los-Angeles", "Hardware");

	cout << "Write: " << endl;
	obj1.Write();
	obj2.Write();
	obj3.Write();
	
	ReadAll();

	cout << "Search:" << endl;
	Search("SEGA");
	Search("Tom");
	Search("Software");

}


void ReadAll()
{
	string firm, owner, ph, add, occup;
	Directory temp;
	ifstream r("Directory.txt");
	while (!r.eof())
	{
		r >> firm >> owner >> ph >> add >> occup;
		temp.SetFirmName(firm);
		temp.SetOwner(owner);
		temp.SetOccupation(occup);
		temp.SetPhone(ph);
		temp.SetAddress(add);

		temp.Print();
	}
	r.close();
}

void Search(string subject)
{
	string firm, owner, ph, add, occup;
	Directory temp;
	ifstream r("Directory.txt");
	while (!r.eof())
	{
		r >> firm >> owner >> ph >> add >> occup;
		temp.SetFirmName(firm);
		temp.SetOwner(owner);
		temp.SetOccupation(occup);
		temp.SetPhone(ph);
		temp.SetAddress(add);

		if (firm == subject || owner == subject || ph == subject || add == subject || occup == subject) {
			temp.Print();
			r.close();
			return;
		}
	
	}
	r.close();
	cout << "Not found.." << endl;
}
