class prog4{
  public static void main(String[] args) {
    int age = 18;
    boolean candriver = true;

    if (age >= 18 && candriver != false) {
      System.out.println("Eligible to drive");
    } else {
      System.out.println("Not eligible to drive");
    }
    
    boolean bool = false;
    System.out.println(!bool); // true
    int a = 3;
    int b = a++ + ++a + a++;
    System.out.println("a = " + a); 
    System.out.println("b = " + b); // 3 + 5 + 5 = 13
  
  }
}

