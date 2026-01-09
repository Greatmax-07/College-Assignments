/* PROBLEM STATEMENT: 
Student Performance Evaluation System: Create a Student class with attributes like studentID, name, and marks. Write methods to:
● Set and get student information. 
● Calculate and display the average marks.
● Determine if the student has passed or failed based on a passing threshold (e.g., 50%). Use Class, objects and Encapsulation

Code: 
package code; */
public class Student {
private String name;
private int Id;
private float marks[];
private float avg;
public void setName(String name) {
	this.name = name;
}
public void setId(int Id) {
	this.Id = Id;
}
public void setMarks(float marks[]) {
	this.marks = marks;
}
public void getName() {
	System.out.println("Student Name : " + name);
}
public void getId() {
	System.out.println("Student Id : " + Id);
}
public void getMarks() {
	System.out.print("Student Marks : [ ");
	for(int i=0; i< marks.length; i++) {
		System.out.print(marks[i] + " ");
	}
	System.out.println("]");
}
public void display(float marks[]) {
	getName();
	getId();
	getMarks();
	float sum = (float)0.0;
	for(int i=0; i<marks.length; i++) {
		sum+=marks[i];
	}
    avg =  sum/marks.length;
	System.out.println("Average Marks : " + avg);
	verdict();
}
public void verdict() {
	if(avg<50) {
		System.out.println("You failed.");
	}
	else {
		System.out.println("Congratulations !!");
	}	
}
 public static void main(String args[]) {
	  Student obj1 = new Student();
	  float arr[] = {95,97,94,96,93};
	  obj1.setName("Pranav");
	  obj1.setId(1);
	  obj1.setMarks(arr);
	  obj1.display(arr);
 }
}
