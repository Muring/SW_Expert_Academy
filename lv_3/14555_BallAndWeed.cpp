#include<iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
	int T;
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
        string s;
        cin >> s;

        int count = 0;
        for(int i = 0; i < s.size() - 1; i++){
            if(s.substr(i, 2) == "(|" || s.substr(i, 2) == "|)" || s.substr(i, 2) == "()")
                count ++;
        }

        cout << "#" << test_case << " " << count << endl;
    }
    return 0;
}