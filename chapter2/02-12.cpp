/*
演習2-12 List2-13と同様に、二つの整数値を読み込んで、小さいほうの値とおおきいほうの値の両方を表示するプログラムを作成せよ。
ただし、二つの整数値が等しい場合は、右に示すように『二つの値は同じです。』と表示すること。
*/

// 入出力ライブラリのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行）
int main()
{
	// 整数a,bの宣言
	int integerNumberA;	// 整数a
	int integerNumberB;	// 整数b

	// 文字の出力
	cout << "整数a : ";

	// 受け取った値を整数aに代入
	cin >> integerNumberA;

	// 文字の出力
	cout << "整数b : ";

	// 受け取った値を整数bに代入
	cin >> integerNumberB;

	// 大きいほうの値と小さいほうの値の宣言
	int minimumNumber;	// 大きいほうの値
	int maximumNumber;	// 小さいほうの値

	// a = bのとき
	if (integerNumberA == integerNumberB) {

		// 文字の出力
		cout << "二つの値は同じです\n";
	}
	// a ≠ bのとき
	else {

		// a > bのとき、aを最小値、bを最大値に代入
		if (integerNumberA < integerNumberB) {

			// aを小さいほうの値に
			minimumNumber = integerNumberA;

			// bを大きいほうの値に
			maximumNumber = integerNumberB;

		// b < aのとき
		}else {
			// bを小さいほうの値に
			minimumNumber = integerNumberB;

			// aを大きいほうの値に
			maximumNumber = integerNumberA;
		}
		// 小さいほうの値の出力
		cout << "小さいほうの値は" << minimumNumber << "です。\n";

		// 大きいほうの値の出力
		cout << "大きいほうの値は" << maximumNumber << "です。\n";
	}
}