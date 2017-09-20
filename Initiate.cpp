#include<bits/stdc++.h>
#include<fstream>
#define Sameer_Gupta

using namespace std;

void paste_it()
{
	char ch;
	char str[1000],str1[100];
	char pat[]={"int main()"}; // full since we will compare the whole line
	int flag;
	
	ifstream ifile ("file.cpp");
	ofstream ofile ("Workspace.cpp");

	flag=0;
	while(ifile)
	{
		if(flag)
		{
			ifstream wfile ("shell.rle");
			while(wfile){
					wfile.getline(str,100);
					ofile<<str<<endl;				
			}
			flag=0;
			wfile.close();		
		}

		ifile.getline(str,1000);
		
		if(!strcmp(str,pat)){
				flag=1;
				cout<<"Workspace has been Initiated \n\nStart working in Workspace.cpp, placed in this directory.\n\n";
				cout<<"Step 1 : Compile and Run Workspace.cpp, after final changes are made.\n";
				cout<<"Step 2 : Close the popup command prompt window , Run Checker for final check.\n";
				cout<<"Repeat Step 1 and 2 to continue checking process\n\n";
		}
		
		ofile<<str<<endl;			
	
    }
    
    ofile<<"\n\n//---------------end of program -----------------//\n";
    ofile<<"}";
    
    ifile.close();
    ofile.close();    
}

int main()
{
	paste_it();
	system("pause");
	return 0;
}
                                                                                                                                                          
