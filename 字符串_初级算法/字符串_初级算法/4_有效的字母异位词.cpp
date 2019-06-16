/****************************************!
*@brief  有效的字母异位词
*@author ZhangYunjia
*@date   2019/6/16/9:37

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

//计数的方式时间复杂度太高
class Solution1 {
public:
	bool isAnagram(string s, string t) {
		if (s.size()==t.size())
		{
			len = s.size();
			for (int i=0;i<len;i++)
			{
				num1 = count(s.begin(), s.end(), s[i]);
				num2 =count(t.begin(), t.end(), s[i]);
				if (num1!=num2)
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}

		return true;

	}
private:
	int len;
	int num1;
	int num2;
};

//先排序，再判断是否相等
class Solution {
public:
	bool isAnagram(string s, string t) {
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		if (s==t)
		{
			return true;
		}

		return false;

	}
};



int main()
{
	int flag;
	Solution a;
	
	string s = "anagram";
	string t = "aagaram";
	flag = a.isAnagram(s, t);
	cout << flag << endl;

	
	
	cout<<"\nend.."<<endl;
	system("pause");
	return 0;
}