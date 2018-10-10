/*
演習1－11 右に示すように、2つの実数値を読み込み、
その合計と平均を求めて表示するプログラムを作成せよ。
*/

// ヘッダの内容をインクルード
#include <iostream> 

// 名前空間を利用
using namespace std;

// main関数（以下の文を実行）
int main()
{
	// 実数xの値の宣言
	double sampleNumberX;

	// 実数yの値の宣言
	double sampleNumberY;

	// xに実数値を受け取って代入
	cin >> sampleNumberX;

	// yに実数値を受け取って代入
	cin >> sampleNumberY;

	// xの表示
	cout << "xの値 : " << sampleNumberX << "\n";

	// yの表示
	cout << "yの値 : " << sampleNumberY << "\n";

	// x + yの値
	cout << "合計は" << sampleNumberX + sampleNumberY << "です\n";

	// (x + y)/2の値
	cout << "平均は" << (sampleNumberX + sampleNumberY) / 2 << "です\n";
}