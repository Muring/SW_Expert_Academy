#include<iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int T;
	cin >> T;
	
    string grade[] = { "A+","A0","A-","B+","B0","B-","C+","C0","C-","D0" };
	for(int test_case = 1; test_case <= T; ++test_case)
	{
        int N, k;
        cin >> N >> k;
        
        int mid, fin, report;
        double *sum = new double[N];
        int result = 0;

        // 성적 입력받기
        for(int i = 0; i < N; i++){
            cin >> mid >> fin >> report;
            sum[i] = mid * 0.35 + fin * 0.45 + report * 0.2;
        }

        for(int i = 0; i < N; i++){
            if(sum[i] > sum[k - 1])
                result++;
        }

        cout << "#" << test_case << " " << grade[result / (N / 10)] << endl;
        delete[] sum;
	}
	return 0;
}