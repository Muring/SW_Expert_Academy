#include <iostream>

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

        int len = s.size(), half;
        int count = 0, ans = 0;
        if(len % 2 == 0){
            half = len / 2 - 1;

            for(int i = 0; i < half; i++){
                if(s[half - i] == s[half + i + 1])
                    count++;
            }
        }
        else{
            half = len / 2;

            for(int i = 1; i <= half; i++){
                if(s[half - i] == s[half + i])
                    count++;
            }
        }

        if(count == half)
            ans = 1;

        cout << "#" << test_case << " " << ans << endl;
	}
	return 0;
}