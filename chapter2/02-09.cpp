/*
演習2-9 右に示すように、二つの整数値を読み込んで、それらの値の差が10以下であれば『それらの差は10以下です。』と表示し、
そうでなければ『それらの差は11以上です。』と表示するプログラムを作成せよ。
*/

// 入出力ライブラリのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行）
int main()
{
	// 整数a,bの宣言
	int integerNumberA;	// 整数a
	int integerNumberB;	// 整数b

	// 文字の出力
	cout << "整数a : ";

	// 入力した値を受け取って整数aに代入
	cin >> integerNumberA;

	// 文字の出力
	cout << "整数b : ";

	// 入力した値を受け取って整数bに代入
	cin >> integerNumberB;

	//	二つの整数の差の宣言、その絶対値を初期化
	int differenceNumber = integerNumberA > integerNumberB
		? integerNumberA - integerNumberB
		: integerNumberB - integerNumberA;

	// 二つの整数の差が10以下である場合
	if (differenceNumber <= 10) {

		// 文字の出力
		cout << "それらの差は10以下です。\n";
	}
	// 二つの整数の差が11以上である場合
	else {

		// 文字の出力
		cout << "それらの差は11以上です。\n";
	}
}