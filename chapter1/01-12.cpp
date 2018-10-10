/*
演習1－12 右に示すように、三角形の底辺と高さを読み込んで、
その面積を表示するプログラムを作成せよ
*/

// ヘッダの内容をインクルード
#include <iostream> 

// 名前空間を利用
using namespace std;

// main関数（以下の文を実行）
int main()
{
	// 文章の出力
	cout << "三角形の面積を求めます。\n";

	// 底辺xの宣言
	double theBase;

	// 高さyの宣言
	double theHight;

	// 底辺xに実数値を受け取って代入
	cin >> theBase;

	// 高さyに実数値を受け取って代入
	cin >> theHight;

	// 底辺の長さの出力
	cout << "底辺 : " << theBase << "\n";

	// 高さの出力
	cout << "高さ : " << theHight << "\n";

	// 三角形の面積の出力
	cout << "面積は" << (theBase * theHight) / 2 << "です。\n";
}