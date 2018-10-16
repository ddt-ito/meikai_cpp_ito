/*
演習3-20 List3-14は左下側が直角三角形を表示するプログラムであった。
直角が左上側、右下側、右上側の直角三角形を表示するプログラムをそれぞれ作成せよ。
（それぞれファイル名を「03-20a」（左上側）、「03-20b」（右下側）、「03-20c」（右上側）とする。
*/

// 03-20a

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下を実行）
int main() {

	// 一辺の長さの数値を格納するための変数を宣言
	int areaLength;

	// 文章を出力
	cout << "左上直角の三角形を表示します。\n";

	// 文章を出力
	cout << "段数は : ";

	// 入力から受け取った数値を変数に代入
	cin >> areaLength;

	// 三角形をつくるための記号の出力、縦方向にループ
	for (int rowNumber = 0; rowNumber < areaLength; rowNumber++) {

		// 三角形をつくるための記号の出力、横方向にループ
		// 段が下がるにつれて出力するアスタリスクの数を減らす
		for (int columnNumber = 0; columnNumber < areaLength - rowNumber ; columnNumber++) {

			// 記号を出力
			cout << '*';
		}
		// (areaLength - rowNumber)の数だけアスタリスクを出力した後、改行
		cout << '\n';
	}
}