/*
A 君はカップラーメンをよく食べますが、彼はバリカタが好きなのでお湯を入れてから 1 分後に食べ始めます。
A 君がカップラーメンにお湯を入れてから X 秒経過しました。A 君は残り何秒待てばカップラーメンを食べれますか？

入力例 1 の場合
40
A 君がお湯を入れてから 40 秒経過したため、残り 20 秒待つ必要があります。
20
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    int input;
    int remaining {60};
    cin >> input;
    cout << remaining - input;


    return 0;
}