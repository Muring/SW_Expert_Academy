#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
    
    // ÆÄ½ºÄ® »ï°¢Çü »ý¼º
    int arr[10][10] = {0, };
    arr[0][0] = 1;
    for(int i = 1; i < 10; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int N;
        cin >> N;

        cout << "#" << test_case << " " << endl;

        for(int i = 0; i < N; i++){
            for(int j = 0; j <= i; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
	}
	return 0;
}