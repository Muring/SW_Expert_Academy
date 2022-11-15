#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
	int T;
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int N;
        cin >> N;

        // 50000 10000 5000 1000 500 100 50 10
        int arr[8] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };
        int ans[8] = {0, };

        for(int i = 0; i < 8; i++){
            int temp;
            if(N / arr[i] != 0){
                temp = N / arr[i];
                ans[i] = temp;
                N %= arr[i];
            }
        }
        
        cout << "#" << test_case << endl;
        for(int i = 0; i < 8; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}