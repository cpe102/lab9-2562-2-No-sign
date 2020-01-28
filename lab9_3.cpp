#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<cmath>
using namespace std;

int i=1;
float sum=0,p2=0;
int main(){
	ifstream ss;
	ss.open("C:\\Users\\Lab_302\\Desktop\\score.txt");
	string val;
	while(getline(ss,val)){
	
		sum=sum+stod(val);
		p2=p2+(stod(val)*stod(val));
		i++;
	
	}
	cout<<"Number of data = "<<i-1<<endl;
	cout<<"Mean = "<<sum/(i-1)<<endl;
	cout<<"Standard deviation = "<<sqrt((p2/(i-1)-(sum/(i-1))*(sum/(i-1))));
	
}
