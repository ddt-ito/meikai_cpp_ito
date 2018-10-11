/*
演習2-16 月を1~12の整数値として読み込んで、それに対応する季節を表示するプログラムを作成せよ。
*/

// 入出力ライブラリのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行）
int	main()
{
	// 月の数値を宣言
	int seasonNumber;

	// 入力した数値を出力
	cout << "季節を求めます。\n何月ですか : ";

	// 受け取った数値の代入
	cin >> seasonNumber;

	// 入力した数値によって分岐
	switch (seasonNumber) {
	// 3の場合
	case 3:
	// 4の場合
	case 4:
	// 5の場合
	case 5:
		// 文字の出力
		cout << "それは春です。\n";
		// switchを終了
		break;
	// 6の場合
	case 6:
	// 7の場合
	case 7:
	// 8の場合
	case 8:
		// 文字の出力
		cout << "それは夏です。\n";
		// switchを終了
		break;
	// 9の場合
	case 9:
	// 10の場合
	case 10:
	// 11の場合
	case 11:
		// 文字の出力
		cout << "それは秋です。\n";
		// switchを終了
		break;
	// 12の場合
	case 12:
	// 1の場合
	case 1:
	// 2の場合
	case 2:
		// 文字の出力
		cout << "それは冬です。\n";
		// switchを終了
		break;
	default:
		break;
	}
}