package com.company;
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number to check for prime ");
        int a= sc.nextInt();
        int c=0;
        for(int i=1;i<=a;i++){
            if(a%i==0){
                c++;
            }
        }
        if(c==2){
            System.out.println("the number is prime");
        }
        else{
            System.out.println("the number is not prime");
        }

    }
}
