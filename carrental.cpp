#include<iostream>
#include<iomanip>
#include<conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <direct.h>
#include<vector>
#include<fstream>

using namespace std;
class Car
{
    public:
          string  username;
         string dlno;
         string carno;
         void userinput()
         {
            cout<<" Enter Your Name "<<endl;
            cin>>username;
            cout<<" Enter Driving Licence Number "<<endl;
            cin>>dlno;
            cout<<" Enter the Car Registration Number "<<endl;
            cin>>carno;
            system ("CLS");
         }
            virtual void spec()=0;
            virtual void comprent()=0;
            virtual void display()=0;
};



class hyundai : public Car
{
    public : int day,rent,total;
    
            void spec()
            {
                cout<<" Name of the  Car : Hyndai "<<endl;
                cout<<" MAX Speed  : 120 kmph"<<endl;
                cout<<" Range : 4500 miles "<<endl;
            }
            void comprent()
            {
                cout<<"\n\n";
                cout<<" Enter the Number of days you wish to rent the car "<<endl;
                cin>>day;
                rent = 500 ;
                total =day*500;
                system ("CLS");

            }
            void display()
            {
                 cout<<" Calculating rent\n Please wait..."<<endl;
                  sleep(2);
                  system("CLS") ;
                cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
                cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
                cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<username<<" |"<<endl;
                cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<"Hyundai"<<" |"<<endl;
                cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<carno<<" |"<<endl;
                cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<day<<" |"<<endl;
                cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<total<<" |"<<endl;
                cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "\t\t	 ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<total<<" |"<<endl;
                cout << "\t\t	 ________________________________________________________"<<endl;
                cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
                cout << "\t\t	 require an authorised signture #"<<endl;
                cout <<" "<<endl;
                cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
                cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
                cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
         }
};
class Benz : public Car
{
    public : int day,rent,total;
            void spec()
            {
                cout<<" Name of the  Car : Benz "<<endl;
                cout<<" MAX Speed  : 150 kmph"<<endl;
                cout<<" Range : 10000 miles "<<endl;
            }
            void comprent()
            {
                cout<<"\n\n";
                cout<<" Enter the Number of days you wish to rent the car "<<endl;
                cin>>day;
                rent =  5000 ;
                total =day*5000;
                system ("CLS");

            }
            void display()
            {
                  cout<<" Calculating rent\n Please wait..."<<endl;
                  sleep(2);
                   system("CLS") ;
                cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
                cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
                cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<username<<" |"<<endl;
                cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<"Benz"<<" |"<<endl;
                cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<carno<<" |"<<endl;
                cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<day<<" |"<<endl;
                cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<total<<" |"<<endl;
                cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "\t\t	 ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<total<<" |"<<endl;
                cout << "\t\t	 ________________________________________________________"<<endl;
                cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
                cout << "\t\t	 require an authorised signture #"<<endl;
                cout <<" "<<endl;
                cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
                cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
                cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
         }
};
class Honda : public Car
{
    public : int day,rent,total;
            void spec()
            {
                cout<<" Name of the  Car : Honda "<<endl;
                cout<<" MAX Speed  : 100kmph"<<endl;
                cout<<" Range : 5000 miles "<<endl;
            }
            void comprent()
            {
                cout<<"\n\n";
                cout<<" Enter the Number of days you wish to rent the car "<<endl;
                cin>>day;
                rent =  1000 ;
                total =day*1000;
                system ("CLS");

            }
            void display()
            {
                  cout<<" Calculating rent\n Please wait..."<<endl;
                  sleep(2);
                   system("CLS") ;
                cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
                cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
                cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<username<<" |"<<endl;
                cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<"Honda"<<" |"<<endl;
                cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<carno<<" |"<<endl;
                cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<day<<" |"<<endl;
                cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<total<<" |"<<endl;
                cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "\t\t	 ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<total<<" |"<<endl;
                cout << "\t\t	 ________________________________________________________"<<endl;
                cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
                cout << "\t\t	 require an authorised signture #"<<endl;
                cout <<" "<<endl;
                cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
                cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
                cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
         }
};
// login

int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t\t\t------------------------------\n\n";	
   cout << "\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "rvce"){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}


//welcome
class welcome //welcome class
{
	public:
	int welcum()
	{
        ifstream inW("welcome.txt"); //displaying welcome ASCII image text on output screen 

        if(!inW) 
        {
          cout << "Cannot open input file.\n";
         }
  char str[1000];
    while(inW) 
    {
    inW.getline(str, 1000); 
    if(inW) cout << str << endl;
    }
  inW.close();
  sleep(1);
  cout<<"\nStarting the program please wait....."<<endl;
  sleep(1);
  cout<<"\nloading up files....."<<endl;
  sleep(1); //function which waits for (n) seconds
  system ("CLS"); //cleares screen
}

};
int main()
{
    welcome w;
    w.welcum();
    login();
    cout<<" Cars Available & Rent  "<<endl;
    vector<vector<string>> cars = {
            { " Hyundai ", " 500/day"},
            { " Benz ", " 5000/day"},
            { " Honda ", " 1000/day"},
    
    };
    
     int choice;
     Car *c;
     cout<<"\n1:Hyundai\n2:Benz\n3:Honda"<<endl;
     cout<<"\n\n";
     cout<<" Enter Code of the car you wish to rent "<<endl;
     cin>>choice;
     system ("CLS");
     
     switch(choice)
     {
        case 1: 
                {hyundai h;
                c=&h;
                c->userinput();
     c->spec();
     c->comprent();
     c->display();
     
                }
                break;
        case 2: 
              {Benz b;
                c=&b;
                c->userinput();
     c->spec();
     c->comprent();
     c->display();
                
                }
                break;
        case 3:
            {
                Honda ho;
                c=&ho;
                c->userinput();
     c->spec();
     c->comprent();
     c->display();
            }
            break;
        
     }
     system("PAUSE");
    
    system ("CLS");
    
     ifstream inf("thanks.txt");

  
  char str[300];

  while(inf) 
  {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	
      
     return 0;

     


}
