#include<bits/stdc++.h>
#define Sameer_Gupta

using namespace std;

int main()
{
	int flag=1;
	char cm,cs;
	ifstream master("output.txt");
	ifstream slave("your_output.txt");
	
	while(master)
	{
		master.get(cm);
		slave.get(cs);
		if(cm!=cs)
		{
			flag=0;
			break;
		}
	}
	
	if(flag) cout <<"Congratulations !!! ..Correct Answer\n\n";
	else cout <<"Wrong answer\n\n";
	
	system("pause");

	return 0;
}

