#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
	int T;
	cin>>T;

    string ans = "abcdefghijklmnopqrstuvwxyz";
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
        string s;
        cin >> s;

        int count = 0;
        for(int i = 0; i < s.size(); i++){
            if(ans[i] == s[i]) count++;
            else
                break;
        }

        cout << "#" << test_case << " " << count << endl;
    }
    return 0;
}