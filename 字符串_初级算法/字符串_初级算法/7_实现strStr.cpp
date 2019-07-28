/****************************************!
*@brief  7-查找子串出现的位置
*@author ZhangYunjia
*@date   2019/7/28/19:08

****************************************/

#include<iostream>

using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) 
	{
		return haystack.find(needle);

		//return -1;
	}
};



int main()
{
	string s1 = "hello";
	string s2 = "ss";

	int location = 0;

	Solution s;
	location = s.strStr(s1, s2);
	cout << location << endl;
	
	
	cout<<"end.."<<endl;
	system("pause");
	return 0;
}