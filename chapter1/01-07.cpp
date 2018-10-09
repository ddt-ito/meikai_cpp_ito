/*
演習1－7 三つのint型変数に値を代入し、それらの合計と平均を求めるプログラムを作成せよ
*/

// 文字列を扱うためのインクルード
#include <iostream> 

// 名前空間を利用
using namespace std;

// main関数（以下の文を実行）
int main()
{
	// 整数x,y,zの宣言
	int variableSampleX;	// 整数x
	int variableSampleY;	// 整数y
	int variableSampleZ;	// 整数z

	// xに63を代入
	variableSampleX = 63;

	// yに18を代入
	variableSampleY = 18;

	// zに23を代入
	variableSampleZ = 23;

	//xの値を出力
	cout << "xの値は" << variableSampleX << "です\n";

	//yの値を出力
	cout << "yの値は" << variableSampleY << "です\n";

	//zの値を出力
	cout << "zの値は" << variableSampleZ << "です\n";

	//xとy合計を出力
	cout << "合計は" << variableSampleX + variableSampleY + variableSampleZ << "です\n";

	//xとyの平均を出力
	cout << "平均は" << (variableSampleX + variableSampleY + variableSampleZ) / 3 << "です\n";
}

// int型変数に小数部をもった実数値を代入しても小数部分は実行結果に反映されないことを確認。