/*
演習3-1 読み込んだ整数値の符号を判定するList2-5(p.44)を、
好きなだけ何度でも入力・表示を繰り返せるようにしたプログラムを作成せよ。
*/

// ライブラリのインクルード
#include <string>	// 文字列
#include <iostream>	// 入出力

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行。）
int main()
{
	// 文字列を格納するための変数を宣言
	string retryProgram;

	// while()内の条件を満たしている間、{}内を一回以上実行
	do {
		// 符号を判定する整数を格納する変数の宣言
		int integerNumber;

		// 整数値を出力
		cout << "整数値 : ";

		// 入力から受け取った数値を代入
		cin >> integerNumber;

		// 数値が0より大きい場合
		if (integerNumber > 0) {

			// 正である旨の文章の出力
			cout << "その値は正です。\n";
		}
		// 数値が0より小さい場合
		else if (integerNumber < 0) {

			// 負である旨の文章の出力
			cout << "その値は負です。\n";
		}
		// 上記以外（0）の場合
		else {

			// 文章の出力
			cout << "その値はゼロです。\n";
		}
		// 文章の出力
		cout << "もう一度？ Y…Yes / N…No : ";

		// 文字を受け取ってstring型の変数に代入
		cin >> retryProgram;

	// do｛｝を再度実行する条件（"Y"もしくは"y"を入力した場合）
	} while (retryProgram == "Y" || retryProgram == "y");
}