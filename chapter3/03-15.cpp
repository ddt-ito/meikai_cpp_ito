/*
演習3-15 読み込んだ整数値の全約数を表示するList3-12を書きかえて、
約数の表示が終了した後に、約数の個数を表示するプログラムを作成せよ。
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下を実行）
int main() {

	// 整数を格納するための変数を宣言
	int integerNumber;

	// 入力値の出力
	cout << "整数値 : ";
	
	// 入力から受け取った数を変数に代入
	cin >> integerNumber;

	// 入力値の約数の個数を格納するための変数を宣言、0で初期化
	int countNumber = 0;

	// 1から入力値まで、それぞれの値が入力値の約数であるかどうかを判定する。
	for (int divisorNumber = 1; divisorNumber <= integerNumber; divisorNumber++) {

		// divisorNumberが入力値の約数であるかどうか
		if (integerNumber % divisorNumber == 0) {

			// 入力値の約数を出力
			cout << divisorNumber << '\n';

			// 入力値の個数をインクリメント
			countNumber++;
		}
	}
	// 文章の出力
	cout << "約数は" << countNumber << "個です。\n";
}