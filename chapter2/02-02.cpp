/*
演習2－2 List2-5の最後のelseを、
else if(n == 0)に変更するとどうなるかを検討せよ
*/

// 入出力ライブラリのインクルード
#include <iostream>

// 名前空間を利用
using namespace std;

// main関数（以下の文を実行）
int main()
{
	// 整数値の宣言
	int firstNumber;

	// 文字の出力
	cout << "整数値 : ";

	// 整数値を受け取って代入
	cin >> firstNumber;

	// 正の整数である場合
	if (firstNumber > 0) {

		// 文章の出力
		cout << "その整数値は正です。\n";
	}
	// 負の整数である場合
	else if (firstNumber < 0) {

		// 文章の出力
		cout << "その整数値は負です。\n";
	}
	// else if（n == o）に変更して検証
	else if (firstNumber == 0) {

		// 文章の出力
		cout << "その整数値は0です。\n";
	}
}
/*
・正の整数値を読み込んだ場合:「その整数値は正です。」が表示される。
・負の整数値を読み込んだ場合:「その整数値は負です。」が表示される。
・0を読み込んだ場合:「その整数値は0です。」が表示される。
*/