/*
演習1－13 以下に示すプログラムを作成せよ。
・1桁の正の整数値（すなわち1以上9以下の値）をランダムに生成して表示
・1桁の負の整数値（すなわち-9以上-1以下の値）をランダムに生成して表示
・2桁の正の整数値（すなわち10以上99以下の値）をランダムに生成して表示
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
	// 現在時刻から乱数の種を決定
	srand(time(NULL));

	// 0~9の乱数を宣言、初期化
	int oneDigitNumber = rand() % 9 + 1;

	// -9~-1の乱数の値を宣言、初期化
	int negativeNumber = -(rand() % 9 + 1);

	// 10~99の乱数の値を宣言、初期化
	int twoDigitNumber = rand() % 90 + 10;

	// 0~9の乱数の値の出力
	cout << "1桁の正の整数値 : " << oneDigitNumber << "\n";

	// -9~-1の乱数の値の出力
	cout << "1桁の負の整数値 : " << negativeNumber << "\n";

	// 10~99の乱数の値の出力
	cout << "2桁の正の整数値 : " << twoDigitNumber << "\n";
}