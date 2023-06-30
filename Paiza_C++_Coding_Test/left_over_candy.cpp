/*
あなたは飴玉を n 個購入して m 人の子どもたちにそれを配ることにしましたが余りが出てしまいます。
子どもたちが喧嘩をしないために余る飴を先に取り除いておくことにしました。

n 個の飴を m 人に同じ個数配った時の余りを出力してください。

入力例 1 の場合
10 3
3 人に 10 個の飴を 3 個ずつ配るので 1 個余るので
1
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    // Start from below
    int input1{};
    int input2{};
    cin >> input1 >> input2;
    cout << input1 % input2;

    return 0;
}