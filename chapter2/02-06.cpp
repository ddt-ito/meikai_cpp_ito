/*
演習2-6 キーボードから読み込んだ点数に応じて、優/良/可/不可を判定して表示するプログラムを作成せよ。
判定は以下のように行うこと。
0~59→不可/60~69→可/70~79→良/80~100→優
*/

// 入出力ライブラリのインクルード
#include <iostream>

// 名前空間を利用
using namespace std;

// main関数（以下の文を実行）
int main()
{
	// 点数の宣言
	int pointNumber;

	// 入力した点数を代入
	cin >> pointNumber;

	// 0~59点までの場合
	if (pointNumber >= 0 && pointNumber < 60) {

		// 文章の出力
		cout << "不可\n";
	}
	// 60~69点までの場合
	else if (pointNumber >= 60 && pointNumber < 70) {

		// 文章の出力
		cout << "可\n";
	}
	// 70~79点までの場合
	else if (pointNumber >= 70 && pointNumber < 80) {

		// 文章の出力
		cout << "良\n";
	}
	// 80~100点までの場合
	else if (pointNumber >= 80 && pointNumber <= 100) {

		// 文章の出力
		cout << "優\n";
	}
}