/*
演習3-3 二つの整数値を読み込んで、
小さいほうの数以上で大きいほうの数以下の全整数を、
小さいほうから順に表示するプログラムを作成せよ。
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行。）
int main() {

	// 整数x,整数yの宣言
	int integerNumberX;	// 整数x
	int integerNumberY;	// 整数y

	// 文字の出力
	cout << "整数x : \n";

	// 数を受け取って代入
	cin >> integerNumberX;

	// 文字の出力
	cout << "整数y : \n";

	// 数を受け取って代入
	cin >> integerNumberY;

	// y > xの場合には、x > yのようにする。
	if (integerNumberY > integerNumberX) {

		// 仮の入れ物の宣言、xの数で初期化
		int temporaryNumber = integerNumberY;

		// xの数をyに代入
		integerNumberY = integerNumberX;

		// 仮の入れ物の数をxに代入
		integerNumberX = temporaryNumber;
	}
	// 以下を実行
	do {
		// 数字の出力
		cout << integerNumberY << " ";

		// yに1を足した数をyに代入
		integerNumberY = integerNumberY + 1;

		// ()内である限りdo{}を繰り返す
	} while (integerNumberY <= integerNumberX);
}