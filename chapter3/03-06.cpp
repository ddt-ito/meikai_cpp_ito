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

	// 出力する記号の個数を格納するために変数xを宣言
	int symbolNumber;

	// 文章の出力
	cout << "何個表示しますか : ";

	// 入力から受け取った数をxに代入
	cin >> symbolNumber;

	// 以下while文のループ回数を格納するために変数yを宣言、0で初期化
	int countNumber = 0;

	// y < xである間、記号をひとつずつ出力する
	while (countNumber < symbolNumber) {

		// xの値が偶数（2で割ったときの剰余が0）の場合には'+'を出力
		if (countNumber % 2 == 0) {

			// '+'の出力
			cout << '+';
		}
		// xの値が奇数（2で割ったときの剰余が1）の場合には'-'を出力する
		else if (countNumber % 2 == 1) {

			// '-'の出力
			cout << '-';
		}
		// yの値をインクリメント
		countNumber++;
	}
	// 改行文字の出力
	cout << '\n';
}