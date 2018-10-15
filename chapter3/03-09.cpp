/*
演習03-09 正の整数値を0までカウントダウンするList 3-4をfor文で実現せよ。
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行）
int main() {

	// カウントダウンする整数を格納するための変数を宣言
	int integerNumber;

	// 文章の出力
	cout << "カウントダウンします。\n";

	// while()を満たしている間、{}内を実行
	do {
		// 入力値を出力
		cout << "正の整数値 : ";

		// 入力から受け取った数を変数に代入
		cin >> integerNumber;

	// do{}を繰り返す条件（入力値が0以下である間）
	} while (integerNumber <= 0);

	// 0から入力値まで、大きい順に出力する
	for (int countNumber = integerNumber; countNumber >= 0; countNumber--) {

		// 入力値を出力する
		cout << countNumber << "\n";
	}
}