public class TestPalindrome
  {

    public static boolean estUnPalindrome(String chaine)
    {
        int taille = chaine.length();

        for (int i = 0; i < taille / 2; i++)
          {
              if (chaine.charAt(i) != chaine.charAt(taille - 1 - i))
                {
                    return false;
                }
          }

        return true;
    }

    public static void main(String[] args)
      {

        System.out.println(estUnPalindrome("anna"));
        System.out.println(estUnPalindrome("matam"));
        System.out.println(estUnPalindrome("seyni"));

      }
  }