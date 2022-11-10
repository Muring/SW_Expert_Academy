#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        vector<int> arr (10);
        for(int i = 0; i < 10; i++)
            cin >> arr[i];
        
        sort(arr.begin(), arr.end());
        
        // float형 변수에 정수 / 정수 하면 몫은 정수로 나온다. 정수 / 실수 형태로 해야 실수 형태의 몫이 나온다.
        float sum = (accumulate(arr.begin(), arr.end(), 0) - arr.front() - arr.back()) / (double)(arr.size() - 2);
        int ans = floor(sum + 0.5);

        cout << "#" << test_case << " " << ans << endl;
	}
	return 0;
}