/*
演習3-21 n段のピラミッドを表示するプログラムを作成せよ（右図は4段の例）。
第i行目には（i - 1）* 2 + 1個の'*'記号を表示すること（最終行である第n行目
には（n - 1）* 2 + 1個の'*'記号を表示することになる。
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
		for (int columnNumber = lineNumber; columnNumber <= heightNumber - 1; columnNumber++) {

			// 空白を出力
			cout << ' ';
		}
		// ピラミッド部分をアスタリスクで出力、横方向のループ
		for (int asteriskNumber = 1;
			asteriskNumber <= (lineNumber - 1) * 2 + 1; asteriskNumber++){

			cout << '*';
		}
		// 改行文字を出力
		cout << '\n';
	}
}