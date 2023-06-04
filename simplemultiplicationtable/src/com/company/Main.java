package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the no for multiplication table");
        int n= sc.nextInt();
        System.out.println("the multiplication table of "+n);
        for(int i=1;i<=10;i++){
            System.out.println(n+" x "+i+" = "+ n*i);
        }
    }
}
