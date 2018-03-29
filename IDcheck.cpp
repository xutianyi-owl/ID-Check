/*
Part of IDcheck
IDcheck Copyright XuTianyi
徐添翼 版权所有
Github:github.com/xutianyi-owl
Build on Ubuntu 16.04LTS by Clang
*/
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "check.h"
#include "inform.h"
using namespace std;
	string id;
	string choice;
	int main(int argc, char const *argv[])
	{
		//system("clear");
		cout << "--IDcheck Copyright XuTianyi--" << '\n'<<'\n';
		cout << "--------Begin-Check-----------" << '\n' << '\n';
		if (argc >= 3)
		{
			choice = argv[1];
			id = argv[2];
			if (id[17] == 'x' || id[17] == '*')
			{
				id[17] = 'X';
			}
		}
		if (choice == "-c")
		{
			if (check(id) == 1)
				cout << "符合校验标准" << '\n';
			else
			{
				cout << "不符合标准或输入有误，请检查：";
				cout << id << '\n';
			}
		}
		else if (choice == "-a")
		{
			if (check(id) == 1)
			{
				get_data();
				cout << "归属地为：";
				cout << get_prov(id) << "  ";
				cout << get_city(id) << "  ";
				cout << get_dist(id) << "  ";
				cout << '\n';
				cout << "性别为:" << '\t';
				cout << get_gent(id) << '\n';
			}
			else
			{
				cout << "不符合校验标准，请检查输入内容" << '\n';
			}
		}
		else
		{
			cout << "身份证号校验及信息查询系统" << '\n';
			cout << "使用 -c [身份证号] 检查是否符合校验标准" << '\n';
			cout << "使用 -a [身份证号] 查询身份证归属地信息" << '\n';
		}
		cout << '\n' << "---------End-Check------------" << '\n' << '\n';
		return 0;
	}
