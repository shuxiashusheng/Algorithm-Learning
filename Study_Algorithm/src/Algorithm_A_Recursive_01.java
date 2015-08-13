public class Algorithm_A_Recursive_01 {

	/**
	 * @author ssb
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String string = new String();
		Algorithm_A_Recursive_01 algorithm_A_Recursive_01 = new Algorithm_A_Recursive_01();
		algorithm_A_Recursive_01.recursive_BinaryConversion(string, 39, 8);
		System.out.println("this" + string);

	}

	// 十进制转换其他进制的递归算法
	public void recursive_BinaryConversion(String string, int number,
			int baseNumber) {
		int i = number % baseNumber;
		string =String.valueOf(i)+ string ;
		if (number == 0) {
			return ;
		} else {
			System.out.println(string);
			recursive_BinaryConversion(string, number / baseNumber, baseNumber);
		}
	}
}
