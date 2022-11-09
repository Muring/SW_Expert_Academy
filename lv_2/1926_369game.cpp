#include<iostream>

using namespace std;

// 해당 숫자의 - 개수 count
int count369(int N){
    int count = 0, num;

    while(true){
        num = N % 10;
        
        if(num == 3 || num == 6 || num == 9)
            count++;
        N /= 10;

        if(N == 0) break;
    }
    return count;
}

int main(int argc, char** argv)
{
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++){
        int count = count369(i);

        if(count == 0){
            cout << i << " ";
            continue;
        }
        for(int j = 0; j < count; j++)
            cout << "-";
        cout << " ";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}