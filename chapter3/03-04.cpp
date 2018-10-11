/*
演習3-4 List 3-4 のwhile文終了時にxの値が-1になることを確認できるように
書きかえたプログラムを作成せよ。
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行。）
int main() {
	// 入力値を格納するための変数を宣言
	int integerNumber;

	// 文章の出力
	cout << "カウントダウンします。\n";

	// while()内の条件を満たしている間、{}内を1回以上実行
	do {
		// 整数値を出力
		cout << "正の整数値 : ";

		// 入力から受け取った数を整数値に代入
		cin >> integerNumber;

	// do{}を繰り返す条件（整数値 <= 0である間）
	} while (integerNumber <= 0);

	// 整数値 >= 0である間、{}内を実行
	while (integerNumber >= 0) {

		// 整数値の出力
		cout << integerNumber << "\n";

		// 整数値を1減らす
		integerNumber--;
	}
	// while文終了時の整数値が-1であることの確認
	cout << "カウントダウン終了時の整数値 : " << integerNumber;
}