package Hari;

import java.util.List;
import java.util.Comparator;
import java.util.ArrayList;


public class Main{
	public static void main(String args[]) {
		
		List<Student> Stu_list = new ArrayList<>();
		Stu_list.add(new Student("hari", 20, "c")) ;
		Stu_list.add(new Student("mani", 20, "c")) ;
		Stu_list.add(new Student("done", 20, "c")) ;
		Stu_list.add(new Student("aim", 20, "c")) ;
		Stu_list.add(new Student("boy", 20, "c")) ;
		
	   Stu_list.sort(Comparator.comparing(Student::getName));			
	   for(Student st:Stu_list)
	             System.out.println(st.getName()+" "+st.getage()+" "+st.getsClass());
		        
	}
}

class Student{
	String name;
	String sClass;
	int age;
	Student(String name, int age, String sClass){
		this.name = name;
		this.age = age;
		this.sClass = sClass;
	}
	public String getName(){
		return name;
	}
	public int getage(){
		return age;
	}
	public String getsClass(){
		return sClass;
	}
	
}
