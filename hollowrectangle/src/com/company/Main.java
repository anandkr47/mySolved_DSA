package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	int n,m,i,j;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the no of rows");
        n=sc.nextInt();
        System.out.println("enter he number of columns");
        m=sc.nextInt();
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(i==1 || j==1 || i==n || j==m){
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }

    }
}
