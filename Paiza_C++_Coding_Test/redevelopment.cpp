/*
A 村にはもともと 100 人の人が住んでいました。A 村には新しくテーマパークできたため、人口が増加しました。
結果、A 村では人口が毎月 X 人ずつ増加します。Y 月後の A 村の人口はいくらですか？

入力例 1 の場合
180
2
村の人口は 100 人から毎月 180 人増えるので、2 ヶ月後には 460 人になります。
460
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input1{};
    int input2{};
    cin >> input1;
    cin >> input2;

    cout << input1 * input2 + 100;


    return 0;
}