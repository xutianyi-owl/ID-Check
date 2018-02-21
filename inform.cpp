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
#include "inform.h"
using namespace std;
string prov_Code[2][34];
string city_Code[2][430];
string dist_Code[2][4536];
void get_data()
{
	/*载入数据*/
	ifstream data_read;
	data_read.open("prov_Code");
	if (!data_read)
	{
		cout << "数据文件丢失或损坏，请检查：prov_Code"<< '\n';
	}
	for (size_t i = 0; i < 34; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			data_read >> prov_Code[j][i];
		}
	}
	data_read.close();
	data_read.open("city_Code");
	if (!data_read)
	{
		cout << "数据文件丢失或损坏，请检查：city_Code" << '\n';
	}
	for (size_t i = 0; i < 430; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			data_read >> city_Code[j][i];
		}
	}
	data_read.close();
	data_read.open("dist_Code");
	if (!data_read)
	{
		cout << "数据文件丢失或损坏，请检查：dist_Code" << '\n';
	}
	for (size_t i = 0; i < 4536; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			data_read >> dist_Code[j][i];
		}
	}
	data_read.close();
}

string get_prov(string id)
{
	int prov_posi=0;
	string prov="error";
	/*查询数据*/
	string id_prov_code="xxx";
	id_prov_code = (id.substr(0, 2));
	for (size_t i = 0; i < 34; i++)
	{
		if (id_prov_code == prov_Code[0][i])
		{
			prov_posi = i;
			prov = prov_Code[1][prov_posi];
			break;
		}
	}
	return prov;
}

string get_city(string id)
{
	int city1_posi=0;
	string city="error";
	/*查询数据*/
	string id_city_code="xxx";
	id_city_code = (id.substr(0, 4));
	for (size_t i = 0; i < 430; i++)
	{
		if (id_city_code == city_Code[0][i])
		{
			city1_posi = i;
			city = city_Code[1][city1_posi];
			break;
		}
	}
	return city;
}

string get_dist(string id)
{
	int dist_posi=0;
	string dist="error";
	/*查询数据*/
	string id_dist_code="xxx";
	id_dist_code = (id.substr(0, 6));
	for (size_t i = 0; i < 4536; i++)
	{
		if (id_dist_code == dist_Code[0][i])
		{
			dist_posi = i;
			dist = dist_Code[1][dist_posi];
			break;
		}
	}
	return dist;
}
/*Bug here?????---20180217
string get_gent(string id)
{
	string gent = "error";
	int gent_check;
	stringstream s_i;
	s_i << id[16];
	s_i >> gent_check;
	if (gent_check % 2 == 0)
	{
		gent = "女";
	}
	else
	{
		gent == "男";
	}
	return gent;
}
*/
