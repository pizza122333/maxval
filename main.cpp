#include <iostream>
using namespace std;

int main() {
    // 주어진 3x3 행렬
    int arr[3][3] = {
        { -5,   2,  35 },
        {-20,   5, 100 },
        {-75,   5, -25 }
    };

    int maxVal = arr[0][0];  // 최대값 초기화
    int maxRow = 0, maxCol = 0;  // 최대값 위치 초기화

    // 2차원 배열 전체 탐색
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // 출력 (행, 열은 1부터 시작하도록 +1)
    cout << "최대값은 " << maxVal << endl;
    cout << "위치는 " << maxRow + 1 << "행 " << maxCol + 1 << "열" << endl;

    return 0;
}
