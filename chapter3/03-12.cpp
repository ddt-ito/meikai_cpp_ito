/*
演習3-12 前問のプログラムを書き換えて、右のように"式"として
表示するプログラムを作成せよ。
nの値: 5
1 + 2 + 3 + 4 + 5 = 15
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文を実行）
int main() {

	// 加算する値の上限値を格納するための変数nを宣言
	int integerNumber;

	// 文章の出力
	cout << "1からnまでの和を求めます。\n";

	// while()の条件を満たしている間、{}内を実行
	do {
		// 入力値の出力
		cout << "nまでの値 : ";

		// 入力から数値を受け取って代入
		cin >> integerNumber;

	// do{}を2回以上実行する条件（正の整数が入力されるまで）
	} while (integerNumber <= 0);

	// 1からnまでの和を格納するための変数を宣言、0で初期化
	int sumNumber = 0;

	// 1からnまでの和を求める
	for (int countNumber = 1; countNumber <= integerNumber; ) {

		// countNumberがnよりも小さい間、{}内を実行
		for (; countNumber < integerNumber; countNumber++) {

			// countNumberの出力
			cout << countNumber;

			// 記号の出力
			cout << " + ";
			
			// 現時点の和にcountNumberの数値を足す
			sumNumber += countNumber;
		}
		// countNumberがnと同じ値になったとき{}内を実行
		for ( ; countNumber == integerNumber; countNumber++){

			// 現時点の和にcountNumberの数値を足す
			sumNumber += countNumber;

			// 等号と1からnの和を出力（countNumber == nのため）
			cout << countNumber << " = " << sumNumber;
		}
	}
}