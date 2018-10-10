/*
演習2－1 右に示すように、整数値を読み込んで、
その絶対値を求めて表示するプログラムを作成せよ。
*/

// 入出力ライブラリのインクルード
#include <iostream>

// 名前空間を利用
using namespace std;

// main関数（以下の文を実行）
int main()
{
	// 整数値の宣言
	int firstNumber;

	// 文章の出力
	cout << "整数値 : ";

	// 整数値を標準入力から受け取って代入
	cin >> firstNumber;

	// 整数値が0以上である場合の絶対値
	if (firstNumber >= 0) {

		// 文章の出力
		cout << "その絶対値は" << firstNumber << " です。\n";
	}
	// 整数値が0未満である場合の絶対値
	else if (firstNumber < 0) {

		// 文章の出力
		cout << "その絶対値は" << - firstNumber << "です。\n";
	}
}