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
	int areaLength;

	// 文章を出力
	cout << "右上直角の三角形を表示します。\n";

	// 入力値を出力
	cout << "段数は : ";

	// 入力から受け取った数値を変数に代入
	cin >> areaLength;

	// 三角形をつくるためアスタリスク、空白の出力を繰り返す
	for (int rowNumber = 1; rowNumber <= areaLength; rowNumber++) {

		// 三角形の左側部分に空白で左上直角の三角形を出力、横方向のループ
		for (int columnNumber = 1; columnNumber < rowNumber; columnNumber++) {

			// 空白を出力
			cout << ' ';
		}
		// 三角形をつくるアスタリスクの出力、横方向のループ
		for (int columnNumber = rowNumber; columnNumber <= areaLength; columnNumber++) {

			// アスタリスクの出力
			cout << '*';
		}
		// 改行文字を出力（areaLengthの値だけ空白、アスタリスクを出力してから）
		cout << '\n';
	}
}