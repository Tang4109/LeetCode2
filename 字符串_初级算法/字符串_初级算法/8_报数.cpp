/****************************************!
*@brief  ±¨Êý
*@author ZhangYunjia
*@date   2019/6/18/8:28

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
#include <map>

using namespace std;



class Solution {
public:
	string countAndSay(int n) 
	{
		m[1] = "1";
		m[2] = "11";
		for (int i=3;i<=30;i++)
		{
			len = m[i - 1].size();
			for (int j=0;j<len-1;j++)
			{
				if (m[i-1][j]==m[i-1][j+1] )
				{
					num++;
					if (j == len - 2)
					{
						str =str + to_string(num + 1) + m[i - 1][len - 1];
						break;
					}
					
				}
			
				if (m[i - 1][j] != m[i - 1][j + 1])
				{
					str =str + to_string(num+1) + m[i - 1][j];
					num = 0;
					if (j==len-2)
					{
						str =str + to_string(num + 1) + m[i - 1][len-1];
						break;
					}
					
				}
				
			}
			num = 0;
			m[i] = str;
			str.clear();
		}

		return m[n];
	}
private:
	
	map<int, string> m;
	int len;
	int num=0;
	string str="";
};





int main()
{
	Solution s;
	int n = 6 ;
	string a;
	a = s.countAndSay(n);
	cout << a << endl;
	
	
	cout<<"\nend.."<<endl;
	system("pause");
	return 0;
}