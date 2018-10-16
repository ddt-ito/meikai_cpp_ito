/*
演習3-19 n段の正方形を表示するプログラムを作成せよ。
右に示すのは、nが3のときの実行結果である。
***
***
***
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下を実行）
int main() {

	// 正方形の一辺の長さとなる数値を格納するための変数を宣言
	int areaLength;

	// while()内を満たしている間、{}内を1回以上実行
	do {
		// 文章の出力
		cout << "段数は : \n";

		// 入力から受け取った数値を変数に代入
		cin >> areaLength;

	// 繰り返し実行する条件（一辺の長さが2以上でなければ正方形を作れないため）
	} while (areaLength < 2);

	// 正方形を形作る記号を縦方向に出力
	for (int lineNumber = 1; lineNumber <= areaLength; lineNumber++) {

		// 正方形を形作る記号を横方向に出力
		for (int columnNumber = 1; columnNumber <= areaLength; columnNumber++) {

			// 記号の出力
			cout << '*';
		}
		// 改行文字の出力（入力値の列数まで横方向に記号が出力された時）
		cout << '\n';
	}
}