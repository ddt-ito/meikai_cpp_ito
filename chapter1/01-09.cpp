/*
演習1－9 右に示すように、キーボードから読み込んだ整数値を
そのまま反復して表示するプログラムを作成せよ。
*/

// ヘッダの内容をインクルード
#include <iostream>

// 名前空間を利用
using namespace std;

// main関数（以下の文を実行）
int main()
{
	// 整数の値を宣言
	int sampleNumber;

	// 文章の出力
	cout << "整数値 : ";

	// xに整数値を標準入力から受け取って代入
	cin >> sampleNumber;

	// 文章の出力
	cout << sampleNumber << "と入力しましたね。\n";
}