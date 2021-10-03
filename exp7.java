package softwareTeting;

public class exp7 {
	public static void main(String[] args)
	{
		try {
			Class.forName("abc");
		}
		catch(Exception e) {
			System.out.println(e);
		}
	}
}
