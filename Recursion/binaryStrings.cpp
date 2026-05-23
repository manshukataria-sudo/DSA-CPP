#include <iostream>
using namespace std;
int n = 5;
void binString(string ans)
{
    if (ans.size() == n)
    {
        cout << ans << endl;
        return;
    }
    if (ans.size() == 0 || ans[ans.size() - 1] != '1')
        binString(ans + "1");
    binString(ans + "0");
}
int main()
{
    binString("");
}