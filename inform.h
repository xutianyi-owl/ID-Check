/*
Part of IDcheck
IDcheck Copyright XuTianyi
徐添翼 版权所有
Github:github.com/xutianyi-owl
Build on Ubuntu 16.04LTS by Clang
*/
#include <iostream>
using namespace std;
#ifndef ID_INFORM
#define ID_INFORM
void get_data();
string get_prov(string id);
string get_city(string id);
string get_dist(string id);
string get_gent(string id);
#endif
