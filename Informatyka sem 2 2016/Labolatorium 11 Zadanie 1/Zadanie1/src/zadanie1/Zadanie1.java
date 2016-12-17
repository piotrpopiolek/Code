/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package zadanie1;

import static java.lang.System.out;

/**
 *
 * @author Lenovo
 */
public class Zadanie1 {

    /**
     * @param args the command line arguments
     */
       public static void zadanie1() 
       {
       BinomialSolver b1 = new BinomialSolver(1.0, -5.0, 4.0);
       System.out.println("Pierwiastki rownania x*x - 5x + 4 = 0 to: ");
       System.out.println("x1 = " + b1.getX1() + ", x2 = " + b1.getX2());
       System.out.println("Wartosc wielomianu x*x - 5x + 4 dla x = 1 to: "+ b1.calculate(1.0));
       System.out.println("Wartosc wielomianu x*x - 5x + 4 dla x = 3 to: "+ b1.calculate(3.0));
       BinomialSolver b2 = new BinomialSolver(1.0, 2.0, 1.0);
       System.out.println("Pierwiastki rownania x*x + 2x + 1 = 0 to: ");
       System.out.println("x1 = " + b2.getX1() + ", x2 = " + b2.getX2());
       System.out.println("Wartosc wielomianu x*x + 2x + 1 dla x = 1 to: "+ b2.calculate(1.0));
       System.out.println("Wartosc wielomianu x*x + 2x + 1 dla x = -1 to: "+ b2.calculate(-1.0));
       try
       {
       BinomialSolver b3=new BinomialSolver(6,3,9);
       }
       catch(NoRealSolution e)
       {
       out.println(e.getMessage());
       }
       }
        public static void main(String[] args) 
         {
             zadanie1();
         }
}
