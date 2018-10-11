/*
演習2-14 0,1,2のいずれかの値の乱数を生成し、0であれば『グー』、1であれば『チョキ』、
2であれば『パー』と表示するプログラムを作成せよ。
*/

// ライブラリのインクルード
#include <ctime>	// 日付時刻
#include <cstdlib>	// 乱数生成
#include <iostream>	// 入出力

// 名前空間の利用
using namespace std;

// メイン関数（以下の文章を実行）
int main()
{
	// 乱数の種（実行時の日付時刻を用いる）
	srand(time(NULL));

	// ジャンケンの3パターンの値を宣言、0~2での整数で初期化
	int handNumber = rand() % 3;

	// 生成した数値によって分岐
	switch (handNumber) {
		// 0の場合
	case 0:
		cout << "グー\n";
		// switchの終了
		break;
		// 1の場合
	case 1:cout << "チョキ\n";
		// switchの終了
		break;
		// 2の場合
	case 2:cout << "パー\n";
		// switchの終了
		break;
	}
}