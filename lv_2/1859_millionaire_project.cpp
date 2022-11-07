#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, N;
	
	cin >> T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for(test_case = 1; test_case <= T; ++test_case)
	{
        // 이번 테스트 케이스에 입력 받을 숫자를 수를 입력
        cin >> N;
        
        // 숫자를 차례로 입력 받음
        vector<int> arr(N);
        for(int i = 0; i < N; i++)
            cin >> arr[i];

        int max = arr[N - 1];
        long result = 0;
        for(int i = N - 1; i >= 0; i--){
            if(max > arr[i])
                result += max - arr[i];
            else
                max = arr[i];
        }

        cout << "#" << test_case << " " << result << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}