/*
演習2-10 キーボードから読み込んだ三つの整数の最小値を求めて表示するプログラムを作成せよ。
*/

// 入出力ライブラリのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行）
int main()
{
	// 整数値a,b,cの宣言
	int integerNumberA;	// 整数a
	int integerNumberB;	// 整数b
	int integerNumberC;	// 整数c

	// 文字の出力
	cout << "整数a : ";

	// 受け取った値を整数aに代入
	cin >> integerNumberA;

	// 文字の出力
	cout << "整数b : ";

	// 受け取った値を整数bに代入
	cin >> integerNumberB;

	// 文字の出力
	cout << "整数c : ";

	// 受け取った値を整数cに代入
	cin >> integerNumberC;

	// 最小値を整数aで初期化
	int minimumNumber = integerNumberA;

	// bがaよりも小さい場合
	if (integerNumberB < minimumNumber) {

		// bを最小値とする
		minimumNumber = integerNumberB;
	}
	// cがbよりも小さい場合
	if (integerNumberC < minimumNumber) {

		// cを最小値とする
		minimumNumber = integerNumberC;
	}
	// 文字の出力
	cout << "最小値は" << minimumNumber << "です。\n";
}