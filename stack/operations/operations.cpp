#include "../stackT/stack.h"

int main()
{
    Stack<int> st(10);
    st.push(12);
    st.push(13);
    st.pop();
    st.push(13);
    cout<<st.top();
}