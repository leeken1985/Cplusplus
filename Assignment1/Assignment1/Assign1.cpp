#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>

using namespace std;

bool is_arg_valid(const std::string& s);
vector<string> split(const string& s, const string& delim);

int main(int argc, char* argv[])
{
	string input;
	vector<string> commandArgs;

	if(argc > 2){
		cerr<<"There are too many arguments"<<endl;
		return 1;
	}

	if(argc == 2)
	{
		istringstream iss(argv[1]);
		if(iss >> input){
			for (vector<string>::size_type i = 0; i < split(input, ",").size(); i++)
			{
				if(is_arg_valid(split(input, ",")[i]))
				{
					commandArgs.push_back(split(input, ",")[i]);
					cout << "This is valid: " << split(input, ",")[i] << endl;
				}
				else
				{
					cerr << "Command line arguments is not valid" << endl;
					return 2;
				}
			}
		}
	}
	return 0;
}

bool is_arg_valid(const string& s)
{
	static set<int> myValidation;
	pair<set<int>::iterator,bool> ret;
	int num;
	string currValue;
	istringstream iss(s);
	iss >> num;
	istringstream iss1(num);
	iss >> currValue;
	if(currValue.size() == s.size())
	{
		ret = myValidation.insert((num * -1));
		if(ret.second == false)
			return false;
		else
			return true;
	}
	else if(s.size() - currValue.size() == 1)
	{
		string::const_iterator it = s.end()-1;
		ret = myValidation.insert((num * -1));
		if(ret.second == false)
			return false;
		if(*it == 't')
			return true;
	}
	else
		return false;
}

vector<string> split(const string& s, const string& delim)
{
	string::size_type k = 0;
	string::size_type pos = 0;
	vector<string> str;
	vector<string>::iterator it;
	
	while((pos = s.find_first_of(delim, k)) != string::npos)
	{			
		str.push_back(s.substr(k, pos-k));		
		k= pos+1;
	}	
	str.push_back(s.substr(k));

	return str;
}