/*
演習3-26 人間とコンピュータとが対戦するジャンケンプログラムを作成せよ。
・いずれか一方が3回まで勝つまで繰り返すもの。
・人間が望む限り何度でも繰り返せるようにするもの。
など、複数のパターンのプログラムを作ること。
（上からそれぞれ『03-26a』、『03-26b』とする）
*/

// 03-26b

// ライブラリのインクルード
#include <ctime>	// 日付時刻
#include <string>	// 文字列
#include <cstdlib>	// 乱数生成
#include <iostream>	// 入出力

// 名前空間の利用
using namespace std;

// メイン関数（以下を実行）
int main() {

	// 文字列を格納するための変数を宣言
	string retryProgram;

	// while()内の条件を満たす間、{}内を1回以上繰り返す
	do {
		// 現在時刻から乱数の種を決定
		srand(time(NULL));

		// 入力から受け取った数を代入するための変数の宣言
		int inputNumber;

		// 変数を宣言、0~2の乱数で初期化
		int randomNumber = rand() % 3;

		// while()内の条件を満たす間、{}内を1回以上繰り返す
		do {
			// 文章の出力
			cout << "手を選んでください（0…グー/1…チョキ/2…パー） : ";

			// 入力から受け取った数を変数inputNumberに代入
			cin >> inputNumber;

		// 繰り返す条件（0~2の値が入力されるまで）
		} while (inputNumber < 0 || inputNumber > 2);

		// 入力した値によってジャンケンの手を決定
		switch (inputNumber) {
		// グーの場合
		case 0:
			// 文章の出力
			cout << "グー\n";
			// switch文を終了
			break;
		// チョキの場合
		case 1:
			// 文章の出力
			cout << "チョキ\n";
			// switch文を終了
			break;
		// パーの場合
		case 2:
			// 文章の出力
			cout << "パー\n";
			// switch文を終了
			break;
		// どのラベルとも一致しない場合
		default:
			// switch文を終了
			break;
		}
		// 文章の出力
		cout << "コンピューターが選んだ手 : ";

		// グーとなる値を入力した場合のジャンケンの勝敗の判定
		if (inputNumber == 0) {

			// 生成された乱数の値によって分岐
			switch (randomNumber) {
			// グーの場合
			case 0:
				// 文章の出力
				cout << "グー、あいこ。\n";
				// あいこのときは勝敗の数をカウントせずにswitch文を終了
				break;
			// チョキの場合
			case 1:
				// 文章の出力
				cout << "チョキ、あなたの勝ち。\n";
				// switch文を終了
				break;
			// パーの場合
			case 2:
				// 文章の出力
				cout << "パー、であなたの負け。\n";
				// switch文を終了
				break;
			// どのラベルとも一致しない場合
			default:
				// switch文を終了
				break;
			}
		}
		// チョキとなる値を入力した場合のジャンケンの勝敗の判定
		if (inputNumber == 1) {

			// 生成された乱数の値によって分岐
			switch (randomNumber) {
			// グーの場合
			case 0:
				// 文章の出力
				cout << "グー、であなたの負け。\n";
				// switch文を終了
				break;
			// チョキの場合
			case 1:
				cout << "チョキ、であいこ。\n";
				// switch文を終了
				break;
			// パーの場合
			case 2:
				cout << "パー、であなたの勝ち。\n";
				// switch文を終了
				break;
			// どのラベルとも一致しない場合
			default:
				// switch文を終了
				break;
			}
		}
		// パーとなる値を入力した場合のジャンケンの勝敗の判定
		if (inputNumber == 2) {

			// 生成された乱数の値によって分岐
			switch (randomNumber) {
			// グーの場合
			case 0:
				//文章の出力
				cout << "グー、であなたの勝ち。\n";
				// switch文を終了
				break;
			// チョキの場合
			case 1:
				//文章の出力
				cout << "チョキ、であなたの負け。\n";
				// switch文を終了
				break;
			// パーの場合
			case 2:
				//文章の出力
				cout << "パー、であいこ。\n";
				// switch文を終了
				break;
			// どのラベルとも一致しない場合
			default:
				// switch文を終了
				break;
			}
		}
		// 文章の出力
		cout << "もう一回？（Yes…Y, No…N） : ";

		// 入力から受け取った文字列を変数に代入
		cin >> retryProgram;

	// {}内を繰り返す条件（Yもしくはyが入力されている間)
	}while (retryProgram == "Y" || retryProgram == "y");
}