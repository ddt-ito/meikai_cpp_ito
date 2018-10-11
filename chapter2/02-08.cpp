/*
演習2-8 二つの整数値を読み込んで、それらの値の差を表示するプログラムを作成せよ。
*/

// 入出力ライブラリのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行）
int main()
{
	// 整数値a,bの宣言
	int integerNumberA;	// 整数a
	int integerNumberB;	// 整数b

	// 文字の出力
	cout << "整数a : ";

	// 入力から受け取った値を整数aに代入
	cin >> integerNumberA;

	// 文字の出力
	cout << "整数b : ";

	// 入力した値を受け取って整数bに代入
	cin >> integerNumberB;

	// 二つの整数の差（大きいほう-小さいほう）を初期化
	int reminderNumber = integerNumberA > integerNumberB
		? integerNumberA - integerNumberB
		: integerNumberB - integerNumberA;

	// 大きいほうの整数ともう一方の整数の差を出力
	cout << reminderNumber << "です。\n";
}