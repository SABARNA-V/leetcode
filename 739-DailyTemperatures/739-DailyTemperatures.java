// Last updated: 2/9/2026, 4:21:30 PM
class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int[] arr = new int[temperatures.length];
        Stack<Integer> st = new Stack<>();

        for (int i = 0; i < temperatures.length; i++) {
            while (!st.isEmpty() && temperatures[i] > temperatures[st.peek()]) {
                int prevIndex = st.pop();
                arr[prevIndex] = i - prevIndex;
            }
            st.push(i);
        }

        return arr;
    }
}
