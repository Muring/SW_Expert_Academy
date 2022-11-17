#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
	int T;
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
        vector<vector<char>> arr(8, vector<char>(8));
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++)
                cin >> arr[i][j];
        }

        int ans[8] = {0, };
        int r_count = 0, c_count = 0, temp;
        string result = "yes";

        for(int i = 0; i < 8; i++){
            if(result == "no")
                break;

            for(int j = 0; j < 8; j++)
                if(arr[i][j] == 'O'){
                    r_count++;
                    temp = j;
                }
            if(r_count == 1){
                for(int k = 0; k < 8; k++)
                    if(arr[k][temp] == 'O') c_count++;
                
                if(c_count == 1){
                    if(ans[temp] == 0)
                        ans[temp]++;
                    else
                        result = "no";
                }
                else
                    result = "no";
            }
            else
                result = "no";
            
            r_count = 0;
            c_count = 0;
        }

        cout << "#" << test_case << " " << result << endl;
    }
    return 0;
}