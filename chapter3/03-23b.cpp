/*
演習03-23 合計だけでなく平均も求めるように、List3-15およびList3-16を
書き換えたプログラムをそれぞれ作成せよ。
（それぞれ『03-23a』, 『03-23b』とする）
*/

// 03-23b

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下を実行）
int main() {

	// 整数を加算する回数を格納するための変数を宣言
	int numberOfTimes = 0;

	// 文章の出力
	cout << "整数を加算します。\n";

	// 文章の出力
	cout << "何個加算しますか : \n";

	// 入力から受け取った数を変数に代入
	cin >> numberOfTimes;

	// 整数の合計値を格納するための変数を宣言
	double sumNumber = 0;

	// 入力された回数だけ整数の加算を繰り返す
	for (int countNumber = 1; countNumber <= numberOfTimes; countNumber++) {

		// 加算する整数を格納するための変数を宣言
		int integerNumber;

		// 文章の出力
		cout << "整数 : ";

		// 入力から受け取った数を格納するための変数を宣言
		cin >> integerNumber;

		// 入力値を現時点の合計値に加算する
		sumNumber += integerNumber;

		// 平均値を格納するための変数を宣言、平均値を求めてその値で初期化
		double averageNumber = sumNumber / countNumber;

		// for文の条件を満たさなくても、合計値が1000を超えた時点で繰り返しを抜ける
		if (sumNumber + integerNumber > 1000) {

			// 文章の出力
			cout << "\a合計が1000を超えました。\n最後の数値は無視します。\n";

			// for文を抜ける
			break;
		}
		// 1回でも数が入力された場合には合計値、平均値を出力
		if (countNumber >= 1) {

			// 合計値の出力
			cout << "合計は" << sumNumber << "です。\n";

			// 平均値の出力
			cout << "平均は" << averageNumber << "です。\n";
		}
	}
}