#include<iostream>
#include<string>
#include<fstream>
using namespace std;
string cheer;
int main(){
	
	ofstream dest("C:\\Users\\Lab_302\\Desktop\\cheerbook_copy.txt");
	dest <<"-------------------- SOTUS ---------------------\n";

	ifstream ss;
	ss.open("C:\\Users\\Lab_302\\Desktop\\cheerbook.txt");
	while(getline(ss,cheer)){	
	
		dest <<cheer<<endl;
		
	}
	
	dest <<"-------------------- SOTUS ---------------------\n";
	dest.close();
	return 0;
}
