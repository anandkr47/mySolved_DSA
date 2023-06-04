package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the no upto which you want multiplication table");
        int n= sc.nextInt();
        for(int i=1;i<=n;i++){
            System.out.println("the muktiplication table of "+i);
            for(int j=1;j<=10;j++){
                System.out.println(i+" x "+j+" = "+ i*j);
            }
            System.out.println();
        }
    }
}
