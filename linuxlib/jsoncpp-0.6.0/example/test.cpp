#include <iostream>
#include <string>
#include "json/json.h"

using namespace std;

int main()
{
	Json::Value value;
	Json::Reader reader;
	string str("{\"key\":\"test\"}");
	string str1 = "";
	cout<<reader.parse(str,value);
	//cout<<value["key"]<<endl;
}
