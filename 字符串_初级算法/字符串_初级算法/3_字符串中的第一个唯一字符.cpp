/****************************************!
*@brief  �ַ����еĵ�һ��Ψһ�ַ�
*@author ZhangYunjia
*@date   2019/6/12/22:55

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


//ʹ�ü����ķ�ʽʱ�临�Ӷ�̫�ߣ�����ʹ�����·�ʽ
class Solution {
public:
	int firstUniqChar(string s) 
	{
		len = s.size();
		if (len==1)
		{
			return 0;
		}
		for (int i=0;i<len;i++)
		{
			for (int j=0;j<len;j++)
			{
				if ( (s[j]==s[i])&& (j!=i) )
				{
					
					break;
				}
				if (j == len - 1)
				{
					return i;
				}

			}
		}
		return -1;

	}
private:
	int len;
	int num;
};


int main()
{

	string a = "leetcode";

	Solution s;
	int num;

	num = s.firstUniqChar(a);
	cout << num << endl;

	cout<<"\nend.."<<endl;
	system("pause");
	return 0;
}