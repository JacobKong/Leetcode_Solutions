/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode head = new ListNode(0);
        ListNode r = head;
        int carry = 0;
        while(l1!=null && l2!=null){
            int sum = carry+l1.val+l2.val;
            r.next = new ListNode(sum%10);
            carry = sum/10;
            l1 = l1.next;
            l2 = l2.next;
            r = r.next;
        }
        
        while(l1!=null){
            int sum = carry+l1.val;
            r.next = new ListNode(sum%10);
            carry = sum/10;
            l1 = l1.next;
            r = r.next;
        }
        while(l2!=null){
            int sum = carry+l2.val;
            r.next = new ListNode(sum%10);
            carry = sum/10;
            l2 = l2.next;
            r = r.next;
        }
        
        if(carry!=0){
            r.next = new ListNode(carry);
        }
        
        return head.next;
    }
}