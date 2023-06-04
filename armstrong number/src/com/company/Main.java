package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner Sc = new Scanner(System.in);
        System.out.println("enter a number\n ");
        int n = Sc.nextInt();
        int temp = n;
        int sum = 0;
        while (temp != 0) {
            int r = temp % 10;
            sum = sum + (r * r * r);
            temp = temp / 10;
        }
        if (n == sum) {
            System.out.println( n + " is armstrong number ");
        } else {
            System.out.println(n + "is not armstrong number");
        }
    }
}