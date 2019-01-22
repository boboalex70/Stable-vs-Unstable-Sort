//Alex Bochenek
//
//Testing stable and unstable sorts with first and last name.
//
//17 January 2019
#include <algorithm>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

struct full_name {
	string fname;
	string lname;
};

bool comparefnames(full_name a, full_name b){
	return (a.fname > b.fname);
}
bool comparelnames(full_name a, full_name b){
	return (a.lname > b.lname);
}

int main(){
	string myfile = "name_list.txt";
	ifstream inf;
	full_name list1 [20];
	full_name list2 [20];
	inf.open(myfile.c_str());
	if (inf.fail()){
		exit(1);
	}
	for (int i = 0; i < 20; i++){
		//while (cin.peek() == '\n')cin.ignore();
		getline(inf, list1[i].fname);
		//while (cin.peek()== '\n')cin.ignore();
		getline(inf, list1[i].lname);
	}
	inf.close();
	inf.open (myfile.c_str());
	if (inf.fail()){
		exit(1);
	}
	for (int i = 0; i < 20; i++){
		//while (cin.peek() == '\n')cin.ignore();
		getline(inf, list2[i].fname);
		//while (cin.peek() == '\n')cin.ignore();
		getline(inf, list2[i].lname);
	}
	inf.close();
	sort(list1, list1 + 20, comparefnames);
	sort(list1, list1 + 20, comparelnames);
	sort(list2, list2 + 20, comparefnames);
	stable_sort(list2, list2 + 20, comparelnames);
	cout << "\n\n";
	for (int i = 19; i >= 0; i--){
		cout << list1[i].fname << " " << list1[i].lname << "\n";
	}
	cout << "\n\n";
	for (int i =19; i >=  0; i--){
		cout << list2[i].fname << " " << list2[i].lname << "\n";
	}

	return 0;
}
