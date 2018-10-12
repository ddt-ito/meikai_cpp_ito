/*
演習3-7 右に示すように、正の整数値を読み込んで、
その桁数を出力するプログラムを作成せよ。
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章の実行）
int main() {

	// 桁数を数える対象となる整数を格納するために変数を宣言
	int integerNumber;

	// 文章の出力
	cout << "正の整数値の桁数を表示します。\n";

	// while()の条件を満たしている間、{}内を1回以上実行
	do {
		// 入力値の出力
		cout << "正の整数値 : ";

		// 受け取った数を変数に代入
		cin >> integerNumber;

	// do{}を繰り返し実行する条件（入力値が0以下のとき）
	} while (integerNumber <= 0);

	// 入力値の桁数を出力するための変数を宣言、0で初期化
	int digitNumber = 0;

	// 入力値が0より大きい間、{}内を繰り返す
	while (integerNumber > 0) {
		
		// 入力値を10で割った値を代入
		integerNumber /= 10;

		// 桁数の値をインクリメント
		digitNumber++;

		// 入力値を10で割った値が0になった場合、桁数を示す文章を出力
		if (integerNumber == 0) {

			// 文章の出力
			cout << "その値は" << digitNumber << "桁です。\n";
		}
	}
}