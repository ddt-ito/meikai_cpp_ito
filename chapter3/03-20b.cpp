/*
演習3-20 List3-14は左下側が直角三角形を表示するプログラムであった。
直角が左上側、右下側、右上側の直角三角形を表示するプログラムをそれぞれ作成せよ。
（それぞれファイル名を「03-20a」（左上側）、「03-20b」（右下側）、「03-20c」（右上側）とする。
*/

// 03-20b

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下を実行）
int main() {

	// 一辺の長さの数値を格納するための変数を宣言
	int areaLength;

	// 文章を出力
	cout << "右下直角の三角形を表示します。\n";

	// 文章を出力
	cout << "段数は : ";

	// 入力から受け取った数値を変数に代入
	cin >> areaLength;

	// 三角形をつくるためアスタリスク、空白を出力を繰り返す
	for (int rowNumber = 1; rowNumber <= areaLength; rowNumber++) {

		// 三角形の左側部分に左上直角の三角形を空白で出力、横方向のループ
		// 行が下に進むほど出力される出力の数は少なくなる
		for (int columnNumber = 1; columnNumber <= areaLength - rowNumber; columnNumber++) {

			// 空白を出力
			cout << ' ';
		}
		// 三角形をつくるアスタリスクの出力
		// 1行中に出力される個数はrowNumberの値と等しいから
		// rowNumberの値まで横方向の出力をループ
		for (int asteriskNumber = 1; asteriskNumber <= rowNumber; asteriskNumber++) {

			// アスタリスクの出力
			cout << '*';
		}
		// 改行文字を出力(1行中の空白、アスタリスクの出力数の合計がareaLengthの値になったとき)
		cout << '\n';
	}
}