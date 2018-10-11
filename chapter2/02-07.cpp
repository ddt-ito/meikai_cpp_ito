/*
演習2-7 二つの実数値を読み込んで、大きいほうの値を表示するプログラムを作成せよ。
*/

// 入出力ライブラリのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行）
int main()
{
	// 実数値a,bの宣言
	double realNumberA;	// 実数a
	double realNumberB;	// 実数b

	// 文字の出力
	cout << "実数a : ";

	// 値を受け取って実数aに代入
	cin >> realNumberA;

	// 文字の出力
	cout << "実数b : ";

	// 値を受け取って実数bに代入
	cin >> realNumberB;

	// 大きいほうの値を宣言、a,ｂのうち大きいほうの値で初期化
	double maximumNumber = realNumberA > realNumberB
		? realNumberA
		: realNumberB;

	// 大きいほうの値を出力
	cout << "大きいほうの値は" << maximumNumber << "です。\n";
}