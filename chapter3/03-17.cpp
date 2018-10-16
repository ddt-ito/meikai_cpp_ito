/*
演習03-17 季節を求めるList3-1の月の読込みにおいて、1~12以外の値が入力された場合は、
再入力させるように変更したプログラムを作成せよ（do文の中にdo文が入る二重ループとなる）。
*/

// ライブラリのインクルード
#include <string>	// 文字列
#include <iostream>	// 入出力

// 名前空間の利用
using namespace std;

// メイン関数（以下を実行）
int main() {

	// 文字列を格納するための変数を宣言
	string retryProgram;

	// while()内の条件を満たす間、{}内を1回以上実行
	do {
		// 月の数を格納するための変数を宣言
		int monthNumber;

		// while()内の条件を満たす間、{}内を1回以上実行
		do {
			// 文章の出力
			cout << "季節を求めます。\n何月ですか。";

			// 入力から受け取った数値を変数に代入
			cin >> monthNumber;
		
		// 繰り返す条件（1~12が入力されるまでの間）
		} while (monthNumber < 1 || 12 < monthNumber);

		// 入力値が3~5の場合、分岐
		if (monthNumber >= 3 && monthNumber <= 5) {

			// 文章の出力
			cout << "それは春です。\n";
		}
		// 入力値が6~8の場合、分岐
		else if (monthNumber >= 6 && monthNumber <= 8) {

			// 文章の出力
			cout << "それは夏です。\n";
		}
		// 入力値が9~11の場合、分岐
		else if (monthNumber >= 9 && monthNumber <= 11) {

			// 文章の出力
			cout << "それは秋です。\n";
		}
		// 入力値が12、1~2の場合、分岐
		// （入力値は必ず1~12であることから、12、1~2はelseで表すことができる）
		else {
			// 文章の出力
			cout << "それは冬です。\n";
		}
		// 文章の出力
		cout << "もう一度？ Y…Yes/N…No : ";

		// 入力から受け取った文字を変数に代入
		cin >> retryProgram;

	// {}内を繰り返す条件（変数retryProgramに"Y","y"以外の文字列が代入されるまで）
	} while (retryProgram == "Y" || retryProgram == "y");
}