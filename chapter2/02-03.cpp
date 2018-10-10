/*
演習2-3 二つのint型変数a,bに値を読み込んで、その大小関係を以下のいずれかで表示するプログラムを作成せよ。
『aのほうが大きいです。』『bのほうが大きいです。』『aとbは同じ値です。』
*/

// 入出力ライブラリのインクルード
#include <iostream> 

// 名前空間を利用
using namespace std;

// main関数（以下の文を実行）
int main()
{
	// 整数値a,bの宣言
	int firstNumber;	// 整数a
	int secondNumber;	// 整数b

	// 整数値a、入力から受け取って代入
	cin >> firstNumber;

	// 整数値b、入力から受け取って代入
	cin >> secondNumber;

	// a > bの場合
	if (firstNumber > secondNumber) {

		// 文章の出力
		cout << "aのほうが大きいです。\n";
	}
	// a < bの場合
	else if (firstNumber < secondNumber) {

		// 文章の出力
		cout << "bのほうが大きいです。\n";
	}
	// a = bの場合
	else if (firstNumber == secondNumber) {

		// 文章の出力
		cout << "aとbは同じ値です。\n";
	}
}