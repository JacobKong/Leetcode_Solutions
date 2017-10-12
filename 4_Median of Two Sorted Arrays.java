public class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m = nums1.length;
        int n = nums2.length;
        if(m==0)
            return n%2==0? (nums2[(n-1)/2]+nums2[n/2])/2.0:nums2[n/2];
        if(n==0)
            return m%2==0? (nums1[(m-1)/2]+nums1[m/2])/2.0:nums1[m/2];
        float[] nums3 = new float[m+n];
        for (int i = 0; i < m; i++) {
            nums3[i] = nums1[i];
        }
        for(int j = m; j < m+n; j++){
            nums3[j] = nums2[j-m];
        }
        Arrays.sort(nums3);
        if((m+n)%2 == 0) return (nums3[(m+n)/2-1]+nums3[(m+n)/2])/2.0;
        else return nums3[(m+n)/2];
        //        return findMedianSortedArrays(nums1, nums2, 0, m-1, 0, n-1);
    }
    // public double findMedianSortedArrays(int[] nums1, int[] nums2) {
    //     int m = nums1.length;
    //     int n = nums2.length;
    //     if(m==0)
    //         return n%2==0? (nums2[(n-1)/2]+nums2[n/2])/2.0:nums2[n/2];
    //     if(n==0)
    //         return m%2==0? (nums1[(m-1)/2]+nums1[m/2])/2.0:nums1[m/2];
    //     return findMedianSortedArrays(nums1, nums2, 0, m-1, 0, n-1);
    // }
    
    // private double findMedianSortedArrays(int[] nums1, int[] nums2, int l1, int h1, int l2, int h2){
    //     int mid1 = (l1+h1)/2;
    //     int mid2 = (l2+h2)/2;
    //     if(l1>=h1 || l2>=h2) return (nums1[mid1]+nums2[mid2])/2.0;
    //     if (nums1[mid1] == nums2[mid2]) return nums1[mid1];
    //     else if (nums1[mid1]<nums2[mid2]) return findMedianSortedArrays(nums1, nums2, mid1+1, h1, l2, mid2-1);
    //     else return findMedianSortedArrays(nums1, nums2, l1, mid1-1, mid2+1, h2);
    // }
}
