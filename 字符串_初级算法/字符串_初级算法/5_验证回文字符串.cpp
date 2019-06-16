/****************************************!
*@brief  验证回文字符串
*@author ZhangYunjia
*@date   2019/6/16/10:54

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

//leetcode没有加载transform函数,加::后可以使用
class Solution {
public:
	bool isPalindrome(string s) {

		transform(s.begin(), s.end(), s.begin(), ::tolower);
		for (int i = 0; i < s.size(); i++)
		{
			if (isalpha(s[i])|| isdigit(s[i]))
			{
				t.push_back(s[i]);
			}
		}
		cout << t << endl;
		int len = t.size();
		for (int i = 0; i < len/2; i++)
		{
			if (t[i] != t[len - 1 - i])
			{
				return false;
			}
		}
		return true;
	}
private:
	string t;
};




int main()
{
	Solution a;
	//string s = "A man, a plan, a canal: Panama";
	string s = "0p";
	bool flag;
	flag = a.isPalindrome(s);
	cout << flag << endl;

	cout<<"\nend.."<<endl;
	system("pause");
	return 0;
}