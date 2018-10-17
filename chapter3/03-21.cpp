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
	int heightLength;

	// while()の条件を満たす間、{}を1回以上実行
	do {
		// 入力から受け取った数を変数に代入
		cin >> heightLength;
	
	// do{}が繰り返される条件（段数1以下の場合ピラミッドができないため）
	} while (heightLength < 1);

	// ピラミッドをつくるため記号の出力、縦方向にループ
	for (int rowNumber = 1; rowNumber <= heightLength; rowNumber++) {

		// ピラミッド左側の空白を出力、横方向にループ
		for (int columnNumber = rowNumber; columnNumber <= heightLength - 1; columnNumber++) {

			// 空白を出力
			cout << ' ';
		}
		// ピラミッドをつくるための記号の出力、横方向のループ
		// 初期化文にて出力するアスタリスクの残数を格納するための変数を宣言、初期化
		for (int asteriskNumber = (rowNumber - 1) * 2 + 1;
			asteriskNumber > 0 ; asteriskNumber--){

			// アスタリスクを出力
			cout << '*';
		}
		// 改行文字を出力
		cout << '\n';
	}
}