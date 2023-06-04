package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc= new Scanner(System.in);
        int r;
        int rev=0;
        System.out.println("enter a number to reverse");
        int n= sc.nextInt();
        int t=n;
        while(t!=0){
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        System.out.println("the reverse of "+n+" is "+rev);
    }
}
