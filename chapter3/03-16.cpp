/*
演習03-16 右に示すように、1からnまでの整数値の2乗値を表示するプログラムを作成せよ。
nの値 : 3
1の2乗は1
2の2乗は4
3の2乗は9
*/

// 入出力のためのインクルード
#include <iostream>

// 名前空間の利用
using namespace std;

// メイン関数（以下を実行）
int main() {

	// 2乗する整数を格納するための変数nを宣言
	int integerNumber;

	// 入力値を出力
	cout << "nの値 : ";

	// 入力から受け取った数を変数nに代入
	cin >> integerNumber;

	// 1から入力値まで、それぞれ数値を2乗した値の出力を繰り返す
	for (int countNumber = 1; countNumber <= integerNumber; countNumber++) {
		
		// countNumberの2乗の値を出力
		cout << countNumber << "の2乗は" << countNumber * countNumber << '\n';
	}
}