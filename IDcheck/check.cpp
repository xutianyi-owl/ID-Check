/*
Part of IDcheck
IDcheck Copyright XuTianyi
������ ��Ȩ����
Github:github.com/xutianyi-owl
Build on Windows 10 by VS2017
*/
#include "stdafx.h"
int check(string id)
{
	int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	int id_sum = 0;
	for (size_t i = 0; i < 17; i++)
	{
		id_sum = id_sum + (id[i] - 48)*weight[i];
	}
	char check_num[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
	if (check_num[id_sum % 11] == id[17])
		return 1;
	else
		return 0;
}