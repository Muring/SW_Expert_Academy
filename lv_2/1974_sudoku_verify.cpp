#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
        bool result = true;

        // 스도쿠 생성 및 입력
        int map[9][9];
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++)
                cin >> map[i][j];
        }

        // 가로 확인
        for(int i = 0; i < 9; i++){
            if(!result) break;
            int check[9] = {0, };
            for(int j = 0; j < 9; j++){
                if(check[map[i][j] - 1] > 0){
                    result = false;
                    break;
                }
                else
                    check[map[i][j] - 1] += 1;
            }
        }

        // 세로 확인
        for(int i = 0; i < 9; i++){
            if(!result) break;
            int check[9] = {0, };
            for(int j = 0; j < 9; j++){
                if(check[map[j][i] - 1] > 0){
                    result = false;
                    break;
                }
                else
                    check[map[j][i] - 1] += 1;
            }
        }

        // 사각형 확인
        for(int i = 0; i < 3; i++){
            if(!result) break;
            for(int j = 0; j < 3; j++){
                int check[9] = {0, };
                for(int k = 0; k < 3; k++){
                    for(int l = 0; l < 3; l++){
                        if(check[map[i * 3 + k][j * 3 + l] - 1] > 0){
                            result = false;
                            break;
                        }
                        else
                            check[map[i * 3 + k][j * 3 + l] - 1] += 1;
                    }
                }
            }
        }
        cout << "#" << test_case << " " << result << endl;
    }
    return 0;
}