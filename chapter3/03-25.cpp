/*
演習3-25 List3-3の数あてゲームのプレーヤが値を入力できる回数に制限を設けたプログラムを作成せよ。
制限回数内に当てられなかった場合は、正解を表示してゲームを終了すること。
*/

// ライブラリのインクルード
#include <ctime>	// 日付時刻
#include <cstdlib>	// 乱数生成
#include <iostream>	// 入出力

// 名前空間の利用
using namespace std;

// メイン関数（以下を実行）
int main() {

	// 現在時刻を乱数の種として使う
	srand(time(NULL));

	// 整数を格納するための変数を宣言、0～99までの乱数の値で初期化
	int randomNumber = rand() % 100;

	// 入力した値を格納するための変数を宣言
	int inputNumber;

	// 文章の出力
	cout << "数あてゲーム開始！！\n"; 
	
	// 文章の出力
	cout << "0～99の数を当ててください。\n";

	// 入力回数を格納するための変数を宣言、0で初期化
	int countNumber = 0;

	const int COUNT_LIMIT = 3;

	// while()内の条件を満たす間、{}内を1回以上実行
	do {
		// 文章の出力
		cout << "いくつかな。\n";

		// 入力から受け取った数を変数に代入
		cin >> inputNumber;

		// 入力回数をインクリメント
		countNumber++;

		// while()の条件に拘わらず入力回数が制限回数に達したときにループを抜ける
		if (countNumber == COUNT_LIMIT) {

			// ループを抜ける
			break;
		}
		// 乱数の値が入力値よりも小さいときに文章を出力
		if (inputNumber > randomNumber) {

			// 文章の出力
			cout << "\aもっと小さな数だよ。\n";
		}
		// 乱数の値が入力値よりも大きいとき
		else if (inputNumber < randomNumber) {

			// 文章の出力
			cout << "\aもっと大きな数だよ。\n";
		}
	// {}内を繰り返す条件（乱数の値に等しい値が入力されるまで）
	} while (inputNumber != randomNumber);

	// 入力値と乱数の値が等しくないとき
	if (inputNumber != randomNumber) {

		// 生成した乱数値の出力
		cout << "正解は" << randomNumber << "です。\n";
	}
	// 入力値と乱数の値が等しいとき
	else {
		// 文章の出力
		cout << "正解です。\n";
	}
}