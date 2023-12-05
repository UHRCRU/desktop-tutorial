#include <stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 10

int h[TABLE_SIZE]={NULL};

void insert()
{

 int key,index,i,flag=0,hkey,hash2;
 printf("\nenter a value to insert into hash table\n");
 scanf("%d",&key);
 hkey=(2*key+3)%TABLE_SIZE;
 hash2 =(3*key+1)%TABLE_SIZE;
 for(i=0;i<TABLE_SIZE;i++)
 {
    index=(hkey+i*hash2)%TABLE_SIZE;
    if(h[index] == NULL)
    {
        h[index]=key;
        break;
    }
 }
 if(i == TABLE_SIZE)
     printf("\nelement cannot be inserted\n");
}
void search()
{

 int key,index,i,flag=0,hash2,hkey;
 printf("\nenter search element\n");
 scanf("%d",&key);
 hkey=(2*key+3)%TABLE_SIZE;
 hash2 =(3*key+1)%TABLE_SIZE;
 for(i=0;i<TABLE_SIZE; i++)
 {
    index=(hkey+i*hash2)%TABLE_SIZE;
    if(h[index]==key)
    {
      printf("value is found at index %d",index);
      break;
    }
  }
  if(i == TABLE_SIZE)
    printf("\n value is not found\n");
}
void display()
{

  int i;
  printf("\nelements in the hash table are \n");
  for(i=0;i< TABLE_SIZE; i++)
    printf("\nat index %d \t value =  %d",i,h[i]);

}
main()
{
    int opt,i;
    while(1)
    {
        printf("\nPress 1. Insert\t 2. Display \t3. Search \t4.Exit \n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:exit(0);
        }
    }
}
