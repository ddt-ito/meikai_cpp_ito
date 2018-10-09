/*
演習1－6 List1-7のプログラムを変更して、小数部をもつ実数値をxやyに代入するプログラムを作成せよ。
その実行結果から、int型変数が整数値のみしか扱えないことを確認すること。
*/

// ヘッダの内容をインクルード
#include <iostream> 

// 名前空間を利用
using namespace std;

// main関数（以下の文を実行）
int main()
{
	// 変数x,yを宣言
	int variableSampleX;	// 変数x
	int variableSampleY;	// 変数y

	// 変数xに小数部をもつ実数を代入
	variableSampleX = 63.1;

	// 変数yに小数部をもつ実数を代入
	variableSampleY = 18.2;

	/*
	以下、int型変数が小数部をもっていても整数値のみしか扱えないことを検証
	*/

	// xの値を出力
	cout << "xの値は" << variableSampleX << "です\n";

	// yの値を出力
	cout << "yの値は" << variableSampleY << "です\n";

	// xとy合計を出力
	cout << "合計は" << variableSampleX + variableSampleY << "です\n";

	// xとyの平均を出力
	cout << "平均は" << (variableSampleX + variableSampleY) / 2 << "です\n";
}
// int型変数に小数部をもった実数値を代入しても小数部分は実行結果に反映されないことを確認。