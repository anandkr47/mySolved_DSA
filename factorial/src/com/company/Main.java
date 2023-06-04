package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the no ");
        int n= sc.nextInt();
        int temp=n;
        int fact=1;
        while(n!=0){
           fact=fact*n--;
        }
        System.out.println("the factorial of "+temp+" is "+fact);
    }
}
