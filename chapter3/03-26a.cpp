/*
演習3-26 人間とコンピュータとが対戦するジャンケンプログラムを作成せよ。
・いずれか一方が3回まで勝つまで繰り返すもの。
・人間が望む限り何度でも繰り返せるようにするもの。
など、複数のパターンのプログラムを作ること。
（上からそれぞれ『03-26a』、『03-26b』とする）
*/

// 03-26a

// ライブラリのインクルード
#include <ctime>	// 日付時刻
#include <cstdlib>	// 乱数生成
#include <iostream>	// 入出力

// 名前空間の利用
using namespace std;

// メイン関数（以下を実行）
int main() {

	// 現在時刻から乱数の種を決定
	srand(time(NULL));

	// 変数の宣言
	int inputNumber;			// 入力値を格納
	int numberOfVictory = 0;	// 勝った回数を格納、1で初期化
	int numberOfDefeat = 0;		// 負けた回数を格納、1で初期化
	
	// 勝った回数、負けた回数どちらかが3回になるまで繰り返す
	do{
		// コンピュータのジャンケンの手のパターンの値を格納するために
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
				// 勝った回数をインクリメント
				numberOfVictory++;
				// switch文を終了
				break;
			// パーの場合
			case 2:
				// 文章の出力
				cout << "パー、であなたの負け。\n";
				// 負けた回数をインクリメント
				numberOfDefeat++;
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
				// 負けた回数をインクリメント
				numberOfDefeat++;
				// switch文を終了
				break;
			// チョキの場合
			case 1:
				cout << "チョキ、であいこ。\n";
				// あいこのときは勝敗の数をカウントせずにswitch文を終了
				break;
			// パーの場合
			case 2:
				cout << "パー、であなたの勝ち。\n";
				// 勝った回数をインクリメント
				numberOfVictory++;
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
				// 勝った回数をインクリメント
				numberOfVictory++;
				// switch文を終了
				break;
			// チョキの場合
			case 1:
				//文章の出力
				cout << "チョキ、であなたの負け。\n";
				// 負けた回数をインクリメント
				numberOfDefeat++;
				// switch文を終了
				break;
			// パーの場合
			case 2:
				//文章の出力
				cout << "パー、であいこ。\n";
				// あいこのときは勝敗の数をカウントせずにswitch文を終了
				break;
			// どのラベルとも一致しない場合
			default:
				// switch文を終了
				break;
			}
		}
	}while (numberOfVictory < 3 && numberOfDefeat < 3);
}