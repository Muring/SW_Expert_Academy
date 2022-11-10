#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int N, ans = 0;
        cin >> N;

        for(int i = 1; i <= N; i++)
        {
            if(i % 2 == 0)
                ans -= i;
            else
                ans += i;
        }
        cout << "#" << test_case << " " << ans << endl;
	}
	return 0;
}