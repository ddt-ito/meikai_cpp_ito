/*
演習3-8 読み込んだ値が1未満であれば改行文字を出力しないように、
List3-10を書き換えたプログラムを作成せよ。
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章の実行）
int main() {

	// 出力するアスタリスクの数を格納するための変数を宣言
	int asteriskNumber;

	// 文章の出力
	cout << "何個*を表示しますか。 : ";

	// 入力から受け取った数を変数に代入
	cin >> asteriskNumber;

	// 入力値が1未満のとき、改行文字を出力しない
	if (asteriskNumber >= 1) {

		// 入力値の数だけアスタリスクを出力する
		for (int countNumber = 0; countNumber < asteriskNumber; countNumber++) {

			// アスタリスクの出力
			cout << '*';
		}
		// 改行文字の出力
		cout << "\n";
	}
}