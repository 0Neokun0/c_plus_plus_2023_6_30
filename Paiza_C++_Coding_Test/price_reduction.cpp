/*
あなたは購入金額から値下げされるクーポン券を持っています。

購入金額 x とクーポン券で値下げされる額 y が与えられます。
値下げ後の価格を出力してください。

入力例 1 の場合
1000 200
以下のように出力してください。
800
*/
#include <iostream>
using namespace std;

int main()
{
    int input1{};
    int input2{};
    cin >> input1 >> input2;
    cout << input1 - input2;


    return 0;
}