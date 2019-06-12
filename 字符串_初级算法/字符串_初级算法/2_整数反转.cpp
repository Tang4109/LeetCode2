/****************************************!
*@brief  整数反转
*@author ZhangYunjia
*@date   2019/6/12/16:03

****************************************/

#include<iostream>
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
	 int reverse( int x) {
		 
		if (x>0)
		{
			while (x)
			{
				//printf("%d ", x % 10);
				s += to_string(x % 10);
				x /= 10;
				
			}
			if (s.size() < to_string(INT_MAX).size())
			{
				tmp = atoi(s.c_str());
				return tmp;
			}
			else if (s.size() == to_string(INT_MAX).size())
			{

				if (s < to_string(INT_MAX))
				{
					tmp = atoi(s.c_str());
					return tmp;
				}
				else
				{
					return 0;
				}
			}
		}
		else if (x==0||x==INT_MIN)
		{
			return 0;
		}
		else 
		{
			x = abs(x);
			while (x)
			{
				//printf("%d ", x % 10);
				s += to_string(x % 10);
				x /= 10;
				
			}
			if (s.size() < to_string(INT_MAX).size())
			{
				tmp = atoi(s.c_str());
				return -tmp;
			}
			else if (s.size() == to_string(INT_MAX).size())
			{

				if (s < to_string(INT_MAX))
				{
					tmp = atoi(s.c_str());
					return -tmp;
				}
				else
				{
					return 0;
				}
			}

		}
		return 0;
	}
private:
	string s;
	int tmp;
};



int main()
{
	//  
	int x = 123;
	int x2;
	Solution s;
	x2 = s.reverse(x);
	cout << x2 << endl;

	//string s1 = "321";
	//string s2 = "3447483647";
	//cout << s1.size() << endl;
	//cout << (s1 > s2);

	

	cout<<"\nend.."<<endl;
	system("pause");
	return 0;
}