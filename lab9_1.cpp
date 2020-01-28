#include<iostream>
using namespace std;

int main(){
	int n=1,count[5] = {}; 
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student ["<<n<<"]:";
		cin >> grade; 
		if(grade=='A'){
		
		n++;
		count[0]++;
		continue;
		
			
		}else if(grade=='B'){
			
		n++;
		count[1]++;
		continue;
		
		}else if(grade=='C'){ 
		
		n++;
		count[2]++;
		continue;
		}
		else if(grade=='D'){ 
	
		n++;
		count[3]++;
		continue;
		}
		else if(grade=='F'){ 
	
		n++;
		count[4]++;
		continue;
		}
		else if(grade=='0'){ 
		
		break;
		}
		else{
			cout<<"Wrong input. Please input again.\n";
			continue;
		}    
	}while(true);
	
	
	cout << "In total "<<n-1<<" ? students.\n";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";	
	cout << "C = " << count[2] <<",";
	cout << "D = " << count[3] <<",";
	cout << "F = " << count[4] <<",";
		return 0;
	}


