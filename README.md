# Binary reversing 101

The exercise material accompanying the [ECSP 2020](https://overons.kpn/en/news/2020/kpn-publiceert-7e-editie-van-de-european-cyber-security-perspectives) article of the same name.

## 0-basics

This directory contains the source code and binary that is used in the article.
It is compiled without many modern protection mechanisms as a x86 32-bit ELF binary.

## 1-password-checker

A small challenge binary without source (but including the Makefile used to produce it).
The program asks for a password and your goal is to make it print out its congratulatory message.
