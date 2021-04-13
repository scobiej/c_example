#pragma once

struct node {
   int data;
   struct node *next;
};

void printList();

void insert(int data);
