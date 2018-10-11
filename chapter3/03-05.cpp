/*
演習3-5 読み込んだ値が1未満であれば改行文字を出力しないように
List 3-6を書き換えたプログラムを作成せよ。
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行。）
int main() {
	// 整数を格納するために変数xを宣言
	int integerNumberX;

	// 文章の出力
	cout << "何個*を表示しますか : ";

	// 受け取った数をxに代入
	cin >> integerNumberX;

	// xの値が1以上の場合にアスタリスクを出力
	if (integerNumberX >= 1) {

		// 整数を格納するための変数yを宣言、0で初期化
		int integerNumberY = 0;

		// yの値がxの値よりも小さい間、{}内を実行する
		while (integerNumberY < integerNumberX) {

			// アスタリスクの出力
			cout << '*';

			// yの値をインクリメント
			integerNumberY++;
		}
		// 改行文字の出力
		cout << '\n';
	}
}