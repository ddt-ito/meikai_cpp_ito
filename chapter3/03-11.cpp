/*
演習3-11 1からnまでの和を求めるList3-4をfor文で表現せよ。
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文を実行）
int main() {

	// 加算する数値の上限値を格納するための変数nを宣言
	int integerNumber;

	// 文章の出力
	cout << "1からnまでの和を求めます。\n";

	// while()の条件を満たしている間、{}内を実行
	do {
		// 入力値の出力
		cout << "nの値 : ";

		// 入力から数値を受け取って変数nに代入
		cin >> integerNumber;
	
	// do{}を2回以上実行する条件（正の整数が入力されるまで）
	} while (integerNumber <= 0);

	// 1からnまでの和を格納するための変数を宣言、0で初期化
	int sumNumber = 0;

	// 1からnまでの和を求める
	for (int countNumber = 1; countNumber <= integerNumber; countNumber++) {

		// countNumberの値を、現在の和に加える
		sumNumber += countNumber;
	}
	// 1からnまでの和を出力
	cout << "1から" << integerNumber << "までの和は" << sumNumber << "です。\n";
}