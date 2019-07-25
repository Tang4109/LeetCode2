/****************************************!
*@brief  9_最长公共前缀
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
	string longestCommonPrefix(vector<string>& strs) {
		size_t len_strs = strs.size();

		if (len_strs<=0)
		{
			return  "";
		}
		if (len_strs==1)
		{
			return strs.at(0);
		}

		if(len_strs>=2)
		{
			//求出字符串最短长度方法1
			//for (size_t i = 0; i < len_strs-1; i++)
			//{
			//	size_t len1 = strs.at(i).size();
			//	size_t len2 = strs.at(i+1).size();
			//	size_t len = min(len1, len2);
			//	len_min = min(len_min, len);//以较短的一个为基准
			//}

			//求出字符串最短长度方法2
			for (size_t i = 0; i < len_strs - 1; i++)
			{
				size_t len_ = strs.at(i).size();
				v.push_back(len_);
			}
			size_t len_min = *min_element(begin(v), end(v));

			for (size_t j = 0; j < len_min; j++)
			{
				for (size_t i = 0; i < len_strs-1; i++)
				{
					if (strs[i][j] == strs[i + 1][j])
					{
						num++;
					}
					else if (strs[i][j] != strs[i + 1][j])
					{
						break;
					}
				}

				if (num == len_strs-1)
				{
					s += strs[0][j];
				}
				if (num != len_strs-1)
				{
					return s;
				}

				num = 0;
			}

		}
		return s;

	}
private:
	string s1;
	string s2;
	string s="";
	int num = 0;
	size_t len_min = INT_MAX;
	vector<size_t> v;
};

int main()
{
	Solution s;
	vector<string> strs;
	strs.push_back("flower");
	strs.push_back("flow");
	strs.push_back("flight22");



	string str;
	str = s.longestCommonPrefix(strs);
	cout << endl;
	cout << str << endl;




	cout << "\nend.." << endl;
	system("pause");
	return 0;
}