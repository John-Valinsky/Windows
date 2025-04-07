 
import java .io.FileInputStream; 
import java .io.FileOutputStream; 
class IOTest 
    { 
        public void readFile() 
        { 
            try 
            { 
                FileInputStream fis=new 
FileInputStream("C:\\Users\\John\\Desktop\\programs\\sample.txt"); 
                FileOutputStream fos=new 
FileOutputStream("C:\\Users\\John\\Desktop\\programs\\data2.txt"); 
                int i; 
                while((i=fis.read())!=-1) 
                { 
                    fos.write(i); 
                } 
                System.out.println("content writen successfully"); 
            }        
            catch(Exception e) 
            { 
                e.printStackTrace(); 
 
            } 
        } 
    } 
public class ReadWrite 
    { 
        public static void main(String[] args) 
        { 
            IOTest obj=new IOTest(); 
            obj.readFile(); 
        } 
    } 