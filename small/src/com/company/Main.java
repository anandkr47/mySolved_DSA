package com.company;
import java.util.*;

public class Main {

    public static void main(String[] args) {
	    Scanner Sc=new Scanner(System.in);
        System.out.println("enter a alphabet\n ");
        char ch=Sc.next() . charAt(0);
        if(ch>='a'&& ch<='z'){
            System.out.println("small alphabet \n");
        }else{
            System.out.println("other alphabet ");
        }

    }
}
