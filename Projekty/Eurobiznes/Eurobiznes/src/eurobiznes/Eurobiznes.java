/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package eurobiznes;

import java.awt.EventQueue;
import static java.lang.System.out;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import javax.swing.JFrame;

/**
 *
 * @author Lenovo
 */
public class Eurobiznes 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        ActOfOwnershipCity Akt2=new ActOfOwnershipCity("2","Akt własności","Grecja","Saloniki","Cena zakupu","120","Opłata za postój","- teren niezabudowany","10","- teren z 1 domem","40","- teren z 2 domami","120","- teren z 3 domami","360","- teren z 4 domami","640","- teren z 1 hotelem","900","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","100","1 hotel kosztuje 4 domy +","100","Zastaw hipoteczny","60");
        ActOfOwnershipCity Akt4=new ActOfOwnershipCity("4","Akt własności","Grecja","Ateny","Cena zakupu","120","Opłata za postój","- teren niezabudowany","10","- teren z 1 domem","40","- teren z 2 domami","120","- teren z 3 domami","360","- teren z 4 domami","640","- teren z 1 hotelem","900","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","100","1 hotel kosztuje 4 domy +","100","Zastaw hipoteczny","60");
        ActOfOwnershipRailway Akt6=new ActOfOwnershipRailway("6","Akt własności","Linie kolejowe","Południe","Cena zakupu","400","Opłata za postój wynosi:","- jeżeli gracz posiada 1 linię","50","- jeżeli gracz posiada 2 linię","100","- jeżeli gracz posiada 3 linię","200","- jeżeli gracz posiada 4 linię","400","Zastaw hipoteczny","200");
        ActOfOwnershipCity Akt7=new ActOfOwnershipCity("7","Akt własności","Włochy","Neapol","Cena zakupu","200","Opłata za postój","- teren niezabudowany","15","- teren z 1 domem","60","- teren z 2 domami","180","- teren z 3 domami","540","- teren z 4 domami","800","- teren z 1 hotelem","1100","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","100","1 hotel kosztuje 4 domy +","100","Zastaw hipoteczny","100");
        ActOfOwnershipCity Akt9=new ActOfOwnershipCity("9","Akt własności","Włochy","Mediolan","Cena zakupu","200","Opłata za postój","- teren niezabudowany","15","- teren z 1 domem","60","- teren z 2 domami","180","- teren z 3 domami","540","- teren z 4 domami","800","- teren z 1 hotelem","1100","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","100","1 hotel kosztuje 4 domy +","100","Zastaw hipoteczny","100");
        ActOfOwnershipCity Akt10=new ActOfOwnershipCity("10","Akt własności","Włochy","Rzym","Cena zakupu","240","Opłata za postój","- teren niezabudowany","20","- teren z 1 domem","80","- teren z 2 domami","200","- teren z 3 domami","600","- teren z 4 domami","900","- teren z 1 hotelem","1200","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","100","1 hotel kosztuje 4 domy +","100","Zastaw hipoteczny","120");
        ActOfOwnershipCity Akt12=new ActOfOwnershipCity("12","Akt własności","Hiszpanie","Barcelona","Cena zakupu","280","Opłata za postój","- teren niezabudowany","20","- teren z 1 domem","100","- teren z 2 domami","300","- teren z 3 domami","900","- teren z 4 domami","1250","- teren z 1 hotelem","1500","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","200","1 hotel kosztuje 4 domy +","200","Zastaw hipoteczny","140");
        ActOfOwnershipNetworks Akt13=new ActOfOwnershipNetworks("13","Akt własności"," ","Elektrownia","Cena kupna","300","Opłata za postój wynosi 10 x ilość wyrzuconych\n oczek. Jeżeli właściciel posiada również\n elektrownię to opłata jest podwójna.","Zastaw hipoteczny","150");
        ActOfOwnershipCity Akt14=new ActOfOwnershipCity("14","Akt własności","Hiszpania","Sewilla","Cena zakupu","280","Opłata za postój","- teren niezabudowany","20","- teren z 1 domem","100","- teren z 2 domami","300","- teren z 3 domami","900","- teren z 4 domami","1250","- teren z 1 hotelem","1500","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","200","1 hotel kosztuje 4 domy +","200","Zastaw hipoteczny","140");
        ActOfOwnershipCity Akt15=new ActOfOwnershipCity("15","Akt własności","Hiszpania","Madryt","Cena zakupu","320","Opłata za postój","- teren niezabudowany","25","- teren z 1 domem","120","- teren z 2 domami","360","- teren z 3 domami","1000","- teren z 4 domami","1400","- teren z 1 hotelem","1800","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","200","1 hotel kosztuje 4 domy +","200","Zastaw hipoteczny","160");
        ActOfOwnershipRailway Akt16=new ActOfOwnershipRailway("16","Akt własności","Linie kolejowe","Zachodnie","Cena kupna","400","Opłata za postój wynosi:","- jeżeli gracz posiada 1 linię","50","- jeżeli gracz posiada 2 linię","100","- jeżeli gracz posiada 3 linię","200","- jeżeli gracz posiada 4 linię","400","Zastaw hipoteczny","200");
        ActOfOwnershipCity Akt17=new ActOfOwnershipCity("17","Akt własności","Anglia","Liverpool","Cena zakupu","360","Opłata za postój","- teren niezabudowany","30","- teren z 1 domem","140","- teren z 2 domami","400","- teren z 3 domami","1100","- teren z 4 domami","1500","- teren z 1 hotelem","1900","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","200","1 hotel kosztuje 4 domy +","200","Zastaw hipoteczny","180");
        ActOfOwnershipCity Akt19=new ActOfOwnershipCity("19","Akt własności","Anglia","Glasgow","Cena zakupu","360","Opłata za postój","- teren niezabudowany","30","- teren z 1 domem","140","- teren z 2 domami","400","- teren z 3 domami","1100","- teren z 4 domami","1500","- teren z 1 hotelem","1900","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","200","1 hotel kosztuje 4 domy +","200","Zastaw hipoteczny","180");
        ActOfOwnershipCity Akt20=new ActOfOwnershipCity("20","Akt własności","Anglia","Londyn","Cena zakupu","400","Opłata za postój","- teren niezabudowany","35","- teren z 1 domem","160","- teren z 2 domami","440","- teren z 3 domami","1200","- teren z 4 domami","1600","- teren z 1 hotelem","2000","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","200","1 hotel kosztuje 4 domy +","200","Zastaw hipoteczny","200");
        ActOfOwnershipCity Akt22=new ActOfOwnershipCity("22","Akt własności","Benelux","Rotterdam","Cena zakupu","440","Opłata za postój","- teren niezabudowany","35","- teren z 1 domem","180","- teren z 2 domami","500","- teren z 3 domami","1400","- teren z 4 domami","1750","- teren z 1 hotelem","2100","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","300","1 hotel kosztuje 4 domy +","300","Zastaw hipoteczny","220");
        ActOfOwnershipCity Akt24=new ActOfOwnershipCity("24","Akt własności","Benelux","Bruksela","Cena zakupu","440","Opłata za postój","- teren niezabudowany","35","- teren z 1 domem","180","- teren z 2 domami","500","- teren z 3 domami","1400","- teren z 4 domami","1750","- teren z 1 hotelem","2100","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","300","1 hotel kosztuje 4 domy +","300","Zastaw hipoteczny","220");
        ActOfOwnershipCity Akt25=new ActOfOwnershipCity("25","Akt własności","Belenux","Amsterdam","Cena zakupu","480","Opłata za postój","- teren niezabudowany","40","- teren z 1 domem","200","- teren z 2 domami","600","- teren z 3 domami","1500","- teren z 4 domami","1850","- teren z 1 hotelem","2200","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","300","1 hotel kosztuje 4 domy +","300","Zastaw hipoteczny","240");
        ActOfOwnershipRailway Akt26=new ActOfOwnershipRailway("26","Akt własności","Linie kolejowe","Północne","Cena kupna","400","Opłata za postój wynosi:","- jeżeli gracz posiada 1 linię","50","- jeżeli gracz posiada 2 linię","100","- jeżeli gracz posiada 3 linię","200","- jeżeli gracz posiada 4 linię","400","Zastaw hipoteczny","200");
        ActOfOwnershipCity Akt27=new ActOfOwnershipCity("27","Akt własności","Szwecja","Amsterdam","Cena zakupu","520","Opłata za postój","- teren niezabudowany","45","- teren z 1 domem","220","- teren z 2 domami","660","- teren z 3 domami","1600","- teren z 4 domami","1950","- teren z 1 hotelem","2300","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","300","1 hotel kosztuje 4 domy +","300","Zastaw hipoteczny","260");
        ActOfOwnershipCity Akt28=new ActOfOwnershipCity("28","Akt własności","Szwecja","Goteborg","Cena zakupu","520","Opłata za postój","- teren niezabudowany","45","- teren z 1 domem","220","- teren z 2 domami","660","- teren z 3 domami","1600","- teren z 4 domami","1950","- teren z 1 hotelem","2300","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","300","1 hotel kosztuje 4 domy +","300","Zastaw hipoteczny","260");
        ActOfOwnershipNetworks Akt29=new ActOfOwnershipNetworks("29","Akt własności"," ","Sieć wodociągowa","Cena kupna","300","Opłata za postój wynosi 10 x ilość wyrzuconych\n oczek. Jeżeli właściciel posiada również\n elektrownię to opłata jest podwójna.","Zastaw hipoteczny","150");
        ActOfOwnershipCity Akt30=new ActOfOwnershipCity("30","Akt własności","Szwecja","Sztokholm","Cena zakupu","560","Opłata za postój","- teren niezabudowany","50","- teren z 1 domem","240","- teren z 2 domami","720","- teren z 3 domami","1700","- teren z 4 domami","2050","- teren z 1 hotelem","2400","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","300","1 hotel kosztuje 4 domy +","300","Zastaw hipoteczny","280");
        ActOfOwnershipCity Akt32=new ActOfOwnershipCity("32","Akt własności","RFN","Frankfurt","Cena zakupu","600","Opłata za postój","- teren niezabudowany","55","- teren z 1 domem","260","- teren z 2 domami","780","- teren z 3 domami","1900","- teren z 4 domami","2200","- teren z 1 hotelem","2550","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","400","1 hotel kosztuje 4 domy +","400","Zastaw hipoteczny","300");
        ActOfOwnershipCity Akt33=new ActOfOwnershipCity("33","Akt własności","RFN","Kolonia","Cena zakupu","600","Opłata za postój","- teren niezabudowany","55","- teren z 1 domem","260","- teren z 2 domami","780","- teren z 3 domami","1900","- teren z 4 domami","2200","- teren z 1 hotelem","2550","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","400","1 hotel kosztuje 4 domy +","400","Zastaw hipoteczny","300");
        ActOfOwnershipCity Akt35=new ActOfOwnershipCity("35","Akt własności","RFN","Bonn","Cena zakupu","640","Opłata za postój","- teren niezabudowany","60","- teren z 1 domem","300","- teren z 2 domami","900","- teren z 3 domami","2000","- teren z 4 domami","2400","- teren z 1 hotelem","2800","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","400","1 hotel kosztuje 4 domy +","400","Zastaw hipoteczny","320");
        ActOfOwnershipRailway Akt36=new ActOfOwnershipRailway("36","Akt własności","Linie kolejowe","Wschodnie","Cena kupna","400","Opłata za postój wynosi:","- jeżeli gracz posiada 1 linię","50","- jeżeli gracz posiada 2 linię","100","- jeżeli gracz posiada 3 linię","200","- jeżeli gracz posiada 4 linię","400","Zastaw hipoteczny","200");
        ActOfOwnershipCity Akt38=new ActOfOwnershipCity("38","Akt własności","Austria","Insbruck","Cena zakupu","700","Opłata za postój","- teren niezabudowany","70","- teren z 1 domem","350","- teren z 2 domami","1000","- teren z 3 domami","2200","- teren z 4 domami","2600","- teren z 1 hotelem","3000","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","400","1 hotel kosztuje 4 domy +","400","Zastaw hipoteczny","350");
        ActOfOwnershipCity Akt40=new ActOfOwnershipCity("40","Akt własności","Austria","Wiedeń","Cena zakupu","800","Opłata za postój","- teren niezabudowany","100","- teren z 1 domem","400","- teren z 2 domami","1200","- teren z 3 domami","2800","- teren z 4 domami","3400","- teren z 1 hotelem","4000","Jeżeli gracz posiada wszystkie tereny budowlane\n w tym państwie\n i są one niezabudowane to opłata jest podwójna.\n","1 dom kosztuje","400","1 hotel kosztuje 4 domy +","400","Zastaw hipoteczny","400");
        Akt40.setVisible(true);
        Akt36.setVisible(true);
        Board Euro=new Board();
        Euro.setVisible(true);
        ActOfOwnership []Test={Akt4,Akt2,Akt24};
        Test[0].setVisible(true);
        Test[1].setVisible(true);
        Gracz Pepe=new Gracz("Pepe");
        Pepe.Show();
        Pepe.SprawdzPole();
        List<ActOfOwnership> Plansza=new ArrayList();
        Plansza.add(Akt2);
        Plansza.add(Akt4);
        Plansza.add(Akt7);
        for(ActOfOwnership i: Plansza)
        {
            i.Show();
        }
    }
    
}
