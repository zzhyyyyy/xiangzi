#include <iostream>
#include <algorithm>
#include <vector>//mapӳ��vector��д��
 
#include <map>

using namespace std;

int main() {
    int N, M, item1, item2;
    map<int, vector<int> > itemToItems;

    cin >> N >> M;

    // ����Σ����Ʒ
    for (int i = 0; i != N; i++) {
        cin >> item1 >> item2;
        // ���� map ӳ��
        itemToItems[item1].push_back(item2);
        itemToItems[item2].push_back(item1);
    }


    while (M--) {
        int cnt, flag = false, ans[100000] = { 0 };
        cin >> cnt;
        vector<int> items(cnt, 0);
        for (int i = 0; i != cnt; i++) {
            cin >> items[i];
            // ��Ǹ���Ʒ���ֹ�
            ans[items[i]] = 1;
        }

        
        for (int i = 0; i != cnt && !flag; i++) {
            // ������������Ʒ����
            for (int j = 0; j < itemToItems[items[i]].size(); j++) {
                // ���ͬһ��ת���ӳ��ֲ�������Ʒ��� flag Ϊ true
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

