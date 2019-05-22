#include<iostream>

using namespace std;	   	
  
int main()
{	  	  	  	  	  	  	  	  	  	  	  	  	  	  	    	  	  	  	  	  	  	  	 

  int choice;  	
  int num1;  	
  int num2;  	
  char cont;  	
  	do  	
  	  	{  	
  	  	cout << endl << endl << "MENU: " << endl;
		cout << "	1. Add" << endl;
		cout << "	2. Subtract" << endl;
		cout << "	3. Multiply" << endl;
		cout << "	4. Divide" << endl;
		cout << "	5. Modulus" << endl << endl;  	
  	  	cout << "Enter your choice: ";
    	cin >> choice;

  	  	cout << "Enter two numbers: ";
    		cin >> num1 >> num2;

  	  	if(choice==1)
		{  	
          	cout << "Result: " << num1+num2;
        }
        
  	  	else if (choice==2)
  	  	{
       	    cout << "Result: " << num1-num2;
        }
  	  	else if (choice==3)
  	  	{
            cout << "Result: " << num1*num2;
    	}
  	  	else if (choice==4)
  		{
            cout << "Result: " << num1/num2;
    	}
  	  	else if (choice==5)
  	  	{
			cout << "Result: " << num1%num2;	
  	  	}  	
  	  	else
  	  	{
			cout << "Error";	
  	  	}                    	  	
  	  	cout << endl << endl << "Continue? (Enter y if yes): ";  	
    		cin >> cont;

  	  	}while(cont=='y'||cont=='Y');  	
  	  	  system("PAUSE");  	
  	  	  
  	  	  return 0;  	
  	}
