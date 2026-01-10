
public class AllSubarrays {
    public static void printAllSubarraysAndMaxSum(int[] arr) {
        int n = arr.length;
        int maxSum = Integer.MIN_VALUE;

        System.out.println("All possible subarrays and their sums:");

        for (int start = 0; start < n; start++) {
            int sum = 0; // initialize sum for each new start index

            for (int end = start; end < n; end++) {
                sum += arr[end]; // accumulate the sum

                // Print the subarray
                for (int k = start; k <= end; k++) {
                    System.out.print(arr[k] + " ");
                }

                System.out.println("=> Sum = " + sum);

                // Update max sum if needed
                if (sum > maxSum) {
                    maxSum = sum;
                }
            }
        }

        System.out.println("\nMaximum Subarray Sum = " + maxSum);
    }

    public static void main(String[] args) {
        int[] arr = {1, -2, 3, 4, -1};
        printAllSubarraysAndMaxSum(arr);
    }
}