/****************************************!
*@brief  
*@author ZhangYunjia
*@date   2019/6/16/14:52

****************************************/

#include<iostream>
#include "iterator"
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <set>
#include <functional>
#include<numeric>

using namespace std;

class Solution {
public:
	int myAtoi(string s) 
	{
		len = s.size();

		for ( int i=0;i<len;i++)
		{
			if (isdigit(s[i])||(s[i]=='-'))
			{
				num++;
			}

			if (  (s[i]==' ') && (num == 0))//出现字母之前全是空格
			{
				continue;
			}

			if (( isalpha(s[i])||(s[i]=='.') )&&(num==0))//出现字母之前没出现数字
			{
				return 0;
			}
			if ((num != 0) &&  (i == len - 1))
			{
				for (int j = (i - num + 1); j <= i; j++)
				{
					
					x += s[j];
					len_x = num;
					if ((x[0] == '-') && (len_x > to_string(INT_MIN).size()))
					{
						return INT_MIN;
					}
					if ((x[0] == '-') && (len_x == to_string(INT_MIN).size()))
					{
						if (x < to_string(INT_MIN))
						{
							return INT_MIN;
						}
					}

					if (len_x > to_string(INT_MAX).size())
					{
						return INT_MAX;
					}
					if (len_x == to_string(INT_MAX).size())
					{
						if (x > to_string(INT_MAX))
						{
							return INT_MAX;
						}
					}


				}
				return atoi(x.c_str());

			}

			if ((num != 0) && ((s[i] == ' ') || isalpha(s[i])|| s[i] == '.'))
			{
				
				for (int j = (i - num); j < i; j++)
				{
					
					x += s[j];

					len_x = num;
					if ((x[0] == '-') && (len_x > to_string(INT_MIN).size()))
					{
						return INT_MIN;
					}
					if ((x[0] == '-') && (len_x == to_string(INT_MIN).size()))
					{
						if (x < to_string(INT_MIN))
						{
							return INT_MIN;
						}
					}

					if (len_x > to_string(INT_MAX).size())
					{
						return INT_MAX;
					}
					if (len_x == to_string(INT_MAX).size())
					{
						if (x > to_string(INT_MAX))
						{
							return INT_MAX;
						}
					}

				}
				return  atoi(x.c_str());

			}
			
		}
		
		return 0;

	}
private:
	int len = 0;
	int num = 0;
	string x;
	int len_x = 0;
};


int main()
{
	Solution s;
	string a = "         0000123456789";
	
	int num;
	num = s.myAtoi(a);
	cout << endl;
	cout << num << endl;

	cout << atoi(a.c_str()) << endl;


	cout<<"\nend.."<<endl;
	system("pause");
	return 0;
}