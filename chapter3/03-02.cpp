/*
演習3-2 2桁の整数値（10~99)を当てさせる《数当てゲーム》を作成せよ。
*/

// ライブラリのインクルード
#include <ctime>	// 日付時刻
#include<cstdlib>	// 乱数生成
#include <iostream>	// 入出力

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行。）
int main()
{
	// 現在時刻から乱数の種を決定
	srand(time(NULL));

	// 整数の宣言、10~99の乱数を生成して初期化
	int randomNumber = rand() % 90 + 10;

	// 生成した乱数を当てる際に用いる整数の宣言
	int integerNumber;

	// ゲーム開始のメッセージを出力
	cout << "数当てゲーム開始!!!\n";

	// 入力する数の範囲の説明文を出力
	cout << "10~99の数を当ててください。\n";

	// while()を満たしている間、do{}を実行
	do {
		// 数の入力を尋ねる文章の出力
		cout << "いくつかな。\n";

		// 受け取った値を代入
		cin >> integerNumber;

		// 受け取った値 > 生成した乱数 の場合
		if (integerNumber > randomNumber) {

			// 受け取った値 > 生成した乱数 である旨の文章の出力
			cout << "\aもっと小さな値だよ。\n";
		}
		// 受け取った値 < 生成した乱数 の場合
		else if (integerNumber < randomNumber) {

			// 受け取った値 < 生成した乱数 である旨の文章の出力
			cout << "\aもっと大きな値だよ。\n";
		}
	// do{}を繰り返す条件（受け取った値 ≠ 生成した乱数 の場合）
	} while (integerNumber != randomNumber);

	// 受け取った値 = 生成した乱数 である旨の文章の出力
	cout << "正解です。\n";
}