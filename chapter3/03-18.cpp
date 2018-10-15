/*
演習3-18 九九の表を表示するList3-13を、setw操作子を
用いることなく実現するように作成せよ
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下を実行）
int main() {

	// 9行目まで数の出力を縦方向に繰り返す
	for (int lineNumber = 1; lineNumber <= 9; lineNumber++) {

		// 9列目まで数の出力を横方向に繰り返す
		for (int rowNumber = 1; rowNumber <= 9; rowNumber++) {

			// 積の桁数が1桁である時
			if (lineNumber * rowNumber <= 9) {

				// 半角文字2文字分の空白を出力
				cout << "  " << lineNumber * rowNumber;
			}
			// （九九の表において積は1桁の場合と2桁の場合の2通りしかないため、
			// ここでelseを用いることができる）
			else {

				// 半角文字1文字分の空白を出力
				cout << " " << lineNumber * rowNumber;
			}
		}
		// 改行文字の出力（横方向に9列目まで数値が出力されている時）
		cout << '\n';
	}
}