#include <iostream>
#include <algorithm>
#include <vector>//map映射vector的写法
 
#include <map>

using namespace std;

int main() {
    int N, M, item1, item2;
    map<int, vector<int> > itemToItems;

    cin >> N >> M;

    // 输入危机物品
    for (int i = 0; i != N; i++) {
        cin >> item1 >> item2;
        // 建立 map 映射
        itemToItems[item1].push_back(item2);
        itemToItems[item2].push_back(item1);
    }


    while (M--) {
        int cnt, flag = false, ans[100000] = { 0 };
        cin >> cnt;
        vector<int> items(cnt, 0);
        for (int i = 0; i != cnt; i++) {
            cin >> items[i];
            // 标记该物品出现过
            ans[items[i]] = 1;
        }

        
        for (int i = 0; i != cnt && !flag; i++) {
            // 遍历不相容物品数组
            for (int j = 0; j < itemToItems[items[i]].size(); j++) {
                // 如果同一集转箱子出现不相容物品标记 flag 为 true
                if (ans[itemToItems[items[i]][j]] == 1) {
                    flag = true;
                    break;
                }
            }
        }
        // 
        cout << (flag ? "No" : "Yes") << endl;

    }
    return 0;
}

