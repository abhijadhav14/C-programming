#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
 int w;

 FILE *fp;
struct user
{
    char username[20];
    char password[20];
    char blog[300];
    struct user *right;
    struct user *left;
};
 void login_check()
  {    struct user data;
        char username1[20],password1[20];
     fp=fopen("users.txt","r");
     printf("enter the username\n");
                scanf("%s",username1);
                printf("enter the password \n");
                scanf("%s",password1);
    while(fp!=EOF)
    {

     fscanf(fp,"%s \t %s\n",data.username,data.password);
      printf("%s \t %s\n",data.username,data.password);
     if(strcmp(username1,data.username)==0&&strcmp(password1,data.password)==0)
     {
         printf("login successfully\n");
          blogs(data);
     }


    }

    printf("login failed");
    return;

 }
void blogs(struct user* data)
{

    int select;
    char blog[100];

          printf("welcome %s\n",data->username);
        for(w=0;w<=1;w++){
//          Sleep(10000);
         printf("1.writing a blog\n 2.reading a blogs\n 3.exit\n");
       scanf("%d",&select);

      switch(select)
    {
        case 1: write_blogs(&data);
               break;
      case 2: read_blog(&data);
               break;


        default:printf("ohh! you put the wrong option\n");

        }





}
}
void create_new_account(struct user*  root)
{
    char username[20],password[20];
    struct user* temp=root;
    if(root==NULL)
    {
        fp=fopen("users.txt","a");//create a new account by creating a node && writing into a file
        printf("enter the user name\n");
        scanf("%s",&username);
        printf("enter the password\n");
        scanf("%s",&password);
        fprintf(fp,"%s \t %s\n",username,password);
        temp=(struct user*)malloc(sizeof(struct user));
       strcpy(temp->username,username);
        strcpy(temp->password,password);
        temp->left=temp->right=NULL;
        root=temp;

   }

  printf("welcome to family\n");
  blogs(temp);

}
void write_blogs(struct user* root)
{
     FILE *fp=NULL;
    fp=fopen("blog.txt","a");
    scanf("%s",root->blog);


    fprintf(fp,"%s \n ",root->blog);
    w=0;
     printf("Blog Uploaded\n");
    return ;
}
void   read_blog(struct user data)
{
     FILE *fp=NULL;
    fp=fopen("blog.txt","r");
   fscanf(fp,"%s ",&data.blog);
   printf("%s",data.blog);
    w=0;
     printf("end\n");
    return ;
}
int main()
{
//   struct user data;
    struct user* root=NULL;

    int select;
    printf("1.LOGIN \n 2.CREATE NEW ACCOUNT \n ");
     scanf("%d",&select);

    switch(select)
    {
        case 1:login_check();
                break;
        case 2:create_new_account(&root);
                break;
        case 3: break;

        default:printf("ohh! you put the wrong option\n");

    }
    printf("thank you");
}





