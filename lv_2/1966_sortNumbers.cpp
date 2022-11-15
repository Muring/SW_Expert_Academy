#include<iostream>
#include<algorithm>
#include<vector>

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

        vector<int> arr;
        int temp;
        for(int i = 0; i < N; i++){
            cin >> temp;
            arr.push_back(temp);
        }
                    
        sort(arr.begin(), arr.end());
        
        cout << "#" << test_case;
        for(int i = 0; i < N; i++)
            cout << " " << arr[i];
        cout << endl;
    }
    return 0;
}