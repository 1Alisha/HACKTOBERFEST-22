#include <iostream>
#include <stack>

using namespace std;

void solve(stack <int> st, int ele) {
    if (st.empty()) {
        st.push(ele);
        return;
    }
    int top = st.top();
    st.pop();
    solve(st,ele);
    st.push(top);
}

int main() {
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    int ele = 50;

    solve(st,ele);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.top() << endl;

}