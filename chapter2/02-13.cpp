/*
演習2-13 二つの整数値を読み込んで降順（大きい順）に並べ替えるプログラムを作成せよ。
*/

// 入出力ライブラリのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行）
int main()
{
	// 整数a, bの宣言
	int integerNumberA;	// 整数a
	int integerNumberB;	// 整数b

	// 文字の出力
	cout << "整数a : ";

	// 受け取った値を整数aに代入
	cin >> integerNumberA;

	// 文字の出力
	cout << "整数b : ";

	// 受け取った値を整数bに代入
	cin >> integerNumberB;

	// a < bの場合
	if (integerNumberA < integerNumberB) {

		// 仮の入れ物を宣言、整数aで初期化
		int temporaryNumber = integerNumberA;

		// bに代入されている整数をaに代入
		integerNumberA = integerNumberB;

		// 仮の入れ物に入れた整数をbに代入
		integerNumberB = temporaryNumber;
	}
	// 文字の出力
	cout << "a≧bとなるようにソートしました。\n";

	// 整数aの出力
	cout << "整数aは" << integerNumberA << "です。\n";

	// 整数bの出力
	cout << "整数bは" << integerNumberB << "です。\n";
}