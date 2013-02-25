#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

bool is_arg_valid(const std::string& s);
vector<string> split(const string& s, const string& delim);

int main(int argc, char* argv[])
{
	string input;

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
				cout << split(input, ",")[i] << endl;
				if(!is_arg_valid(split(input, ",")[i]))
					cerr<<"The arguments are invalid"<<endl;
				else
					cout<<"this is fine"<<endl;
			}
		}
	}
	return 0;
}

bool is_arg_valid(const std::string& s)
{
    string::const_iterator it = s.begin();
	
    while (it != s.end())
	{
		//if(*it == 0)
		//	return 0;
		//else if(*it == ' ')
		//{
		//	return 0;
		//}
		//else if(*it == '-')
		//{
		//	if(!isdigit(*(++it)))
		//		return 0;
		//}
		//else if(isdigit((*it)))
		//{
		//	if(it != s.end())
		//		if(*it == 't')
		//}
		cout << *it << ' ' << endl;
		
	}
	return !s.empty() && it == s.end();
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