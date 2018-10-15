/*
演習03-14 演習3-8を書きかえて、5個表示するごとに改行するプログラムを作成せよ。
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下を実行）
int main() {

	// 整数を格納するための変数を宣言
	int integerNumber;
	
	// while()の条件を満たしている間{}内を1回以上実行
	do {
		// 文章の出力
		cout << "何個*を表示しますか。 : ";
	
		// 入力から受け取った数を代入
		cin >> integerNumber;

	// ループする条件（正の整数が入力されるまでの間）
	} while (integerNumber < 1);

	// 入力した数値の数だけアスタリスクを出力する
	for (int countNumber = 0; countNumber < integerNumber; countNumber++) {

		// アスタリスクの出力
		cout << '*';

		/*
		アスタリスクを5個出力するごとに改行文字を出力する条件
		（countNumberを5で割ったときの剰余が4であるとき、
		アスタリスクは1行に5個出力されている。）
		*/
		if (countNumber % 5 == 4) {

			// 改行文字の出力
			cout << "\n";
		}
	}
}