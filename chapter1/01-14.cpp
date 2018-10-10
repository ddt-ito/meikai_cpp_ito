/*
演習1－14 キーボードから読み込んだ整数値プラスマイナス5の
範囲の整数値をランダムに生成して表示するプログラムを作成せよ。
※キーボードから読み込んだ値が100であれば、95~105の整数値を表示すること。
*/

// ライブラリのインクルード
#include <ctime>	// 日付時刻
#include <cstdlib>	// 乱数生成
#include <iostream>	// 入出力

// 名前空間を利用
using namespace std;

// main関数（以下の文を実行）
int main()
{
	// 整数値の宣言
	int integerNumber;

	// 現在時刻から乱数の種を決定
	srand(time(NULL));

	// -5~5の乱数を宣言、初期化
	int positiveNumber = rand() % 11 - 5;

	// 整数値の出力
	cout << "整数値 : ";

	// 整数値100を入力から受け取って代入
	cin >> integerNumber;

	// 整数値100±5の値の出力
	cout << "その値の±5の乱数を生成しました。"
		"それは" << integerNumber + positiveNumber << "です。\n";
}