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

	// 出力するアスタリスクの個数を格納するために変数xを宣言
	int asteriskNumber;

	// 文章の出力
	cout << "何個*を表示しますか : ";

	// 受け取った数を変数xに代入
	cin >> asteriskNumber;

	// xの値が1以上の場合にのみアスタリスク出力後に改行文字を出力
	if (asteriskNumber >= 1) {

		// 以下while文のループ回数を格納するために変数yを宣言、0で初期化
		int countNumber = 0;

		// yの値がxの値よりも小さい間、アスタリスクをひとつずつ出力する
		while (countNumber < asteriskNumber) {

			// アスタリスクの出力
			cout << '*';

			// yの値をインクリメント
			countNumber++;
		}
		// 改行文字の出力
		cout << '\n';
	}
}