/*
演習2-15 おみくじプログラムを作成せよ。乱数を生成して、
『大吉』、『中吉』、『小吉』、『吉』、『末吉』、『凶』、『大凶』のいずれかを表示すること。
*/

// ライブラリのインクルード
#include <ctime>	// 日付時刻
#include <cstdlib>	// 乱数生成
#include <iostream>	// 入出力

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行）
int main()
{
	// 乱数の種（実行時の日付時刻を基に生成）
	srand(time(NULL));

	// おみくじの値の宣言、0~6のいずれかの値の乱数で初期化
	int handNumber = rand() % 7;

	// 文章の出力
	cout << "おみくじ : ";

	// 生成した値によって分岐
	switch (handNumber) {
	// 0の場合
	case 0:
		// 文字の出力
		cout << "大吉\n";
		// switchの終了
		break;
	// 1の場合
	case 1:
		// 文字の出力
		cout << "中吉\n";
		// switchの終了
		break;
	// 2の場合
	case 2:
		// 文字の出力
		cout << "小吉\n";
		// switchの終了
		break;
	// 3の場合
	case 3:
		// 文字の出力
		cout << "吉\n";
		// switchの終了
		break;
	// 4の場合
	case 4:
		// 文字の出力
		cout << "末吉\n";
		// switchの終了
		break;
	// 5の場合
	case 5:
		// 文字の出力
		cout << "凶\n";
		// switchの終了
		break;
	// 6の場合
	case 6:
		// 文字の出力
		cout << "大凶\n";
		// switchの終了
		break;
	// 上記の値以外の場合
	default:
		// 文字の出力
		cout << "大吉\n";
		// switchの終了
		break;
	}
}