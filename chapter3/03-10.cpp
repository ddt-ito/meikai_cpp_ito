/*
演習03-10 前問とは逆に、0から正の整数値までカウントアップするプログラムを作成せよ。
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行）
int main() {

	// カウントアップの上限となる整数を格納するための変数を宣言
	int integerNumber;

	// while()を満たしている間、{}内を1回以上実行
	do {
		// 入力値の出力
		cout << "正の整数値 : ";

		// 入力から受け取った数値を変数に代入
		cin >> integerNumber;

	// do{}を繰り返す条件（正の数が入力されるまでの間）
	} while (integerNumber <= 0);

	// 文章の出力
	cout << "カウントアップします。\n";

	// 0から入力値までカウントアップする
	for (int countNumber = 0; countNumber <= integerNumber; countNumber++) {

		// 数値の出力
		cout << countNumber;

		// 改行文字の出力
		cout << "\n";
	}
}