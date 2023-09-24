//Enrollment System
//Date Created: May 27, 2021
#include<conio.h> 
#include<windows.h> 
#include<stdlib.h> 
#include<iostream> 
#include<fstream> 
#include<string> 
#include<iomanip> 
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ENTER 13

string admitType, track, firstChoice, secondChoice, lrn, sFirstName, sMiddleName, sLastName, sGender, sDoB, sReligion, sBarangay, sCity;
string sContactNumber, sEmail, fSchool, yAttended, gwa, math, english, science, pFirstName, pMiddleName, pLastName, occupation, rwts;
string pContactNumber;
int registrationFee = 150, amount, change;

char a = 196, b = 217, c = 179, d = 218, e = 192, f = 191, g = 219, h = 178, i = 220, j = 223, k = 167, l = 254, m = 174, n = 175;
char o = 205;

int chosen();
void inputNew();
void displayAll();
void deleteFile();
void quit();

void gotoxy (int x, int y)
    {
         COORD coordinates;     
         coordinates.X = x;     
         coordinates.Y = y;     
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);       
    }

int main()
{	

	char a = 196, b = 217, c = 179, d = 218, e = 192, f = 191, g = 219, h = 178, i = 220, j = 223, k = 167, l = 254, m = 174, n = 175;
	char o = 205;

		system("mode con COLS=700");
    	ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
		   
		system("title Enrollment System");
		HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
		
	
	SetConsoleTextAttribute(color, 14);
		gotoxy(0,0);
		for(int i=2; i<=134; i++){	
	      	cout<<h;
	   	} 
	   	
	   	gotoxy(0,1);
	   	for(int i=1; i<=42; i++){	
	      	cout<<h<<endl;
	   	} 
	   	
	   	for(int i=0; i<=41; i++){	
		   	gotoxy(133,i);	
			cout<<h<<endl;
	   	} 
	   	
	   	for(int i=1; i<=133; i++){	
			gotoxy(i,42);	
	      	cout<<h;
	   	} 
	   	


	gotoxy(7,2);   
		cout<<i<<i<<i<<i<<i<<i<<i<<i<<i;	   
	   
	for(int i=3; i<=8; i++){
	   	gotoxy(8,i);	
      	cout<<g<<endl;
   	}   
	 
	gotoxy(7,9);   
		cout<<j<<j<<j<<j<<j<<j<<j<<j<<j; 
	gotoxy(9,5);   
		cout<<j<<j<<j<<j<<j; 
	gotoxy(15,3);
		cout<<g;
	gotoxy(15,8);
		cout<<g;
	

	gotoxy(19,2);   
		cout<<i<<i<<i;
	
	for(int i=3; i<=8; i++){
		gotoxy(20,i);	
      	cout<<g<<endl;
   	}
	      
	gotoxy(19,9);   
		cout<<j<<j<<j;
	gotoxy(27,2);   
		cout<<i<<i<<i;
	
	for(int i=3; i<=8; i++){
	   	gotoxy(28,i);	
      	cout<<g<<endl;
   	}
   	
	gotoxy(28,9);   
		cout<<i;	
	gotoxy(21,3);
		cout<<i;
	gotoxy(22,4);
		cout<<g;
	gotoxy(23,5);
		cout<<g;
	gotoxy(24,6);
		cout<<g;
	gotoxy(25,7);
		cout<<g;
	gotoxy(26,8);
		cout<<g;
	gotoxy(27,9);
		cout<<j<<j<<j;
	

	gotoxy(33,2);   
		cout<<i<<i<<i<<i<<i<<i<<i<<i;
	   
	for(int i=3; i<=8; i++){
	   	gotoxy(34,i);	
      	cout<<g<<endl;
   	}     
	   
	gotoxy(33,9);   
		cout<<j<<j<<j;   
	gotoxy(41,3);   
		cout<<g;
	gotoxy(41,4);   
		cout<<g;  
	gotoxy(35,5);   
		cout<<j<<j<<j<<j<<g<<j;   
	gotoxy(40,6);
		cout<<g;   
	gotoxy(41,7);
		cout<<g;   
	gotoxy(42,8);
		cout<<g;   
	gotoxy(41,9);
		cout<<j<<j<<j;
	   

	gotoxy(48,2);   
	   	cout<<i<<i<<i<<i<<i<<i;
		
	for(int i=3; i<=8; i++){
	   	gotoxy(47,i);	
      	cout<<g<<endl;
   	}  
   	
   	gotoxy(48,9);   
		cout<<j<<j<<j<<j<<j<<j; 
   	
   	for(int i=3; i<=8; i++){
	   	gotoxy(54,i);	
      	cout<<g<<endl;
   	}  
   	

   	gotoxy(58,2);   
	cout<<i<<i<<i;
	
	for(int i=3; i<=8; i++){
	   	gotoxy(59,i);	
      	cout<<g<<endl;
   	} 
   	
   	gotoxy(58,9);   
		cout<<j<<j<<j<<j<<j<<j<<j;
	gotoxy(64,8);
		cout<<g; 
	   

   	gotoxy(68,2);   
		cout<<i<<i<<i;
	
	for(int i=3; i<=8; i++){
	   	gotoxy(69,i);	
      	cout<<g<<endl;
   	} 
   	
   	gotoxy(68,9);   
		cout<<j<<j<<j<<j<<j<<j<<j;
	gotoxy(74,8);
		cout<<g;
	   

	gotoxy(78,2);   
		cout<<i<<i<<i;
	
	for(int i=3; i<=8; i++){
	   	gotoxy(79,i);	
      	cout<<g<<endl;
   	}
	      
	gotoxy(78,9);   
		cout<<j<<j<<j;
	gotoxy(86,2);   
		cout<<i<<i<<i;
	
	for(int i=3; i<=8; i++){
	   	gotoxy(87,i);	
      	cout<<g<<endl;
   	}
	   
	gotoxy(86,9);   
		cout<<j<<j<<j;   
	gotoxy(80,3);   
		cout<<i;  
	gotoxy(81,4);   
		cout<<j<<i;   
	gotoxy(83,5);   
		cout<<g;    
	gotoxy(84,4);   
		cout<<i<<j;   
	gotoxy(86,3);   
		cout<<i;
	   

	gotoxy(92,2);   
		cout<<i<<i<<i<<i<<i<<i<<i<<i<<i;	   
	   
	for(int i=3; i<=8; i++){
	   	gotoxy(93,i);	
      	cout<<g<<endl;
   	}   
	 
	gotoxy(92,9);   
		cout<<j<<j<<j<<j<<j<<j<<j<<j<<j; 
	gotoxy(94,5);   
		cout<<j<<j<<j<<j<<j; 
	gotoxy(100,3);
		cout<<g;
	gotoxy(100,8);
		cout<<g;
	

	gotoxy(104,2);   
		cout<<i<<i<<i;
	
	for(int i=3; i<=8; i++){
	   	gotoxy(105,i);	
      	cout<<g<<endl;
   	}
	      
	gotoxy(104,9);   
		cout<<j<<j<<j;
	gotoxy(112,2);   
		cout<<i<<i<<i;
	
	for(int i=3; i<=8; i++){
	   	gotoxy(113,i);	
      	cout<<g<<endl;
   	}
   	
	gotoxy(113,9);   
		cout<<i;	
	gotoxy(106,3);
		cout<<i;
	gotoxy(107,4);
		cout<<g;
	gotoxy(108,5);
		cout<<g;
	gotoxy(109,6);
		cout<<g;
	gotoxy(110,7);
		cout<<g;
	gotoxy(111,8);
		cout<<g;
	gotoxy(112,9);
		cout<<j<<j<<j;
	   

	gotoxy(118,2);   
		cout<<i<<i<<i<<i<<i<<i<<i<<i<<i;	
	gotoxy(118,3);
		cout<<g;
	gotoxy(126,3);
		cout<<g;
	gotoxy(121,9);
		cout<<j<<j<<j;
	gotoxy(122,3);
		cout<<g;
	gotoxy(122,4);
		cout<<g;
	gotoxy(122,5);
		cout<<g;
	gotoxy(122,6);
		cout<<g;
	gotoxy(122,7);
		cout<<g;
	gotoxy(122,8);
		cout<<g;
	

	gotoxy(36,11);   
		cout<<i<<i<<i<<i<<i;
	gotoxy(35,12);
		cout<<g;
	gotoxy(35,13);
		cout<<g;
	gotoxy(36,14);   
		cout<<j<<j<<i<<i;
	gotoxy(40,15);
		cout<<g;
	gotoxy(40,16);
		cout<<g;
	gotoxy(40,17);
		cout<<g;
	gotoxy(35,18);   
		cout<<j<<j<<j<<j<<j<<j;
	gotoxy(35,17);
		cout<<g;
	gotoxy(35,12);
		cout<<g;
	

	gotoxy(45,11);   
		cout<<i<<i<<i;	
	gotoxy(46,12);
		cout<<g;
	gotoxy(47,13);
		cout<<j<<i;
	gotoxy(49,14);
		cout<<g;
	gotoxy(50,13);
		cout<<i<<j;
	gotoxy(52,12);
		cout<<g;
	gotoxy(51,11);   
		cout<<i<<i<<i;
	gotoxy(49,15);
		cout<<g;
	gotoxy(49,16);
		cout<<g;
	gotoxy(49,17);
		cout<<g;
	gotoxy(48,18);
		cout<<j<<j<<j;
	

	gotoxy(58,11);   
		cout<<i<<i<<i<<i<<i;
	gotoxy(57,12);
		cout<<g;
	gotoxy(57,13);
		cout<<g;
	gotoxy(58,14);   
		cout<<j<<j<<i<<i;
	gotoxy(62,15);
		cout<<g;
	gotoxy(62,16);
		cout<<g;
	gotoxy(62,17);
		cout<<g;
	gotoxy(57,18);   
		cout<<j<<j<<j<<j<<j<<j;
	gotoxy(57,17);
		cout<<g;
	gotoxy(57,12);
		cout<<g;
	

	gotoxy(67,11);   
		cout<<i<<i<<i<<i<<i<<i<<i<<i<<i;	
	gotoxy(67,12);
		cout<<g;
	gotoxy(75,12);
		cout<<g;
	gotoxy(70,18);
		cout<<j<<j<<j;
	gotoxy(71,12);
		cout<<g;
	gotoxy(71,13);
		cout<<g;
	gotoxy(71,14);
		cout<<g;
	gotoxy(71,15);
		cout<<g;
	gotoxy(71,16);
		cout<<g;
	gotoxy(71,17);
		cout<<g;
	

	gotoxy(79,11);   
		cout<<i<<i<<i<<i<<i<<i<<i<<i<<i;	   
	   
	for(int i=12; i<=17; i++){
	   	gotoxy(80,i);	
      	cout<<g<<endl;
   	}   
	 
	gotoxy(79,18);   
		cout<<j<<j<<j<<j<<j<<j<<j<<j<<j; 
	gotoxy(81,14);   
		cout<<j<<j<<j<<j<<j; 
	gotoxy(87,12);
		cout<<g;
	gotoxy(87,17);
		cout<<g;
	   

	gotoxy(91,11);   
		cout<<i<<i<<i;
	
	for(int i=12; i<=17; i++){
	   	gotoxy(92,i);	
      	cout<<g<<endl;
   	}
	      
	gotoxy(91,18);   
		cout<<j<<j<<j;
	gotoxy(99,11);   
		cout<<i<<i<<i;
	
	for(int i=12; i<=17; i++){
	   	gotoxy(100,i);	
      	cout<<g<<endl;
   	}
	   
	gotoxy(99,18);   
		cout<<j<<j<<j;      	
   	gotoxy(93,12);   
		cout<<i;  
	gotoxy(94,13);   
		cout<<j<<i;   
	gotoxy(96,14);   
		cout<<g;    
	gotoxy(97,13);   
		cout<<i<<j;   
	gotoxy(99,12);   
		cout<<i;


	SetConsoleTextAttribute(color, 15);
		gotoxy(52,20);
		cout<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o;
		gotoxy(57, 21);
	SetConsoleTextAttribute(color, 6);
		cout<<"W  E  L  C  O  M  E";
	SetConsoleTextAttribute(color, 15);
		gotoxy(52,22);
		cout<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o<<o;
	
	SetConsoleTextAttribute(color, 14);	 	
   		gotoxy(60,24);
   		cout<<m;
		gotoxy(62,24);
   		cout<<"DIRECTION";
   		gotoxy(72,24);
   		cout<<n;
   	SetConsoleTextAttribute(color, 8);
		gotoxy(46, 26);
		cout<<l;  	
   		gotoxy(48, 26);
   		cout<<"PRESS UP KEY TO PROCEED IN REGISTRATION";
   		gotoxy(54, 27);
		cout<<l;  
   		gotoxy(56, 27);
   		cout<<"PRESS DOWN KEY TO EXIT";

   	SetConsoleTextAttribute(color, 7);
		gotoxy(62,30);
		cout<<"ENROLL NOW";
		gotoxy(61,32);
		cout<<" E  X  I  T";
		
	int home=0;
	bool proceed=true;	
	int choice=0;
	
	while(choice!=1){
		switch((home=getch()))
		{
			case KEY_UP:
				proceed=true;
				SetConsoleTextAttribute(color, 6);
				gotoxy(62,30);
				cout<<"ENROLL NOW";
				
				SetConsoleTextAttribute(color, 15);
				gotoxy(61,32);
				cout<<" E  X  I  T";
				break;
			case KEY_DOWN:
				proceed=false;
				SetConsoleTextAttribute(color, 15);
			
				gotoxy(62,30);
				cout<<"ENROLL NOW";
				
				SetConsoleTextAttribute(color, 6);
				gotoxy(61,32);
				cout<<" E  X  I  T";
				break;
			case ENTER:
				choice=1;
				if(proceed == true)
				{
					gotoxy(58, 36);
					SetConsoleTextAttribute(color, 6);
					cout<<"L  O  A  D  I  N  G";
					
					for(int i=42; i<=90; i++){
					gotoxy(i,37);
 					SetConsoleTextAttribute(color, 6);	
      				cout<<a;
   					}
   					
   					gotoxy(42,38);
   					cout<<c; 
					gotoxy(42,37);
   					cout<<d; 
					gotoxy(42,39);
   					cout<<e;  					
   					
   					
   					for(int i=43; i<=90; i++){
					gotoxy(i,39);
 					SetConsoleTextAttribute(color, 6);	
      				cout<<a;
   					}  
   					
   					gotoxy(90,38);
   					cout<<c; 
   					gotoxy(90,37);
   					cout<<f;
					gotoxy(90,39);
   					cout<<b;   
   					
   					gotoxy(43,38);
   					for(int i=0; i<47; i++){	
   					Sleep(30);
      				cout<<g;
   					} 
   					Sleep(100);
					system("cls");
					chosen();
				}
				else if (proceed == false)
				{
					gotoxy(1,42);
					Beep(1000,1000);  
					return 0;	
				}	
			break;		
		}
	}  	
}


int chosen(){
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
		

	SetConsoleTextAttribute(color, 14);
	gotoxy(43,3);
	for(int i=1; i<=50; i++){ 
      	cout<<j;
   	} 
	
	gotoxy(43,40);
	for(int i=1; i<=50; i++){ 
      	cout<<j;
   	} 
	
	
	for(int i=3; i<=39; i++){ 
	gotoxy(43,i);	
    cout<<g<<endl;
   	}
	
	for(int i=3; i<=39; i++){ 
	   	gotoxy(92,i);	
      	cout<<g<<endl;
   	}
	      	
	    int option;
	    SetConsoleTextAttribute(color, 6);
	    gotoxy(53,9);
	    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    gotoxy(53,12);
	    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    SetConsoleTextAttribute(color, 14);
	    gotoxy(59,10);
	    cout << "E  X  P  L  O  R  E";
	    gotoxy(60,11);
	    cout << "ENROLLMENT SYSTEM";
	    SetConsoleTextAttribute(color, 6);
	    gotoxy(54,16);
		cout << "[1] Proceed now to enrollment";
		gotoxy(58,17);
		cout << "form";
		gotoxy(54,19);
		cout << "[2] Display database of the"; 
		gotoxy(58,20);
		cout << "on-going enrollment";
		gotoxy(54, 22);
		cout << "[3] Clear all the information"; 
		gotoxy(58,23);
		cout << "about enrollment";
		gotoxy(54, 25);
		cout << "[4] Exit Program";
		gotoxy(59, 29);
		cout << "Enter Your Choice: " << endl << endl;
		

		for(int i=54; i<=81; i++){  
			gotoxy(i,30);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   		}
   					
   		gotoxy(54,31);
   			cout<<c; 
		gotoxy(54,30); 
   			cout<<d; 
		gotoxy(54,32);
   			cout<<e;  					
   					
   		for(int i=55; i<=81; i++){ 
			gotoxy(i,32);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   		}  
   					
   		gotoxy(81,31);
   			cout<<c; 
   		gotoxy(81,30);
   			cout<<f;    
		gotoxy(81,32);
   			cout<<b; 
   		SetConsoleTextAttribute(color, 14);
		gotoxy(67,31); 
   		cin >> option;  
		
		
		switch (option){
       	case 1:
            inputNew();
            break;
        case 2:
        	displayAll();
        	break;
        case 3:
        	deleteFile();
        	break;
        case 4: 
        	quit();
        	break;
        default:
        	gotoxy(53,33);
        	cout << "You entered an invalid choice!";
        	Sleep(3000);
        	system("cls");
        	chosen();
        cin.get();
    	}
gotoxy(4,42);
return 0;
}	


void inputNew(){
	ofstream enrollment("Enrollment System Project.txt", ios::app);
	system("cls");
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute(color, 14);
	gotoxy(27,3);
	for(int i=1; i<=80; i++){ 
      	cout<<j;
   	} 
	
	gotoxy(27,40);
	for(int i=1; i<=80; i++){ 
      	cout<<j;
   	} 
	
	
	for(int i=3; i<=39; i++){ 
	gotoxy(27,i);	
    cout<<g<<endl;
   	}
	
	for(int i=3; i<=39; i++){ 
	   	gotoxy(106,i);	
      	cout<<g<<endl;
   	}
   	

   	SetConsoleTextAttribute(color, 6);
	gotoxy(45,9);
   	cout << " Admit Type: ";
   	gotoxy(38,11);
   	cout << "(New or Balik-Aral)";
   	for(int i=59; i<=93; i++){ 
			gotoxy(i,9);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   		}		
   	gotoxy(59,10);
   		cout<<c; 
	gotoxy(59,9); 
   		cout<<d; 
	gotoxy(59,11);
   		cout<<e;  					
   	for(int i=60; i<=93; i++){ 
		gotoxy(i,11);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}  		
   	gotoxy(93,10);
   		cout<<c; 
   	gotoxy(93,9);
   		cout<<f;    
	gotoxy(93,11);
   		cout<<b;  
   		

   	gotoxy(43,15);
   		cout << " Chosen Track:";
	for(int i=59; i<=93; i++){ 
		gotoxy(i,14);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(59,15);
   		cout<<c; 
	gotoxy(59,14); 
   		cout<<d; 
	gotoxy(59,16);
   		cout<<e;  					
   	for(int i=60; i<=93; i++){ 
			gotoxy(i,16);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(93,15);
   			cout<<c; 
   	gotoxy(93,14);
   		cout<<f;    
	gotoxy(93,16);
   		cout<<b;  
   		

	gotoxy(43,19);
		cout << "Chosen Strand:";  
	gotoxy(43,22);
		cout << "  First Choice"; 
	for(int i=59; i<=93; i++){ 
		gotoxy(i,21);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(59,22);
   		cout<<c; 
	gotoxy(59,21); 
   		cout<<d; 
	gotoxy(59,23);
   		cout<<e;  					
   	for(int i=60; i<=93; i++){ 
			gotoxy(i,23);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(93,22);
   			cout<<c; 
   	gotoxy(93,21);
   		cout<<f;    
	gotoxy(93,23);
   		cout<<b;  
   	
	gotoxy(43,27);
		cout << " Second Choice"; 
	for(int i=59; i<=93; i++){ 
		gotoxy(i,26);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(59,27);
   		cout<<c; 
	gotoxy(59,26); 
   		cout<<d; 
	gotoxy(59,28);
   		cout<<e;  					
   	for(int i=60; i<=93; i++){ 
			gotoxy(i,28);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(93,27);
   			cout<<c; 
   	gotoxy(93,26);
   		cout<<f;    
	gotoxy(93,28);
   		cout<<b;  
   			

	gotoxy(52,32);
		cout << " LRN:";
	for(int i=59; i<=93; i++){ 
		gotoxy(i,31);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(59,32);
   		cout<<c; 
	gotoxy(59,31); 
   		cout<<d; 
	gotoxy(59,33);
   		cout<<e;  					
   	for(int i=60; i<=93; i++){ 
			gotoxy(i,33);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(93,32);
   			cout<<c; 
   	gotoxy(93,31);
   		cout<<f;   
	gotoxy(93,33);
   		cout<<b;      			
   			

   	SetConsoleTextAttribute(color, 14);
	gotoxy(61,10); 
		cin.ignore();
   		getline(cin,admitType); 
   	gotoxy(61,15);
   		getline(cin,track);
   	gotoxy(61,22);
   		getline(cin,firstChoice);
   	gotoxy(61,27);
   		getline(cin,secondChoice);
   	gotoxy(61,32);
   		getline(cin,lrn);
   	
   	
   	system("cls");
   	gotoxy(5,3);
	for(int i=1; i<=124; i++){ 
      	cout<<j;
   	} 
	
	gotoxy(5,53);
	for(int i=1; i<=124; i++){ 
      	cout<<j;
   	} 
	
	
	for(int i=3; i<=52; i++){ 
	gotoxy(5,i);	
    cout<<g<<endl;
   	}
	
	for(int i=3; i<=52; i++){ 
	   	gotoxy(128,i);	
      	cout<<g<<endl;
   	}
   	
   	

   	SetConsoleTextAttribute(color, 8);
   	gotoxy(9,5);
   		cout<<l;
   	gotoxy(11,5);
   		cout<<"STUDENT'S INFORMATION";
   	

	SetConsoleTextAttribute(color, 6);
   	gotoxy(20,8);
		cout << "First Name:";
	for(int i=20; i<=42; i++){ 
		gotoxy(i,9);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(20,10);
   		cout<<c; 
	gotoxy(20,9); 
   		cout<<d; 
	gotoxy(20,11);
   		cout<<e;  					
   	for(int i=21; i<=42; i++){ 
			gotoxy(i,11);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(42,10);
   			cout<<c; 
   	gotoxy(42,9);
   		cout<<f;    
	gotoxy(42,11);
   		cout<<b;    
		   

  	SetConsoleTextAttribute(color, 6);
   	gotoxy(55,8);
		cout << "Middle Name:";
	for(int i=55; i<=77; i++){ 
		gotoxy(i,9);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(55,10);
   		cout<<c; 
	gotoxy(55,9); 
   		cout<<d; 
	gotoxy(55,11);
   		cout<<e;  					
   	for(int i=56; i<=77; i++){ 
			gotoxy(i,11);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(77,10);
   			cout<<c; 
   	gotoxy(77,9);
   		cout<<f;   
	gotoxy(77,11);
   		cout<<b;    
   		

  	SetConsoleTextAttribute(color, 6);
   	gotoxy(90,8);	
		cout << "Last Name:";
	for(int i=90; i<=112; i++){ 
		gotoxy(i,9);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(90,10);
   		cout<<c; 
	gotoxy(90,9); 
   		cout<<d; 
	gotoxy(90,11);
   		cout<<e;  					
   	for(int i=91; i<=112; i++){ 
			gotoxy(i,11);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(112,10);
   			cout<<c; 
   	gotoxy(112,9);
   		cout<<f;    
	gotoxy(112,11);
   		cout<<b;    
   		

  	SetConsoleTextAttribute(color, 6);
   	gotoxy(20,14);
		cout << "Gender:";
	for(int i=20; i<=42; i++){ 
		gotoxy(i,15);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(20,16);
   		cout<<c; 
	gotoxy(20,15); 
   		cout<<d; 
	gotoxy(20,17);
   		cout<<e;  					
   	for(int i=21; i<=42; i++){ 
			gotoxy(i,17);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(42,16);
   		cout<<c; 
   	gotoxy(42,15);
   		cout<<f;    
	gotoxy(42,17);
   		cout<<b;   
   		

	SetConsoleTextAttribute(color, 6);
   	gotoxy(55,14);
		cout << "Date of Birth:";
	for(int i=55; i<=77; i++){ 
		gotoxy(i,15);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(55,16);
   		cout<<c; 
	gotoxy(55,15); 
   		cout<<d; 
	gotoxy(55,17);
   		cout<<e;  					
   	for(int i=56; i<=77; i++){ 
			gotoxy(i,17);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(77,16);
   			cout<<c; 
   	gotoxy(77,15);
   		cout<<f;   
	gotoxy(77,17);
   		cout<<b;    
   		

  	SetConsoleTextAttribute(color, 6);
   	gotoxy(90,14);
		cout << "Religion:";
	for(int i=90; i<=112; i++){ 
		gotoxy(i,15);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(90,16);
   		cout<<c; 
	gotoxy(90,15); 
   		cout<<d; 
	gotoxy(90,17);
   		cout<<e;  					
   	for(int i=91; i<=112; i++){ 
			gotoxy(i,17);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(112,16);
   			cout<<c; 
   	gotoxy(112,15);
   		cout<<f;    
	gotoxy(112,17);
   		cout<<b;    


	SetConsoleTextAttribute(color, 6);
   	gotoxy(20,20);
		cout << "Barangay:";
	for(int i=20; i<=42; i++){  
		gotoxy(i,21);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(20,22);
   		cout<<c; 
	gotoxy(20,21); 
   		cout<<d; 
	gotoxy(20,23);
   		cout<<e;  					
   	for(int i=21; i<=42; i++){ 
			gotoxy(i,23);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(42,22);
   		cout<<c; 
   	gotoxy(42,21);
   		cout<<f;    
	gotoxy(42,23);
   		cout<<b;   
   		

SetConsoleTextAttribute(color, 6);
   	gotoxy(55,20);
		cout << "City/Municipality:";
	for(int i=55; i<=77; i++){ 
		gotoxy(i,21);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(55,22);
   		cout<<c; 
	gotoxy(55,21); 
   		cout<<d; 
	gotoxy(55,23);
   		cout<<e;  					
   	for(int i=56; i<=77; i++){ 
			gotoxy(i,23);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(77,22);
   			cout<<c; 
   	gotoxy(77,21);
   		cout<<f;   
	gotoxy(77,23);
   		cout<<b;    
		   
 		
   	SetConsoleTextAttribute(color, 8);
   	gotoxy(9,28);
   	cout<<l;
   	gotoxy(11,28);
   	cout<<"STUDENT'S CONTACT INFORMATION";
   	

	SetConsoleTextAttribute(color, 6);
   	gotoxy(20,31);
		cout << "Contact Number:";
	for(int i=20; i<=42; i++){ 
		gotoxy(i,32);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(20,33);
   		cout<<c; 
	gotoxy(20,32); 
   		cout<<d; 
	gotoxy(20,34);
   		cout<<e;  					
   	for(int i=21; i<=42; i++){ 
			gotoxy(i,34);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(42,33);
   			cout<<c; 
   	gotoxy(42,32);
   		cout<<f;    
	gotoxy(42,34);
   		cout<<b;   
   		

	SetConsoleTextAttribute(color, 6);
   	gotoxy(55,31);
		cout << "Active Email Address:";
	for(int i=55; i<=87; i++){  
		gotoxy(i,32);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(55,33);
   		cout<<c; 
	gotoxy(55,32); 
   		cout<<d; 
	gotoxy(55,34);
   		cout<<e;  					
   	for(int i=56; i<=87; i++){ 
			gotoxy(i,34);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(87,33);
   		cout<<c; 
   	gotoxy(87,32);
   		cout<<f;    
	gotoxy(87,34);
   		cout<<b;    	   
		   
  		
   	SetConsoleTextAttribute(color, 8);
   	gotoxy(9,39);
   	cout<<l;
   	gotoxy(11,39);
   	cout<<"STUDENT'S ACADEMIC INFORMATION";		
   	

	SetConsoleTextAttribute(color, 6);
   	gotoxy(20,42);
		cout << "Name of Former School:";
	for(int i=20; i<=57; i++){ 
		gotoxy(i,43);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(20,44);
   		cout<<c; 
	gotoxy(20,43); 
   		cout<<d; 
	gotoxy(20,45);
   		cout<<e;  					
   	for(int i=21; i<=57; i++){ 
			gotoxy(i,45);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(57,44);
   			cout<<c; 
   	gotoxy(57,43);
   		cout<<f;    
	gotoxy(57,45);
   		cout<<b;   
   		

	SetConsoleTextAttribute(color, 6);
   	gotoxy(69,42);
		cout << "Year Attended:";
	for(int i=69; i<=90; i++){ 
		gotoxy(i,43);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(69,44);
   		cout<<c; 
	gotoxy(69,43); 
   		cout<<d; 
	gotoxy(69,45);
   		cout<<e;  					
   	for(int i=70; i<=90; i++){ 
			gotoxy(i,45);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(90,44);
   		cout<<c; 
   	gotoxy(90,43);
   		cout<<f;    
	gotoxy(90,45);
   		cout<<b;    
		   

	SetConsoleTextAttribute(color, 6);
   	gotoxy(20,48);
		cout << "GWA:";
	for(int i=20; i<=33; i++){ 
		gotoxy(i,49);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(20,50);
   		cout<<c; 
	gotoxy(20,49); 
   		cout<<d; 
	gotoxy(20,51);
   		cout<<e;  					
   	for(int i=21; i<=33; i++){ 
			gotoxy(i,51);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(33,50);
   			cout<<c; 
   	gotoxy(33,49);
   		cout<<f;    
	gotoxy(33,51);
   		cout<<b;   	   
   		

	SetConsoleTextAttribute(color, 6);
   	gotoxy(42,48);
		cout << "Math:";
	for(int i=42; i<=55; i++){ 
		gotoxy(i,49);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(42,50);
   		cout<<c; 
	gotoxy(42,49); 
   		cout<<d; 
	gotoxy(42,51);
   		cout<<e;  					
   	for(int i=43; i<=55; i++){ 
			gotoxy(i,51);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(55,50);
   		cout<<c; 
   	gotoxy(55,49);
   		cout<<f;    
	gotoxy(55,51);
   		cout<<b;   	  
		   

	SetConsoleTextAttribute(color, 6);
   	gotoxy(64,48);
		cout << "English:";
	for(int i=64; i<=77; i++){ 
		gotoxy(i,49);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(64,50);
   		cout<<c; 
	gotoxy(64,49); 
   		cout<<d; 
	gotoxy(64,51);
   		cout<<e;  					
   	for(int i=65; i<=77; i++){ 
			gotoxy(i,51);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(77,50);
   			cout<<c; 
   	gotoxy(77,49);
   		cout<<f;    
	gotoxy(77,51);
   		cout<<b;   
   		

	SetConsoleTextAttribute(color, 6);
   	gotoxy(86,48);
		cout << "Science:";
	for(int i=86; i<=99; i++){ 
		gotoxy(i,49);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(86,50);
   		cout<<c; 
	gotoxy(86,49); 
   		cout<<d; 
	gotoxy(86,51);
   		cout<<e;  					
   	for(int i=87; i<=99; i++){ 
			gotoxy(i,51);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(99,50);
   			cout<<c; 
   	gotoxy(99,49);
   		cout<<f;   
	gotoxy(99,51);
   		cout<<b;   
   	


   	SetConsoleTextAttribute(color, 14);
   	gotoxy(22,10);
   		getline(cin,sFirstName);
   	gotoxy(57,10);
   		getline(cin,sMiddleName);
   	gotoxy(92,10);
   		getline(cin,sLastName);
   	gotoxy(22,16);
   		getline(cin,sGender);
   	gotoxy(57,16);
   		getline(cin,sDoB);
   	gotoxy(92,16);
   		getline(cin,sReligion);
   	gotoxy(22,22);
   		getline(cin,sBarangay);
	gotoxy(57,22);
   		getline(cin,sCity);
	gotoxy(22,33);
   		getline(cin,sContactNumber);
   	gotoxy(57,33);
   		getline(cin,sEmail);
   	gotoxy(22,44);
   		getline(cin,fSchool);
   	gotoxy(71,44);
   		getline(cin,yAttended);
   	gotoxy(22,50);
   		getline(cin,gwa);
   	gotoxy(44,50);
   		getline(cin,math);
   	gotoxy(66,50);
   		getline(cin,english);
   	gotoxy(88,50);
   		getline(cin,science);
			  

   		
system("cls");


	gotoxy(5,6);
	for(int i=1; i<=124; i++){ 
      	cout<<j;
   	} 
	
	gotoxy(5,34);
	for(int i=1; i<=124; i++){ 
      	cout<<j;
   	} 
	
	
	for(int i=6; i<=33; i++){ 
		gotoxy(5,i);	
    	cout<<g<<endl;
   	}
	
	for(int i=6; i<=33; i++){ 
	   	gotoxy(128,i);	
      	cout<<g<<endl;
   	}	
   	

   	SetConsoleTextAttribute(color, 8);
   	gotoxy(9,14);
   	cout<<l;
   	gotoxy(11,14);
   	cout<<"PARENT'S / GUARDIAN'S INFORMATION";
   	
   	

   	SetConsoleTextAttribute(color, 6);
   	gotoxy(20,17);
		cout << "First Name:";
	for(int i=20; i<=42; i++){ 
		gotoxy(i,18);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(20,19);
   		cout<<c; 
	gotoxy(20,18); 
   		cout<<d; 
	gotoxy(20,20);
   		cout<<e;  					
   	for(int i=21; i<=42; i++){ 
			gotoxy(i,20);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(42,19);
   			cout<<c; 
   	gotoxy(42,18);
   		cout<<f;   
	gotoxy(42,20);
   		cout<<b;    


	SetConsoleTextAttribute(color, 6);
   	gotoxy(55,17);
		cout << "Middle Name:";
	for(int i=55; i<=77; i++){ 
		gotoxy(i,18);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(55,19);
   		cout<<c; 
	gotoxy(55,18); 
   		cout<<d; 
	gotoxy(55,20);
   		cout<<e;  					
   	for(int i=56; i<=77; i++){ 
			gotoxy(i,20);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(77,19);
   			cout<<c; 
   	gotoxy(77,18);
   		cout<<f;    
	gotoxy(77,20);
   		cout<<b;    
   		

  	SetConsoleTextAttribute(color, 6);
   	gotoxy(90,17);
		cout << "Last Name:";
	for(int i=90; i<=112; i++){
		gotoxy(i,18);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(90,19);
   		cout<<c; 
	gotoxy(90,18); 
   		cout<<d; 
	gotoxy(90,20);
   		cout<<e;  					
   	for(int i=91; i<=112; i++){ 
			gotoxy(i,20);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(112,19);
   			cout<<c; 
   	gotoxy(112,18);
   		cout<<f;    
	gotoxy(112,20);
   		cout<<b;    
   		

  	SetConsoleTextAttribute(color, 6);
   	gotoxy(20,23);
		cout << "Occupation:";
	for(int i=20; i<=42; i++){ 
		gotoxy(i,24);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(20,25);
   		cout<<c; 
	gotoxy(20,24); 
   		cout<<d; 
	gotoxy(20,26);
   		cout<<e;  					
   	for(int i=21; i<=42; i++){ 
			gotoxy(i,26);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(42,25);
   			cout<<c; 
   	gotoxy(42,24);
   		cout<<f;    
	gotoxy(42,26);
   		cout<<b;   
   		

	SetConsoleTextAttribute(color, 6);
   	gotoxy(55,23);
		cout << "Relationship with the Student:";
	for(int i=55; i<=77; i++){  
		gotoxy(i,24);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(55,25);
   		cout<<c; 
	gotoxy(55,24); 
   		cout<<d; 
	gotoxy(55,26);
   		cout<<e;  					
   	for(int i=56; i<=77; i++){  
			gotoxy(i,26);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(77,25);
   			cout<<c; 
   	gotoxy(77,24);
   		cout<<f;    
	gotoxy(77,26);
   		cout<<b;    
   		

  	SetConsoleTextAttribute(color, 6);
   	gotoxy(90,23);
		cout << "Contact Number:";
	for(int i=90; i<=112; i++){ 
		gotoxy(i,24);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(90,25);
   		cout<<c; 
	gotoxy(90,24); 
   		cout<<d; 
	gotoxy(90,26);
   		cout<<e;  					
   	for(int i=91; i<=112; i++){ 
			gotoxy(i,26);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  		
   	gotoxy(112,25);
   			cout<<c; 
   	gotoxy(112,24);
   		cout<<f;    
	gotoxy(112,26);
   		cout<<b; 
		   

	SetConsoleTextAttribute(color, 14);
   	gotoxy(22,19);
   		getline(cin,pFirstName);
   	gotoxy(57,19);
   		getline(cin,pMiddleName);
   	gotoxy(92,19);
   		getline(cin,pLastName);
   	gotoxy(22,25);
   		getline(cin,occupation);
   	gotoxy(57,25);
   		getline(cin,rwts);
   	gotoxy(92,25);
   		getline(cin,pContactNumber);
	system("cls");
	
	enrollment <<left <<setw(15)<<admitType <<setw(20)<<track <<setw(35)<<firstChoice <<setw(33)<<secondChoice <<setw(21)<<lrn 
			   <<setw(26)<<sFirstName <<setw(25)<<sMiddleName <<setw(20)<<sLastName
			   <<setw(13)<<sGender <<setw(16)<<sDoB <<setw(22)<<sReligion 
			   <<setw(22)<<sBarangay <<setw(23)<<sCity 
			   <<setw(23)<<sContactNumber <<setw(33)<<sEmail 
			   <<setw(40)<<fSchool <<setw(16)<<yAttended 
			   <<setw(11)<<gwa <<setw(10)<<math <<setw(12)<<english <<setw(22)<<science 
			   <<setw(37)<<pFirstName <<setw(36)<<pMiddleName <<setw(26)<<pLastName 
			   <<setw(29)<<occupation <<setw(36)<<rwts <<pContactNumber <<endl; 
   	enrollment.close();
	

FEE:
	gotoxy(5,6);
	for(int i=1; i<=124; i++){ 
      	cout<<j;
   	} 
	
	gotoxy(5,34);
	for(int i=1; i<=124; i++){ 
      	cout<<j;
   	} 
	
	
	for(int i=6; i<=33; i++){ 
		gotoxy(5,i);	
    	cout<<g<<endl;
   	}
	
	for(int i=6; i<=33; i++){ 
	   	gotoxy(128,i);	
      	cout<<g<<endl;
   	}	

   	SetConsoleTextAttribute(color, 8);
   	gotoxy(14,9);
   		cout<<l;
   	gotoxy(19,9);
   		cout<<"REGISTRATION FEE NOTICE";
   	

   	SetConsoleTextAttribute(color, 6);
   	gotoxy(51,13);
		cout << "Registration Fee:";
	gotoxy(76,13); 
		cout << registrationFee;
	for(int i=72; i<=82; i++){ 
		gotoxy(i,12);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(71,13);
   		cout<<c; 
	gotoxy(71,12); 
   		cout<<d; 
	gotoxy(71,14);
   		cout<<e;  					
   	for(int i=72; i<=82; i++){ 
			gotoxy(i,14);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  	
	gotoxy(83,13);
   		cout<<c; 
   	gotoxy(83,12);
   		cout<<f;    
	gotoxy(83,14);
   		cout<<b;  	
   		

	SetConsoleTextAttribute(color, 6);
   	gotoxy(42,18);
		cout << "Enter the amount you have:";
	for(int i=72; i<=85; i++){ 
		gotoxy(i,17);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(71,18);
   		cout<<c; 
	gotoxy(71,17); 
   		cout<<d; 
	gotoxy(71,19);
   		cout<<e;  					
   	for(int i=72; i<=85; i++){ 
			gotoxy(i,19);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  	
	gotoxy(86,18);
   			cout<<c; 
   	gotoxy(86,17);
   		cout<<f;    
	gotoxy(86,19);
   		cout<<b;  	
   		

	SetConsoleTextAttribute(color, 6);
   	gotoxy(56,23);
		cout << "Your change:";
	for(int i=72; i<=85; i++){ 
		gotoxy(i,22);
 		SetConsoleTextAttribute(color, 6);	
      	cout<<a;
   	}		
   	gotoxy(71,23);
   		cout<<c; 
	gotoxy(71,22); 
   		cout<<d; 
	gotoxy(71,24);
   		cout<<e;  					
   	for(int i=72; i<=85; i++){ 
			gotoxy(i,24);
 			SetConsoleTextAttribute(color, 6);	
      		cout<<a;
   	}  	
	gotoxy(86,23);
   			cout<<c; 
   	gotoxy(86,22);
   		cout<<f;    
	gotoxy(86,24);
   		cout<<b;  	

		


   	SetConsoleTextAttribute(color, 14);
   	gotoxy(73,18);
   		cin>>amount;
   		
   	if(amount>=registrationFee){
   		change = amount - registrationFee;
   		gotoxy(73,23);
   		cout << change;
   		SetConsoleTextAttribute(color, 6);
		gotoxy(40,28);
			cout<<"The confirmation of your enrollment will be sent through your";
		gotoxy(36,29);
			cout<<"contact number "<<sContactNumber<<" and email address "<<sEmail<<".";
		gotoxy(65,30);
			cout<<"Thank you!";
	
		gotoxy(5,36);
		system("pause");
		system("cls");
		chosen();
	}
	else if(amount<=registrationFee){
		gotoxy(73,23);
		cout<<"Invalid!";
		Sleep(3000);
		system("cls");
		goto FEE;
	}
	else Sleep(10000);
		 system("cls");
		 chosen(); 	
}


void displayAll(){
	system("cls");
	ifstream enrollment("Enrollment System Project.txt");
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 14);
	
	string display[27] = {"Admit Type", "Track", "First Choice Strand", "Second Choice Strand", "LRN",
						  "Student's First Name", "Student's Middle Name", "Student's Last Name",
						  "Gender", "Date of Birth", "Religion", "Barangay", "City/Municipality",
						  "Student's Contact Number", "E-mail", "Name of Former School",
						  "Year Attended", "GWA", "Math", "English", "Science", 
						  "Guardian's/Parent's First Name", "Guardian's/Parent's Middle Name",
						  "Guardian's/Parent's Last Name", "Occupation", "Relationship with the Student",
						  "Guardian's/Parent's Contact Number"};
						  
	gotoxy(56,2);
		cout<<"ENROLLMENT SYSTEM DATABASE";

	gotoxy(0,6);
		cout<<display[0];
	gotoxy(20,6);
		cout<<display[1];
	gotoxy(40,6);
		cout<<display[2];
	gotoxy(74,6);
		cout<<display[3];
	gotoxy(107,6);
		cout<<display[4];
	gotoxy(120,6);
		cout<<display[5];
	gotoxy(144,6);
		cout<<display[6];
	gotoxy(171,6);
		cout<<display[7];
	gotoxy(195,6);
		cout<<display[8];
	gotoxy(206,6);
		cout<<display[9];
	gotoxy(228,6);
		cout<<display[10];
	gotoxy(248,6);
		cout<<display[11];
	gotoxy(263,6);
		cout<<display[12];
	gotoxy(285,6);
		cout<<display[13];
	gotoxy(324,6);
		cout<<display[14];
	gotoxy(353,6);
		cout<<display[15];
	gotoxy(385,6);
		cout<<display[16];
	gotoxy(404,6);
		cout<<display[17];
	gotoxy(413,6);
		cout<<display[18];
	gotoxy(422,6);
		cout<<display[19];
	gotoxy(434,6);
		cout<<display[20];
	gotoxy(448,6);
		cout<<display[21];
	gotoxy(484,6);
		cout<<display[22];
	gotoxy(521,6);
		cout<<display[23];
	gotoxy(558,6);
		cout<<display[24];
	gotoxy(575,6);
		cout<<display[25];
	gotoxy(610,6);
		cout<<display[26];
		cout<<endl<<endl;
	
	
	while(getline(enrollment,admitType)){
		cout<<'\n' <<admitType;
	}
	
	while(getline(enrollment,track)){
		cout<<track;
	}
	
	while(getline(enrollment,firstChoice)){
		cout<<firstChoice;
	}

	while(getline(enrollment,secondChoice)){
		cout<<secondChoice;
	}
	
	while(getline(enrollment,lrn)){
		cout<<lrn;
	}
	
	while(getline(enrollment,sFirstName)){
		cout<<sFirstName;
	}
	
	while(getline(enrollment,sMiddleName)){
		cout<<sMiddleName;
	}
	
	while(getline(enrollment,sLastName)){
		cout<<sLastName;
	}
	
	while(getline(enrollment,sGender)){
		cout<<sGender;
	}
	
	while(getline(enrollment,sDoB)){
		cout<<sDoB;
	}
	
	while(getline(enrollment,sReligion)){
		cout<<sReligion;
	}
	
	while(getline(enrollment,sBarangay)){
		cout<<sBarangay;
	}
	
	while(getline(enrollment,sCity)){
		cout<<sCity;
	}
	
	while(getline(enrollment,sContactNumber)){
		cout<<sContactNumber;
	}
	
	while(getline(enrollment,sEmail)){
		cout<<sEmail;
	}
	
	while(getline(enrollment,fSchool)){
		cout<<fSchool;
	}
	
	while(getline(enrollment,yAttended)){
		cout<<yAttended;
	}
	
	while(getline(enrollment,gwa)){
		cout<<gwa;
	}
	
	while(getline(enrollment,math)){
		cout<<math;
	}
	
	while(getline(enrollment,english)){
		cout<<english;
	}
	
	while(getline(enrollment,science)){
		cout<<science;
	}
	
	while(getline(enrollment,pFirstName)){
		cout<<pFirstName;
	}
	
	while(getline(enrollment,pMiddleName)){
		cout<<pMiddleName;
	}
	
	while(getline(enrollment,pLastName)){
		cout<<pLastName;
	}
	
	while(getline(enrollment,occupation)){
		cout<<occupation;
	}
	
	while(getline(enrollment,rwts)){
		cout<<rwts;
	}
	
	while(getline(enrollment,pContactNumber)){
		cout<<pContactNumber;
	}

	gotoxy(2,40);	
	system("pause");
	system("cls");
	chosen();
}


void deleteFile(){
	system("cls");
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	string decision;
	
	gotoxy(42,8);
	for(int i=1; i<=52; i++){ 
      	cout<<j;
   	} 
	
	gotoxy(42,34);
	for(int i=1; i<=52; i++){ 
      	cout<<j;
   	} 
	
	
	for(int i=8; i<=33; i++){ 
	gotoxy(42,i);	
    cout<<g<<endl;
   	}
	
	for(int i=8; i<=33; i++){ 
	   	gotoxy(93,i);	
      	cout<<g<<endl;
   	}
	
	gotoxy(53,13);
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	gotoxy(53,15);
	    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	SetConsoleTextAttribute(color, 6);
	gotoxy(55,14);
	    cout << "DELETE ALL THE DATA FILES?";
	
    SetConsoleTextAttribute(color, 14);	 	
   		gotoxy(62,20);
   		cout<<m;
		gotoxy(64,20);
   		cout<<"DIRECTION";
   		gotoxy(74,20);
   		cout<<n;
   	SetConsoleTextAttribute(color, 8);
		gotoxy(57, 23);
		cout<<l;  	
   		gotoxy(59, 23);
   		cout<<"PRESS LEFT KEY FOR YES";
   		gotoxy(57, 24);
		cout<<l;  
   		gotoxy(59, 24);
   		cout<<"PRESS RIGHT KEY FOR NO";

   	SetConsoleTextAttribute(color, 7);
		gotoxy(63,28);
		cout<<"YES";
		gotoxy(73,28);
		cout<<"NO";
    
    int home=0;
	bool proceed=true;	
	int choice=0;
	
	while(choice!=1){
		switch((home=getch()))
		{
			case KEY_LEFT:
				proceed=true;
				SetConsoleTextAttribute(color, 6);
				gotoxy(63,28);
				cout<<"YES";
				
				SetConsoleTextAttribute(color, 15);
				gotoxy(73,28);
				cout<<"NO";
				break;
			case KEY_RIGHT:
				proceed=false;
				SetConsoleTextAttribute(color, 15);
			
				gotoxy(63,28);
				cout<<"YES";
				
				SetConsoleTextAttribute(color, 6);
				gotoxy(73,28);
				cout<<"NO";
				break;
			case ENTER:
				choice=1;
				if(proceed == true)
				{
					ofstream enrollment("Enrollment System Project.txt");
					SetConsoleTextAttribute(color, 14);
     				gotoxy(59,31); 
					cout<< "SUCCESSFULLY DELETED!";
     				Sleep(5000);
     				system("cls");
     				enrollment.close();
					chosen();
				}
				else if(proceed == false)
				{
					system("cls");
					chosen();
				}
			break;		
		}
	}  	
}  	

void quit(){
	system ("CLS");
	char g = 219, h = 178, i = 220, j = 223;

	gotoxy(35,4);   
		cout<<i<<i<<i<<i<<i<<i<<i<<i<<i;	
	gotoxy(35,5);
		cout<<g;
	gotoxy(43,5);
		cout<<g;
	gotoxy(38,11);
		cout<<j<<j<<j;
	gotoxy(39,5);
		cout<<g;
	gotoxy(39,6);
		cout<<g;
	gotoxy(39,7);
		cout<<g;
	gotoxy(39,8);
		cout<<g;
	gotoxy(39,9);
		cout<<g;
	gotoxy(39,10);
		cout<<g;
		

	gotoxy(48,4);
		cout<<i<<i<<i;
	gotoxy(49,5);
		cout<<g;
	gotoxy(49,6);
		cout<<g;
	gotoxy(49,7);
		cout<<g;
	gotoxy(49,8);
		cout<<g;
	gotoxy(49,9);
		cout<<g;
	gotoxy(49,10);
		cout<<g;
	gotoxy(48,11);
		cout<<j<<j<<j;
	gotoxy(50,7);   
		cout<<i<<i<<i<<i<<i<<i;
	gotoxy(54,4);
		cout<<i<<i<<i;
	gotoxy(55,5);
		cout<<g;
	gotoxy(55,6);
		cout<<g;
	gotoxy(55,7);
		cout<<g;
	gotoxy(55,8);
		cout<<g;
	gotoxy(55,9);
		cout<<g;
	gotoxy(55,10);
		cout<<g;
	gotoxy(54,11);
		cout<<j<<j<<j;
		

	gotoxy(63,4);
		cout<<i<<i<<i<<i<<i<<i;
	gotoxy(62,5);
		cout<<g;
	gotoxy(62,6);
		cout<<g;
	gotoxy(62,7);
		cout<<g;
	gotoxy(62,8);
		cout<<g;
	gotoxy(62,9);
		cout<<g;
	gotoxy(62,10);
		cout<<g;
	gotoxy(62,11);
		cout<<j;
	gotoxy(63,7);
		cout<<i<<i<<i<<i<<i<<i;
	gotoxy(69,5);
		cout<<g;
	gotoxy(69,6);
		cout<<g;
	gotoxy(69,7);
		cout<<g;
	gotoxy(69,8);
		cout<<g;
	gotoxy(69,9);
		cout<<g;
	gotoxy(69,10);
		cout<<g;
	gotoxy(69,11);
		cout<<j;
			

	gotoxy(75,4);   
		cout<<i<<i<<i;
	
	for(int i=5; i<=10; i++){
	   	gotoxy(76,i);	
      	cout<<g<<endl;
   	}
	      
	gotoxy(75,11);   
		cout<<j<<j<<j;
	gotoxy(83,4);   
		cout<<i<<i<<i;
	
	for(int i=5; i<=10; i++){
	   	gotoxy(84,i);	
      	cout<<g<<endl;
   	}
   	
	gotoxy(77,5);
		cout<<i;
	gotoxy(78,6);
		cout<<g;
	gotoxy(79,7);
		cout<<g;
	gotoxy(80,8);
		cout<<g;
	gotoxy(81,9);
		cout<<g;
	gotoxy(82,10);
		cout<<g;
	gotoxy(83,11);
		cout<<j<<j<<j;
		

	gotoxy(90,4);
		cout<<i<<i<<i;
	for(int i=5; i<=10; i++){
	   	gotoxy(91,i);	
      	cout<<g<<endl;
   	}
	gotoxy(90,11);
		cout<<j<<j<<j;
		
	gotoxy(98,4);
		cout<<i<<i<<i;
	gotoxy(99,5);
		cout<<j;
	gotoxy(98,5);
		cout<<i;
	gotoxy(97,6);
		cout<<j;
	gotoxy(96,6);
		cout<<i;
	gotoxy(95,7);
		cout<<j;
	gotoxy(94,7);
		cout<<i;
	gotoxy(93,8);
		cout<<j;
	gotoxy(92,8);
		cout<<i;
	gotoxy(99,10);
		cout<<i;
	gotoxy(98,10);
		cout<<j;
	gotoxy(97,9);
		cout<<i;
	gotoxy(96,9);
		cout<<j;
	gotoxy(95,8);
		cout<<i;
	gotoxy(94,7);
		cout<<i;
	gotoxy(94,8);
		cout<<j;
	gotoxy(98,11);
		cout<<j<<j<<j;
		

	gotoxy(48,14);   
		cout<<i<<i<<i;
	gotoxy(54,14);   
		cout<<i<<i<<i;
	gotoxy(49,15);
		cout<<j;
	gotoxy(50,15);
		cout<<i;
	gotoxy(51,16);
		cout<<j;
	gotoxy(52,16);
		cout<<i;
	gotoxy(55,15);
		cout<<j;
	gotoxy(54,15);
		cout<<i;
	gotoxy(53,16);
		cout<<j;
	gotoxy(52,17);
		cout<<g;
	gotoxy(52,18);
		cout<<g;
	gotoxy(52,19);
		cout<<g;
	gotoxy(52,20);
		cout<<g;
	gotoxy(51,21);
		cout<<j<<j<<j;
		

	gotoxy(63,14);   
	   	cout<<i<<i<<i<<i<<i<<i;
		
	for(int i=15; i<=20; i++){
	   	gotoxy(62,i);	
      	cout<<g<<endl;
   	}  
   	
   	gotoxy(63,21);   
		cout<<j<<j<<j<<j<<j<<j; 
   	
   	for(int i=15; i<=20; i++){
	   	gotoxy(69,i);	
      	cout<<g<<endl;
   	}  
   	

	gotoxy(75,14);   
		cout<<i<<i<<i;
	gotoxy(83,14);   
		cout<<i<<i<<i;
	for(int i=15; i<=20; i++){
	   	gotoxy(76,i);	
      	cout<<g<<endl;
   	}
   	for(int i=15; i<=20; i++){
	   	gotoxy(84,i);	
      	cout<<g<<endl;
   	}
   	gotoxy(77,21);
   	cout<<j<<j<<j<<j<<j<<j<<j;
			
gotoxy(5,39);
exit(0);
}
