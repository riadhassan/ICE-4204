package softwareTeting;
import java.io.*;
import java.util.*;


public class exp7_2 {
	public static void main(String[] args) throws Exception {
	      System.out.println("Enter a String: ");
	      Scanner sc = new Scanner(System.in);
	      String data = sc.nextLine();
	      
	      byte[] buf = data.getBytes();
	      DataOutputStream dos = new DataOutputStream(new FileOutputStream("abc.txt"));
	      for (byte b:buf) {
	         dos.writeChar(b);
	      }
	      dos.flush();

	      DataInputStream dis = new DataInputStream(new FileInputStream("abc.txt"));
	      while(true) {
	         char ch;
	         try {
	            ch = dis.readChar();
	            System.out.print(ch);
	         } catch (EOFException e) {
	            System.out.println("");
	            System.out.println("End of file reached");
	            break;
	         } catch (IOException e) {
	        	 System.out.println(e);
	         }
	      }
	   }
	}
