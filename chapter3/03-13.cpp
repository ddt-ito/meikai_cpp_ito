/*
演習3-13 身長と標準体重の対応表を表示するプログラムを作成せよ。
表示する身長の範囲（開始値/終了値/増分）は、整数値として読み込む
こと
※標準体重は（身長-100）* 0.9によって求める
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文を実行）
int main() {

	// 身長の数値を格納するための変数を宣言
	int lowerNumber;	// 開始値
	int upperNumber;	// 終了値
	int integerNumber;	// 増分

	// 文章の出力
	cout << "何cmから : ";

	// 入力から値を受け取って変数に代入
	cin >> lowerNumber;

	// 文章の出力
	cout << "何cmから : ";

	// 入力から値を受け取って変数に代入
	cin >> upperNumber;

	// 文章の出力
	cout << "何cmごと : ";

	// 入力から値を受け取って変数に代入
	cin >> integerNumber;

	// 文章の出力
	cout << "身長　標準体重\n";

	// 身長の値から標準体重を出力
	for ( ; lowerNumber <= upperNumber; lowerNumber + integerNumber) {
		
		// 身長の値とその値から算出した標準体重の値を出力
		cout << lowerNumber << "   " << (lowerNumber - 100) * 0.9 << "\n";

		// lowerNumberが終了値を超えるまでの間、integerNumberの値を加える
		lowerNumber += integerNumber;
	}
}