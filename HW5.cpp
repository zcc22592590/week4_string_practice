#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2, str3;
	string result;
	while(cin >> str1 >> str2 >> str3)
	{
		int j;
		result = str1 + str2 + str3;
		
		/*
			for(j=0; j<=3; j++)
			{
				if(str1 < str2)	swap(str1, str2);
				if(str2 < str3)	swap(str2, str3);
				if(str1 < str3)	swap(str1, str3);
			}
		*/
		
		if((str1 + str3 + str2) > result) result = str1 + str3 + str2;
		if((str2 + str1 + str3) > result) result = str2 + str1 + str3;
		if((str2 + str3 + str1) > result) result = str2 + str3 + str1;
		if((str3 + str1 + str2) > result) result = str3 + str1 + str2;
		if((str3 + str2 + str1) > result) result = str3 + str2 + str1;
		
		
		
		cout << result << endl;
	}
	
	return 0;
}
