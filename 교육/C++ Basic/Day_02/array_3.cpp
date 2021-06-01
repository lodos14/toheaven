/*

 다차원 배열 : 2차원 배열 이상의 배열을 의미한다.
 2차원 배열 : 1차원 배열을 두 개 가지고 있는 배열
            - 배열의 요소가 두 개인 배열(행, 열)
            - 형식
              자료형 배열명[행의길이][열의길이];
            - 실제 데이터가 저장된 공간은 열의 길이

*/
#include<iostream>
using namespace std;
int main() {
    int arr1[6] = { 10, 20, 30, 40, 50, 60 };
    int arr2[2][3] = { 10, 20, 30, 40, 50, 60 };

    /*
    
       int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};
       int arr[][3] = {{10, 20, 30}, {40, 50, 60}};
       배열의 크기보다 작은 데이터가 채워지면 빈공간은 0


    */
    for (int i = 0; i < 6; i++) {
        cout << arr1[i] << endl;
    }
    cout << endl;

    // arr2 출력
    /*
    
      arr2[0][0]
      arr2[0][1]
      arr2[0][2]

      arr2[1][0]
      arr2[1][1]
      arr2[1][1]

    */
    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            
            cout << arr2[i][j] << endl;
        }
        
        cout << endl;

    }

    return 0;
}