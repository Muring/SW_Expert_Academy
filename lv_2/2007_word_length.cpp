#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
        string s, temp;
        cin >> s;

        temp.push_back(s[0]);
        for(int i = 1; i < s.size(); i++){
            if(temp != s.substr(temp.size(), i))
                temp.push_back(s[i]);
            else
                break;
        }

        cout << "#" << test_case << " " << temp.size() << endl;
	}
	return 0;
}