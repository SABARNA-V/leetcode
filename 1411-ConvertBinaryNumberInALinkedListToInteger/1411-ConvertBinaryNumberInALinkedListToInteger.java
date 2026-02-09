// Last updated: 2/9/2026, 4:21:27 PM
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int getDecimalValue(ListNode head) {
        ListNode temp = head;
        int length =0;

        while(temp != null){
            temp = temp.next;
            length ++;
        }

        int decimal =0;
        temp = head;
        while(temp != null){
            decimal += (temp.val == 1)? Math.pow(2, length-1) : 0; 
            temp = temp.next;
            --length;
        }

        return decimal;
    }
}