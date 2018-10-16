/*
演習3-20 List3-14は左下側が直角三角形を表示するプログラムであった。
直角が左上側、右下側、右上側の直角三角形を表示するプログラムをそれぞれ作成せよ。
（それぞれファイル名を「03-20a」（左上側）、「03-20b」（右下側）、「03-20c」（右上側）とする。
*/

// 03-20c

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下を実行）
int main() {

	// 一辺の長さの数値を格納するための変数を宣言
	int areaNumber;

	// 文章を出力
	cout << "右上直角の三角形を表示します。\n";

	// 入力値を出力
	cout << "段数は : ";

	// 入力から受け取った数値を変数に代入
	cin >> areaNumber;

	// 三角形をつくる縦方向のループ
	for (int lineNumber = 1; lineNumber <= areaNumber; lineNumber++) {

		// 三角形の左側部分の空白の出力、横方向のループ
		for (int columnNumber = 1; columnNumber < lineNumber; columnNumber++) {

			// 空白を出力
			cout << ' ';
		}
		// 三角形をつくるアスタリスクの出力、横方向のループ
		for (int columnNumber = lineNumber; columnNumber <= areaNumber; columnNumber++) {

			// アスタリスクの出力
			cout << '*';
		}
		// 改行文字を出力（lineNumberの値の数だけ記号を横方向に出力した時）
		cout << '\n';
	}
}