/*
演習3-24 合計だけでなく平均も求めるように、List3-17を書き換えたプログラムを作成せよ。
読み込んだ負の数の個数は平均を求める際の分母から除外すること。
*/

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
	cout << "何個加算しますか : ";

	// 入力から受け取った数を変数に代入
	cin >> numberOfTimes;

	// 整数の合計値を格納するための変数を宣言、0で初期化
	int sumNumber = 0;

	// 負の数が入力されたときの回数を格納するための変数
	int invalidNumber = 0;

	// 現在の加算回数を格納するための変数を宣言、初期化
	// はじめに入力した整数の加算回数だけ加算を繰り返す
	for (int countNumber = 1; countNumber <= numberOfTimes; countNumber++) {

		// 加算する整数を格納するための変数を宣言
		int integerNumber;

		// 文章の出力
		cout << "整数 : ";

		// 入力から受け取った数を変数に代入
		cin >> integerNumber;

		// 負の数の入力をした場合
		// 加算は行わない
		if (integerNumber < 0){

			// 文章の出力
			cout << "\a負の数は加算しません。また、平均を求める際の分母から除外します。\n";

			// 負の数が入力された回数をインクリメント
			invalidNumber++;

			// ループ文内の以降文をスキップ
			continue;
		} 
		// 入力した整数値を現時点の合計値に加算
		sumNumber += integerNumber;
	}
	// 合計値の出力
	cout << "合計は" << sumNumber << "です。\n";

	// 平均値の出力
	cout << "平均は" << sumNumber / (numberOfTimes - invalidNumber) << "です。";
}