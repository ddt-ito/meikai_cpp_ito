/*
演習2-11 キーボードから読み込んだ三つの整数の中央値を求めて表示するプログラムを作成せよ。
*/

// 入出力ライブラリのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行）
int main()
{
	// 整数値a,b,cの宣言
	int integerNumberA;	// 整数値a
	int integerNumberB;	// 整数値b
	int integerNumberC;	// 整数値c

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

	// 中央値を宣言
	int intermediateValue;

	// a < bの場合
	if (integerNumberA < integerNumberB) {

		// c < aの場合、c < a < b
		if (integerNumberC < integerNumberA) {

			// 中央値にaを代入
			intermediateValue = integerNumberA;

		// a <= cの場合、bとcの大小を比較
		}else {

			// b < cの場合、a < b < c
			if (integerNumberB < integerNumberC) {

				// 中央値にbを代入
				intermediateValue = integerNumberB;

			// c <= bの場合(a <= c <= b)
			}else {

				// 中央値にcを代入
				intermediateValue = integerNumberC;
			}
		}
	// b <= aの場合
	}else {

		// c < bの場合、c < b <= a
		if (integerNumberC < integerNumberB) {

			// 中央値にbを代入
			intermediateValue = integerNumberB;

		// b <= cの場合、aとcの大小を比較
		}else {

			// a < cの場合、b <= a < c
			if (integerNumberA < integerNumberC) {

				// 中央値にaを代入
				intermediateValue = integerNumberA;

			// c <= aの場合、b <= c <= a
			}else {

				// 中央値にcを代入
				intermediateValue = integerNumberC;
			}
		}
	}
	// 中央値の出力
	cout << "中央値は" << intermediateValue << "です。\n";
}