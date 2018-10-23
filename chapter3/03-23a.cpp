/*
演習03-23 合計だけでなく平均も求めるように、List3-15およびList3-16を
書き換えたプログラムをそれぞれ作成せよ。
（それぞれ『03-23a』, 『03-23b』とする）
*/

// 03-23a

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下を実行）
int main() {

	// 整数を加算する回数を格納するための変数を宣言
	int numberOfTimes;

	// 文章の出力
	cout << "整数を加算します。\n";

	// 文章の出力
	cout << "何個加算しますか : \n";

	// 入力から受け取った数を変数に代入
	cin >> numberOfTimes;

	// 整数の合計値を格納するための変数を宣言、0で初期化
	double sumNumber = 0;

	// 合計値を加算回数で割った値を格納するための変数を宣言
	double averageNumber;

	// 入力された数だけ整数の加算を繰り返す
	for (int countNumber = 1; countNumber <= numberOfTimes; countNumber++) {

		// 加算する整数を格納するための変数を宣言
		int integerNumber;

		// 文章の出力
		cout << "整数（0で終了）: ";

		// 入力から受け取った数を変数に代入
		cin >> integerNumber;
		
		// 0を入力した時点で整数の加算を終了
		if (integerNumber == 0) {

			// for文から抜ける
			break;
		}
		// 入力値を現時点の合計値に加算する
		sumNumber += integerNumber;

		// 平均値を算出
		averageNumber = sumNumber / countNumber;
	}
	// 合計値の出力
	cout << "合計は" << sumNumber << "です。\n";

	// 平均値の出力
	cout << "平均は" << averageNumber << "です。\n";
}