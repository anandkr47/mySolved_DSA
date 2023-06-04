package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	int i,j,r,c;
        Scanner Sc=new Scanner(System.in);
        System.out.println("enter the column");
        c=Sc.nextInt();
        System.out.println("enter the row");
        r=Sc.nextInt();
        for(i=1;i<=c;i++){
            for(j=1;j<=r;j++){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
