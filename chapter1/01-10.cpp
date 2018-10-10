/*
演習1－10 右に示すように、キーボードから読み込んだ整数値に10を加えた値と
10を減じた値を出力するプログラムを作成せよ
*/

// ヘッダの内容をインクルード
#include <iostream> 

// 名前空間を利用
using namespace std;

// main関数（以下の文を実行）
int main()
{
	// 加減する整数値の宣言
	int sampleNumber;

	// xの出力
	cout << "整数値 : ";

	// 入力から受け取った整数値をxに代入
	cin >> sampleNumber;

	// xに10を加えた値の出力
	cout << "10を加えた値は" << sampleNumber + 10 << "です。\n";

	// xから10を減じた値の出力
	cout << "10を減じた値は" << sampleNumber - 10 << "です。\n";
}