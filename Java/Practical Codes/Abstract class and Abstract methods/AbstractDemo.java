//Program(AbstractDemo.java) 
 
/** 
 * This program demonstrates polymorphic behavior. 
 */ 
 
public class AbstractDemo 
{ 
    public static void main(String[] args) 
    { 
        Shape shape; 
         
        // assign subclass reference to subclass variable 
        Rectangle rect = new Rectangle(); 
         
        // shape points to the object rect. 
        shape = rect; 
 
        // Set data in Rectangle's object  
        shape.setValues(78, 5); 
         
        //Display the area of rectangle 
        System.out.println("Area of rectangle : " + shape.getArea()); 
         
        // assign subclass reference to subclass variable 
        Triangle tri = new Triangle(); 
         
        // shape points to the object rect.         
        shape = tri; 
         
        // Set data in Triangle's object          
        shape.setValues(34,3); 
         
        //Display the area of triangle         
        System.out.println("Area of triangle : " + shape.getArea()); 
    } 
}