/*
演習3-6 読み込んだ値の個数だけ記号文字を表示するプログラムを作成せよ。
+と-を交互に表示すること。
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

	// 入力から受け取った数をxに代入
	cin >> integerNumberX;

	// 整数を格納するために変数yを宣言、0で初期化
	int integerNumberY = 0;

	// y < xである間、記号を出力する
	while (integerNumberY < integerNumberX) {

		// xの値が偶数の場合には'+'を出力
		if (integerNumberY % 2 == 0) {

			// '+'の出力
			cout << '+';
		}
		// xの値が奇数の場合には'-'を出力する
		else if (integerNumberY % 2 == 1) {

			// '-'の出力
			cout << '-';
		}
		// yの値をインクリメント
		integerNumberY++;
	}
	// 改行文字の出力
	cout << '\n';
}