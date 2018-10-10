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

	// xの値を出力
	cout << "整数x : \n";

	// 数を受け取ってxに代入
	cin >> integerNumberX;

	// yの値を出力
	cout << "整数y : \n";

	// 数を受け取ってyに代入
	cin >> integerNumberY;

	/*
	y > xの場合、それぞれに代入された値を交換し、
	x > yのようにする。
	*/
	if (integerNumberY > integerNumberX) {

		// 仮の入れ物の宣言、yに代入されていた値で初期化
		int temporaryNumber = integerNumberY;

		// xに代入されていた値をyに代入
		integerNumberY = integerNumberX;

		// 仮の入れ物に代入されていた値をxに代入
		integerNumberX = temporaryNumber;
	}
	// while()を満たしている間、do{}を実行
	do {
		// yの値を出力
		cout << integerNumberY << " ";

		// yに1を足した値をyに代入
		integerNumberY = integerNumberY + 1;

	// do{}を繰り返す条件（y <= xである間）
	} while (integerNumberY <= integerNumberX);
}