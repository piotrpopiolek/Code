package calendartest;

import java.text.DateFormatSymbols;
import java.util.Calendar;
import java.util.GregorianCalendar;
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Lenovo
 */
public class CalendarTest {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args)
   {
       //Konstrukcja i ustawienie obiektu d oraz jego inicjalizacja aktualna data
       GregorianCalendar d=new GregorianCalendar();
       int today=d.get(Calendar.DAY_OF_MONTH);
       int month=d.get(Calendar.MONTH);
       //Ustawienie d na poczatek miesiaca.
       d.set(Calendar.DAY_OF_MONTH,1);
       int weekday=d.get(Calendar.DAY_OF_WEEK);
       //Pobranie pierwszego dnia tygodnia
       int firstDayOfWeek=d.getFirstDayOfWeek();
       //Okreslenie odpowiedniego wciecia pierwszego wiersza
       int indent =0;
       while(weekday!=firstDayOfWeek)
       {
           indent++;
           d.add(Calendar.DAY_OF_MONTH,-1);
           weekday=d.get(Calendar.DAY_OF_WEEK);
       }
       //Drukowanie nazw dni tygodnia.
       String[] weekdayNames = new DateFormatSymbols().getShortWeekdays();
       do
       {
           System.out.printf("%4s", weekdayNames[weekday]);
           d.add(Calendar.DAY_OF_MONTH,1);
           weekday=d.get(Calendar.DAY_OF_WEEK);
       }
       while(weekday!=firstDayOfWeek);
       System.out.println();
       for(int i=1;i<=indent;i++)
           System.out.print("\t");
       d.set(Calendar.DAY_OF_MONTH,1);
       do
       {
           //Drukowanie dnia.
           int day=d.get(Calendar.DAY_OF_MONTH);
           System.out.printf("%3d", day);
           //Oznaczanie biezacego dnia znakiem *.
           if(day==today)
               System.out.print("*");
           else 
               System.out.print(" ");
           //Ustawienie d na kolejny dzien.
           d.add(Calendar.DAY_OF_MONTH, 1);
           weekday=d.get(Calendar.DAY_OF_WEEK);
           //Rozpoczecie nowego wiersza na poczatku tygodnia.
           if(weekday==firstDayOfWeek)
               System.out.println();
       }while(d.get(Calendar.MONTH)==month);
       //Petla konczy dzialanie jezeli d jest pierwszym dniem nastepnego miesiaca.
       //Wydruk koncowego znaku nowego wiersza w razie potrzeby.
       if(weekday!=firstDayOfWeek)
           System.out.println();
   }
}
