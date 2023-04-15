public class ComparerChaine{
  private int result;
  public ComparerChaine(){
    result = 0;
  }

  public int comparer(String s1, String s2){
    int m, n, min;
    m = s1.length();
    n = s2.length();
    //s1 = s1.toLowerCase()();
    //s2 = s2.toLowerCase();

    //if (m <= n)
      //min = m;
    //else min = n;
    min = (m <= n) ? m : n;
    int i = 0;
    while(i < min){
      if (s1.charAt(i) == s2.charAt(i))//We compare there ASCII values
        i++;
      else if (s1.charAt(i) > s2.charAt(i)){
        result = 1;
        break;
      }
      else {
        result = -1;
        break;
      }
    }
    if (i == min && n < m )
      result = 1;
    else if (i == min && n > m)
      result = -1;
    else if (i == min && n == m)
      result = 0;
    return result;
  }
}
