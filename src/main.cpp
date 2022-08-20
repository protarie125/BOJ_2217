#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	auto ls = vi(n);
	for (auto i = 0; i < n; ++i) {
		cin >> ls[i];
	}

	sort(ls.begin(), ls.end(), greater<int>());

	auto mx = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		auto newMx = ls[i] * (i + 1);
		if (mx <= newMx) {
			mx = newMx;
		}
	}

	cout << mx;

	return 0;
}