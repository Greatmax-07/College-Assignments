/* PROBLEM STATEMENT: 
Array Puzzle Solver:
Create a Java application that solves different types of puzzles using array manipulation. The system will include a variety of puzzles involving arrays,such as finding missing numbers, sorting and searching problems, finding the largest/smallest elements, sum pair puzzle and other logical tasks based on arrays.
Code: 
package code; */
import java.util.*;
public class code{
	private static int size=5;
	private static int arr[]= {6,2,5,1,4};
	private static int largestNumber;
	private static int smallestNumber;
	private static int target = 6;
	public void searchTarget() {
		boolean found = false;
		for(int i=0; i<size;i++) {
			if(arr[i]==target) {
				found = true;
				System.out.println("7] Target value {" + target + "} found at index: " + i);
				break;
			}
		}
		if(found==false) {
			System.out.println("7] Target value: " + target + " not found!!");
		}
	}
	public void display() {
		System.out.print("{ ");
		for(int i=0; i<size; i++) {
			System.out.print(arr[i] + " ");
		}
		System.out.println("}");
	}
	public void sort() {
		Arrays.sort(arr);
//		int temp;
//		for(int i=0; i<size; i++) {
//			for(int j=0;j<size-1; j++) {
//				if(arr[j]>arr[j+1]) {
//					temp=arr[j];
//					arr[j]=arr[j+1];
//					arr[j+1]=temp;
//				}
//			}
//		}
		largestNumber=arr[size-1];
		smallestNumber=arr[0];
	}
	public void findMissingNumber() {
		int expectedSum = (largestNumber*(largestNumber+1))/2;
		int actualSum=0;
		for(int i=0;i<size;i++) {
			actualSum+=arr[i];
		}
		int missingNumber=expectedSum-actualSum;
		System.out.println("5] The Sum Pair is:\n    Expected Sum: " + expectedSum +"    Actual Sum: " + actualSum);
		System.out.println("6] The Missing Number is: " + missingNumber);
	}
	public static void main(String args[]) {
		code obj1 = new code();
		System.out.print("1] The Given Array is: ");
		obj1.display();
		obj1.sort();
		System.out.print("2] The Sorted Array is: ");
		obj1.display();
		System.out.println("3] The Largest number is: " + largestNumber);
		System.out.println("4] The Smallest number is: " + smallestNumber);
		obj1.findMissingNumber();
		obj1.searchTarget();
	}
}
