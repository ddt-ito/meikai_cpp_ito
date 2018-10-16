/*
演習3-22 n段の下向き数字ピラミッドを表示するプログラムを作成せよ（右図は4段の例）。
第i行目にはi % 10によって得られる数字を表示すること。
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下を実行）
int main() {

	// 段数を格納するための変数を宣言
	int heightNumber;

	// while()の条件を満たす間、{}を1回以上実行
	do {
		// 入力から受け取った数を変数に代入
		cin >> heightNumber;

	// do{}が繰り返される条件（正の整数が入力されるまで）
	} while (heightNumber < 1);

	// ピラミッドをつくるための記号の出力、縦方向にループ
	for (int lineNumber = 1; lineNumber <= heightNumber; lineNumber++) {

		// ピラミッド左側の空白を出力、横方向にループ
		for (int columnNumber = 1; columnNumber <= lineNumber; columnNumber++) {

			// 空白を出力
			cout << ' ';
		}
		// ピラミッドを形作るための数字を出力、横方向にループ
		for (int columnNumber = 1; columnNumber <= (heightNumber - lineNumber) * 2 + 1; columnNumber++) {

			// lineNumberを10で割ったときの剰余を1列ごとに出力
			cout << lineNumber % 10;
		}
		// 改行文字を出力
		cout << '\n';
	}
}