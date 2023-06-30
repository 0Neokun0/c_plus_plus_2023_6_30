/*
A 君は株取引が大好きです。A 君はもともと X 円所持していましたが、昨日株価が上昇したため Y 円儲かりました。しかし、今日株価が下落したため Z 円損してしまいました。
A 君の現在の所持金はいくらですか？

入力例 1 の場合
180
150
50
A 君の所持金の 180 円でしたが、昨日に 150 円儲かり、今日に 50 円損したため、現在の所持金は 280 円です。
280
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    int input1;
    int input2;
    int input3;

    cin >> input1;
    cin >> input2;
    cin >> input3;

    cout << input1 + input2 - input3;

    return 0;
}