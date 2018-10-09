/*
演習1－8 int型の変数に実数値の初期化子を与えるとどうなるか。
プログラムを作成して確認せよ
*/

// ヘッダの内容をインクルード
#include <iostream> 

// 名前空間を利用
using namespace std;

// main関数（以下の文を実行）
int main()
{
	// 整数x,yを宣言、x = 63, y = 18で初期化
	int variableSampleX = 63;    //整数x
	int variableSampleY = 18;    //整数y

	//xの値を出力
	cout << "xの値は" << variableSampleX << "です\n";

	//yの値を出力
	cout << "yの値は" << variableSampleY << "です\n";

	//xとy合計を出力
	cout << "合計は" << variableSampleX + variableSampleY << "です\n";

	//xとyの平均を出力
	cout << "平均は" << (variableSampleX + variableSampleY) / 2 << "です\n";
}