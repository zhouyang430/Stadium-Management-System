#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define NUMBER 21
#define NAMELEN 20



typedef   struct customer_inf
{
	char customer_name[NAMELEN];//用户姓名
	char id[NUMBER];//用户ID
	char sex[NUMBER];//用户性别
	char mail[NUMBER];//用户邮箱
	char phonenumber[NUMBER];//用户电话
	char password[NUMBER];//用户密码
	char place[NUMBER];//用户地址
	int time;//用户违约次数
	int age;//用户年龄
	double balance;//用户信息


	struct customer_inf *next;

}CUST;

typedef   struct administrator_inf
{
	char administrator_name[NAMELEN];//管理员姓名
	char Gid[NUMBER];//管理员ID
	char Gsex[NUMBER];//管理员性别
	char Gmail[NUMBER];//管理员邮箱
	char Gphonenumber[NUMBER];//管理员电话
	char Gpassword[NUMBER];//管理员密码
	char Gplace[NUMBER];//管理员地址
	int Gage;//管理员年龄
	//管理员信息

	struct administrator_inf *next;

}GM;

typedef   struct order
{
	char orid[40];//订单号
	char cusid[20];//客户ID
	char nowtime[30];//下单日期时间
	char siid[12];//场地ID
	char sista[20];//所属场馆
	double orprice;//订单价格
	char ordate[30];//预定日期
	int ortimestart;//预定开始时间
	int ortimeover;//预定结束时间
	struct order *next;
}ORDER;


typedef struct Site2
{
	char SIid[NUMBER];//定义场地信息：编号
    char namr[NUMBER];//场馆名称
	char SIarea[NUMBER];//定义场地信息：区域
	char SIsta[NUMBER];//定义场地信息：场馆（内外场）
	char SIsport[NUMBER];//定义场地信息：运动类型
	int SIagemin;//定义场地信息：适用年龄
	int SIagemax;
	double SIprice;//定义场地信息：租金
	int SIord;//定义场地信息：租借情况
    int man;
	 int woman;

}SITE2;//用做按性别推荐的函数



typedef struct Site
{
	char SIid[NUMBER];//定义场地信息：编号
    char namr[NUMBER];//场馆名称
	char SIarea[NUMBER];//定义场地信息：区域
	char SIsta[NUMBER];//定义场地信息：场馆（内外场）
	char SIsport[NUMBER];//定义场地信息：运动类型
	int SIagemin;//定义场地信息：适用年龄
	int SIagemax;
	double SIprice;//定义场地信息：租金
	int SIord;//定义场地信息：租借情况
	struct Site *next;
}SITE;




typedef struct shijian2{
	char SIid[NUMBER];//定义场地信息：编号
    char namr[NUMBER];//场馆名称
	char SIarea[NUMBER];//定义场地信息：区域
	char SIsta[NUMBER];//定义场地信息：场馆（内外场）
	int time1;
	int time2;
	int cishu;
}SHIJIAN;




typedef struct Site22
{
	char SIid[NUMBER];//定义场地信息：编号
    char namr[NUMBER];//场馆名称
	char SIarea[NUMBER];//定义场地信息：区域
	char SIsta[NUMBER];//定义场地信息：场馆（内外场）
	char SIsport[NUMBER];//定义场地信息：运动类型
	int SIagemin;//定义场地信息：适用年龄
	int SIagemax;
	double SIprice;//定义场地信息：租金
	int SIord;//定义场地信息：租借情况
    int n2;

}SITE22;//用做按运动类别推荐的函数



GM *GMinsertBegin(GM *GfNode,GM *GnewNode);/*从头连接节点函数*/
GM *GMcreateinf (char Gnames1[NAMELEN][20],char Gids1[NUMBER][20],char Gsexs1[NUMBER][20],char Gmails1[NUMBER][20],char Gphonenumbers1[NUMBER][20],char Gpasswords1[NUMBER][20],char Gplaces1[NUMBER][20],int Gages1[20]);
CUST *createinf(char ids1 [NUMBER][20],char names1[NAMELEN][20],char sexs1[NAMELEN][10],int ages1[NUMBER],char phonenumbers1[NUMBER][20],char passwords1[NUMBER][20],char mails1[NAMELEN][20],double moneys1[20],char places1[NUMBER][20],int times1[20]);/*创建链表函数*/
CUST *insertBegin(CUST *fNode,CUST *newNode);/*从头连接节点函数*/
void denglu1(CUST *fNode,char IDs1[11],char PASSWORDs1[20]);/*查询函数*/
void GMdenglu1(CUST *fNode,GM *GMfNode,char IDS1[11],char PASSWORDS1[20]);
void yudingqueren1(CUST *np,CUST *fNode);
void chaxun3(CUST *np,CUST *fNode);
void chaxungeren1(CUST *np);
void zhuce1(CUST *fNode);
void xiugai1(CUST *np,CUST *fNode);
void leibiechaxun3(CUST *np,CUST *fNode);
void quyuchaxun3(CUST *np,CUST *fNode);
void changguanmingchaxun3(CUST *np,CUST *fNode);
void zujinchaxun3(CUST *np,CUST *fNode);
void changdileixing3(CUST *np,CUST *fNode);
void yudingliangchaxun3(CUST *np,CUST *fNode);
void suoyouchangdi1();
void tianjia1();
void tongji1();
void nianlingtongji1();
void yudingliang1();
void xingbietuijian(int t);
void tuijian2(char np[20],int year,int t);
void shijian2(int t,int p);
void xingbietuijian();
void GMchaxungeren1(GM *np);
void GMxiugai1(GM *np,GM *GMfode);
void chakanyuding1(ORDER *OfNode);
void yingye1(ORDER *OfNode);
void yudingliangchaxun1();
void  kongyuchaxun3();
void traversal(SITE *first,char id[]);
	void xiugaiyue1(CUST *fNode);
	void xiugaiguke1(CUST *fNode);
void chaxundingdan1(CUST *cp);
CUST *gukechuangjianlianbiao1();
CUST *teding1(CUST *np);
GM *chuangjianlianbiao1();
GM *GMteding1(GM *np);
ORDER *createinf4();/*创建链表函数*/
SITE *createinf2();
int querenxiadan5(CUST *cust5,CUST *fNode);
ORDER *yuding4(CUST *cust5,CUST *fNode);
ORDER *Oteding1(ORDER *np1);
int jixuyuding5();
void dachudingdan(ORDER *finalorder,int limit);
int panduannianling5(CUST *cust5,SITE *site5);
int dateavailable(char order[20]);
ORDER *shijianpanduan(char ordate[20],SITE *site5);
int isEmail(char *email);//判定邮箱合法
double cancleorder(CUST *cust5);




int main()//主函数执行
{
    char IDS1[11];//输入的管理员ID
    char PASSWORDS1[20]; //输入的管理员密码
    char IDs1[11]; //输入的管理员ID
    char PASSWORDs1[20]; //输入的顾客密码
	int N;//操作序号
	CUST *fNode=gukechuangjianlianbiao1();
	GM *GMfNode=chuangjianlianbiao1();

    printf("                 欢迎使用本程序！                  \n\n");
	printf("****************** 体育场管理系统 **********************\n\n");/* 打印初始菜单*/
	printf("                  1. 用户登录                \n\n");
	printf("                  2. 管理员登录                 \n\n");
	printf("                  3. 注册                 \n\n");
	printf("                  4. 退出                  \n\n");
	printf("********************************************************\n");
  do{

  	printf("请选择执行序号:");
    scanf("%d",&N);/*选择的操作序号*/

    getchar();
    if(N<=0||N>4)
    printf("错误，请重新输入正确序号。\n");//垃圾数据处理

		switch(N)
	    {
		case 1:
			system("cls");
			printf("                   用户ID                \n\n");
			gets(IDs1);//获得ID
			printf("                   用户密码              \n\n");
			gets(PASSWORDs1);//获得密码
	      		denglu1(fNode,IDs1,PASSWORDs1);//登陆函数
				break;
		case 2:
	    	system("cls");
			printf("                   管理员ID                \n\n");
	        gets(IDS1);
	        printf("                   管理员密码              \n\n");
	        gets(PASSWORDS1);
	       	   GMdenglu1(fNode,GMfNode,IDS1,PASSWORDS1); //登陆函数
		  		break;
		case 3:
			system("cls");
	    	zhuce1(fNode);//注册函数

				break;
		}


    if(N!=4&&(N!=3))//非退出重新打印菜单
	 		{
			 	system("pause");
	   			system("cls");

					printf("****************** 体育场管理系统 **********************\n\n");/* 打印菜单*/
					printf("                  1. 用户登录                \n\n");
					printf("                  2. 管理员登录                 \n\n");
					printf("                  3. 注册                 \n\n");
					printf("                  4. 退出                  \n\n");
					printf("********************************************************\n");
	 		}
	}

	while(N!=4&&(N!=3));//退出
	if(N==4)
	{
		system("cls");
		printf("\n\n***************** 谢谢使用 ***********************\n\n");
	}
	else
	printf("请退出程序后登入\n");
	return 0;

}





GM *GMcreateinf(char Gnames1[NAMELEN][20],char Gids1[NUMBER][20],char Gsexs1[NUMBER][20],char Gmails1[NUMBER][20],char Gphonenumbers1[NUMBER][20],char Gpasswords1[NUMBER][20],char Gplaces1[NUMBER][20],int Gages1[20])//创建管理员节点函数
{
	static int ig = 0;//数组序号
	GM *np;
	np = (GM*)malloc(sizeof(GM));//申请内存

	strcpy(np->administrator_name,Gnames1[ig]);//录入信息
	strcpy(np->Gid,Gids1[ig]);
	strcpy(np->Gsex,Gsexs1[ig]);
	strcpy(np->Gmail,Gmails1[ig]);
	strcpy(np->Gpassword,Gpasswords1[ig]);
	strcpy(np->Gplace,Gplaces1[ig]);
	strcpy(np->Gphonenumber,Gphonenumbers1[ig]);
	np->Gage=Gages1[ig];
	np->next=NULL;
	ig++;
	return np;
}





GM *GMinsertBegin(GM *GfNode1,GM *GnewNode)/*fNODE为头节点*/
{
	GnewNode->next = GfNode1;//新节点链连上老节点
	GfNode1 = GnewNode;//老节点被新节点替换

	return GfNode1;
}





GM *chuangjianlianbiao1()//创建管理员链表的函数
{
	FILE *GMFile;//临时文件
	 char Gnames1[NAMELEN][20];
	char Gids1[NUMBER][20];
	char Gsexs1[NUMBER][20];
	char Gmails1[NUMBER][20];
	char Gphonenumbers1[NUMBER][20];
	int Gages1[NUMBER];
	char Gplaces1[NUMBER][20];
	char Gpasswords1[NUMBER][20];


    int i1=0;
    GMFile=fopen("管理员信息.dat","r");



   while(fscanf(GMFile,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%d\n",Gids1[i1],Gnames1[i1],Gsexs1[i1],Gmails1[i1],Gphonenumbers1[i1],Gpasswords1[i1],Gplaces1[i1],&Gages1[i1])!=EOF)
   	{
	 i1++;
	}//文件数据录入到数组
    fclose(GMFile);

    GM *GfNode1=NULL,*GnewNode=NULL,*np=NULL;//初始化
  int ik;
  for (ik=0;ik<=i1;ik++)//创建初始表格
  {
   GnewNode=GMcreateinf(Gnames1,Gids1,Gsexs1,Gmails1,Gphonenumbers1,Gpasswords1,Gplaces1,Gages1);//创建一个新节点
   GfNode1=GMinsertBegin(GfNode1,GnewNode);//连接新节点


  }

return GfNode1;//返回链表头节点
}




CUST *createinf(char ids1 [NUMBER][20],char names1[NAMELEN][20],char sexs1[NAMELEN][10],int ages1[NUMBER],char phonenumbers1[NAMELEN][20],char passwords1[NUMBER][20],char mails1[NAMELEN][20],double moneys1[20],char places1[NUMBER][20],int times1[20])//创建节点函数
{
	static int i = 0;//临时数组序号
	CUST *np;
	np = (CUST*)malloc(sizeof(CUST));//申请内存

	strcpy(np->customer_name, names1[i]);//录入节点
	strcpy(np->id,ids1[i]);
	strcpy(np->sex,sexs1[i]);
	strcpy(np->mail,mails1[i]);
	strcpy(np->password,passwords1[i]);
	strcpy(np->place,places1[i]);
	strcpy(np->phonenumber,phonenumbers1[i]);
	np->balance=moneys1[i];
	np->time=times1[i];
	np->age=ages1[i];

	np->next=NULL;
	i++;
	return np;//返回一个指针（新节点）
}




CUST *insertBegin(CUST *fNode1,CUST *newNode)/*fNODE为头节点*/
{
	newNode->next = fNode1;//新节点链连上老节点
	fNode1 = newNode;//老节点被新节点替换

	return fNode1;
}




CUST *gukechuangjianlianbiao1()//顾客信息创建链表函数
{
	FILE *File;//临时文件
	 char names1[NAMELEN][20];
	char ids1[NUMBER][20];
	char sexs1[NUMBER][10];
	char mails1[NUMBER][20];
	char phonenumbers1[NUMBER][20];
	int ages1[NUMBER];
	char places1[NUMBER][20];
	char passwords1[NUMBER][20];
	double moneys1[NUMBER];
	int times1[NUMBER];

    int i1=0;//数组序号
    File=fopen("顾客信息.dat","r");

/*	 if(File == NULL)
{
printf("open file failed\n");
return -1;
}//检测文件是否存在 */

   while(fscanf(File,"%s\n%s\n%s\n%d\n%s\n%s\n%s\n%lf\n%s\n%d\n",ids1[i1],names1[i1],sexs1[i1],&ages1[i1],phonenumbers1[i1],passwords1[i1],mails1[i1],&moneys1[i1],places1[i1],&times1[i1])!=EOF)
   	{
	 i1++;
	}
    fclose(File);

    CUST *fNode1=NULL,*newNode=NULL,*np=NULL;//初始化
  int ik;
  for (ik=0;ik<=i1;ik++)//创建初始表格
  {newNode=createinf(ids1,names1,sexs1,ages1,phonenumbers1,passwords1,mails1,moneys1,places1,times1);
   fNode1=insertBegin(fNode1,newNode);


  }

	return fNode1;
}





void GMdenglu1(CUST *fNode,GM *GMfNode,char IDS1[11],char PASSWORDS1[20])/*管理员登陆大函数*/
{
    ORDER *OfNode=createinf4();  //创建链表头节点


	GM *np= GMfNode; //录入链表头节点给临时指针


	while((np!=NULL)&&(strcmp(np->Gid,IDS1)!=0)) //找到相同符合id才跳出循环

		{
		np=np->next;
	    }



  {
  	if ((np!=NULL)&&(strcmp(np->Gpassword,PASSWORDS1)!=0))//验证密码
    	{
		printf("密码错误，请重新输入\n") ;

		}

	else if((np!=NULL)&&(strcmp(np->Gpassword,PASSWORDS1)==0))
	{

	printf("登陆成功\n");
    system("pause");

	system("cls");
	int N1;
	do{	        printf("*************************************************\n\n");
				printf("                   1.所有场地查询                \n\n");
    			printf("                   2.场地添加               \n\n");
    			printf("                   3.个人信息修改                \n\n");
    			printf("                   4.统计信息               \n\n");
    			printf("                   5.查看用户预订情况              \n\n");
    			printf("                   6.查询个人信息                \n\n");
    			printf("                   7.修改顾客信息                \n\n");
    			printf("                   8.返回首页                \n\n");
    			printf("*************************************************\n");
    			printf("请选择执行序号:");
    			scanf("%d",&N1);/*选择的操作序号*/
    			getchar();
    			if(N1<=0||N1>8)
    			{
				printf("错误，请重新输入正确序号。\n");//垃圾数据处理
				system("pause");
   				system("cls");
				}
	switch(N1)
	{
	 	case 1:	system("cls");
	 		   	suoyouchangdi1();
		 	  	system("pause");
	          	system("cls");break;
	 	case 2:	system("cls");
		      	tianjia1();
		      	system("pause");
			  	system("cls");break;
		case 3:	system("cls");
		       	GMxiugai1(np,GMfNode);
		       	system("pause");
			   	system("cls");break;
		case 4:	system("cls");
		      	tongji1();
		      	system("pause");
			  	system("cls");break;
		case 5:	system("cls");
		      	chakanyuding1(OfNode);
		       	system("pause");
			   	system("cls");break;
		case 6:	system("cls");
		       	GMchaxungeren1(np);break;
		case 7: system("cls");
				xiugaiguke1(fNode);
				system("pause");
			   	system("cls");break;

	 	default:break;

	}

	  }
	while((N1!=8)&&(N1!=3));
	if(N1==8)
	printf("已退出到首页\n");

    }
    else if (np==NULL)
	{printf("管理员ID不存在，请重新输入\n");
	system("pause");

	system("cls");

    }


  }

}




void denglu1(CUST *fNode,char IDs1[11],char PASSWORDs1[20])/*顾客登陆大函数*/
{

	CUST *np = fNode;//调入顾客链表头节点


	while((np!=NULL)&&(strcmp(np->id,IDs1)!=0)) //找到相同id才跳出循环

		{
		np=np->next; //找不到则偏移下个节点
	    }


  {
  	if ((np!=NULL)&&(strcmp(np->password, PASSWORDs1)!=0))//判断id对应的密码是否正确
    	{printf("密码错误，请重新输入\n") ;

		}

	else if((np!=NULL)&&(strcmp(np->password, PASSWORDs1)==0))
	{

	printf("登陆成功\n");
    system("pause");

	system("cls");
	int N1;
	do{
				printf("*************************************************\n\n");
				printf("                   1.场地查询                \n\n");
    			printf("                   2.场地推荐                \n\n");
    			printf("                   3.个人信息修改                \n\n");
    			printf("                   4.取消预定                \n\n");
    			printf("                   5.查询订单               \n\n");
    			printf("                   6.查询个人信息                \n\n");
    			printf("                   7.返回首页                \n\n");
    			printf("*************************************************\n");
    			printf("请选择执行序号:");
    			scanf("%d",&N1);/*选择的操作序号*/
    			getchar();
    			if(N1<=0||N1>7)
    			{
				printf("错误，请重新输入正确序号。\n");//垃圾数据处理
				system("pause");
   				system("cls");
				}
			switch(N1)
	{
	 	case 1:system("cls");
	 		   chaxun3(np,fNode);
		 	   system("pause");
	           system("cls");break;
	 	case 2:system("cls");
	 			int t,year;
	 			char np2[20];
	 	 	   if(strcmp(np->sex,"male")==0)
	 	 	   t=1;
	 	 	   else
	 	 	   t=2;

	 	 	   strcpy(np2,np->place);
	 	 	   year=np->age;
		       tuijian2(np2,year,t);
		       system("pause");
			   system("cls");break;
		case 3:system("cls");
		       xiugai1(np,fNode);
		       system("pause");
			   system("cls");break;
		case 4:
			   system("cls");
			   double l1;
			   l1=cancleorder(np);
			   if(l1==-1)
			   printf("您没有订单\n");
			   else if(l1!=-1&&l1!=-2)
			{
		 		np->balance+=l1;
		 		xiugaiyue1(fNode);
			}

			   system("pause");
			   system("cls");
					break;
		case 5:system("cls");
		       chaxundingdan1(np);
		       system("pause");
			   system("cls");break;
		case 6:system("cls");
		       chaxungeren1(np);break;

	 	default:break;

	}

	  }
	while((N1!=7)&&(N1!=3));
	if(N1==7)
	printf("已退出到首页\n");
    }


	else if (np==NULL)
	printf("用户ID不存在，请重新输入\n");
  }
}





void chaxun3(CUST *np,CUST *fNode) //查询大函数
{
	int NK1=0;//操作序号

		do{	 	printf("*************************************************\n\n");
				printf("             1.按照场地类型查询                \n\n");
    			printf("             2.按照场馆名称查询                \n\n");
    			printf("             3.按照场地运动类别查询             \n\n");
    			printf("             4.按照租金高低查询                \n\n");
    			printf("             5.按照预定量大小查询                \n\n");
    			printf("             6.按照所属区域查询                \n\n");
    			printf("             7.按照是否有空余场地查询                \n\n");
    			printf("             8.返回上页                \n\n");
    			printf("*************************************************\n");
    			printf("请选择执行序号:");
    			scanf("%d",&NK1);/*选择的操作序号*/
    			getchar();
    			if(NK1<=0||NK1>8)
    			printf("错误，请重新输入正确序号。\n");//垃圾数据处理

		switch(NK1)
			{
			case 1:
	    		system("cls");
	    		changdileixing3(np,fNode);

	    		system("pause");
	    		system("cls");
	     			break;
	    	case 2:
	    		system("cls");
	    		changguanmingchaxun3(np,fNode);
	    		system("pause");
	    		system("cls");
	    			break;
	    	case 3:
	    		system("cls");
	    		leibiechaxun3(np,fNode);

	    		system("pause");
	    		system("cls");
	    			break;
	    	case 4:
	    		system("cls");
	    		zujinchaxun3(np,fNode);

	    		system("pause");
	    		system("cls");
	    			break;
	    	case 5:
	    		system("cls");
	    		yudingliangchaxun3(np,fNode);

	    		system("pause");
	    		system("cls");
	    			break;
	    	case 6:
				system("cls");
				quyuchaxun3(np,fNode);
	    		system("pause");
	    		system("cls");
	    			break;


	    	case 7:
			int kl3;
				system("cls");

			 	kongyuchaxun3();


	    		system("pause");
	    		system("cls");
	    			break;
	   		default:
				printf("已退出至上层\n");
	   				break;

			}
		}

			while(NK1!=8);

}





void yudingqueren1(CUST *np,CUST *fNode)//预订确认函数
{
	/*CUST *fNODE;

	fNODE=gukechuangjianlianbiao1();
	CUST *cp=fNODE->next;
	printf("%s",cp->id);
		while(/*cp!=NULL&&*//*(strcmp(cp->id,np->id)!=0)) //找到相同id才跳出循环

		{
		cp=cp->next; //找不到则偏移下个节点
	    }
	printf("kkk");*/

	int NW1=0;//操作序号
	 do{
		    printf("*************** 是否进行预订? ***************** \n\n\n");
	    	printf("**********        1.是        ************* \n\n\n");
	    	printf("**********        2.否        ************* \n\n");
	    	scanf("%d",&NW1);
	    	if(NW1==1)
	        {
	            system("cls");
	        	querenxiadan5(np,fNode);
	        	break;
	        }
	        else if(NW1==2)
	        	break;
	        else
	       	printf("错误，请重新输入正确序号。\n");//垃圾数据处理
	            system("pause");
	            system("cls");

	        }


			while((NW1!=1)||(NW1!=2));

 }






void zhuce1(CUST *fNode)//顾客注册函数
{
	CUST *p1=fNode;
    FILE *outFile;
    char names[NAMELEN];
	char ids[NUMBER];
	char sexs[NUMBER];
	char mails[NUMBER];
	char passwords[NUMBER];
	char places[NUMBER];
	char phonenumbers[NUMBER];
	double balances=1000;
	int times=0;
	int ages;
	int count1=0;
	char n2;
	    outFile=fopen("顾客信息.dat","a");
 	while(1)
   {
   		count1=0;
   		p1=fNode;
		printf("                   用户ID                \n\n");
		gets(ids);
		int len1=strlen(ids);

		while(p1!=NULL)//查重ID
	  	{


			if((strcmp(p1->id,ids)==0)&&count1==0)
			{   count1++;
				printf("该用户ID已存在，请重新注册！\n");
			}

	    p1=p1->next;
		}


		if(len1<6||len1>10)
		printf("该用户ID长度不在6-10间，请重新注册！\n");

		if(count1==0&&len1>=6&&len1<=10)
		{
		printf("                   用户姓名               \n\n");
		gets(names);
		do{
		printf("                男生请选择1 女生请选择2             \n\n");
		scanf("%c",&n2);
		getchar();
		if(n2==49){strcpy(sexs,"male");break;}
		else if(n2==50){strcpy(sexs,"female");break;}
		else {printf("错误输入，请重试\n");}
		}while(1);



		printf("                   用户年龄                \n\n");
		scanf("%d",&ages);
		do
			{
		printf("                   用户电话               \n\n");
		scanf("%s",phonenumbers);
		int lenN1=0;
		lenN1=strlen(phonenumbers);
		if(lenN1!=11)
		printf("您输入电话为%d位，不符合11位规范，请重新输入\n",lenN1);

		else
		break;
			}
		while(1);



		getchar();
		printf("                   用户密码                \n\n");
		gets(passwords);
		while(1)
			{
	    printf("                   用户邮箱                \n\n");
		gets(mails);
	    		if(isEmail(mails)==1)
				{
					break;
				}
				printf("错误格式请重试\n");
			}

			printf("                   用户地址                \n\n");
		gets(places);


	 fprintf(outFile,"%-9s\n%-9s\n%-9s\n",ids,names,sexs);
	 fprintf(outFile,"%-10d\n%-13s\n%-9s\n%-14s\n",ages,phonenumbers,passwords,mails);
	 fprintf(outFile,"%-5.2lf\n%-9s\n%-10d\n",balances,places,times);
	 fclose(outFile);
	 printf("\n您已成功注册\n");
	 system("pause");
	 system("cls");

	break;
		}
 	}
}





void xiugai1(CUST *np,CUST *fNode)//顾客修改信息函数
{

    FILE *outFile;
    CUST *np1=fNode->next;
    CUST *p1=fNode;
    char names[NAMELEN];
	char ids[NUMBER];
	char sexs[NUMBER];
	char mails[NUMBER];
	char passwords[NUMBER];
	char places[NUMBER];
	char phonenumbers[NUMBER];
	double balances=1000;
	int times=0;
	int ages;
    int count1=0;
   int y=0;
   int yk1=0;
	int NL1;

	do{
	    printf("             请选择修改的信息种类：          \n\n");
	    printf("                  1.用户ID                \n\n");
		printf("                  2.用户姓名               \n\n");
		printf("                  3.用户性别                \n\n");
		printf("                  4.用户年龄                \n\n");
		printf("                  5.用户电话               \n\n");
		printf("                  6.用户密码                \n\n");
		printf("                  7.用户邮箱                \n\n");
		printf("                  8.用户地址                \n\n");
		printf("                  9.全部修改                \n\n");
		printf("请输入操作序号\n\n");
		scanf("%d",&NL1);
		if((NL1<=0)||(NL1>=10))
		{
		printf("错误，请重新选择!\n");
		system("pause");
   		system("cls");
		}
		getchar();
	    switch(NL1)
		{
			case 1:
				system("cls");
				printf("             您当前的用户ID：          \n\n");
				printf("%s\n",teding1(np)->id);
			do{
				int count1=0;
			printf("             请输入修改后的用户ID：          \n\n");

				gets(ids);
		int len1=0;
		 len1=strlen(ids);

		while(p1!=NULL)//查重ID
	  	{


			if((strcmp(p1->id,ids)==0)&&count1==0)
			{   count1++;
				printf("该用户ID已存在，请重新修改！\n");


			}

	    p1=p1->next;
		}


		if(len1<6||len1>10)
		{
				printf("该用户ID长度不在6-10间，请重新修改！\n");

	}
		if(count1==0&&len1>=6&&len1<=10)
				{
				strcpy(np->id,ids);

				y=1;
				break;
				}
					}while(y!=1);
					break;
			case 2:
				system("cls");
				printf("             您当前的用户姓名：          \n\n");
				printf("%s\n",teding1(np)->customer_name);
				printf("             请输入修改后的用户姓名：          \n\n");
				gets(names);
				strcpy(np->customer_name,names);
				printf("\n修改成功,请重新登陆！\n\n");
				break;
			case 3:
				system("cls");
				printf("             您当前的用户性别：          \n\n");
				printf("%s\n",teding1(np)->sex);
			do{
				char n2;
				printf("                男士请选择1 女士请选择2             \n\n");
				scanf("%c",&n2);
				getchar();
				if(n2==49){strcpy(sexs,"male");	strcpy(np->sex,sexs);break;}
				else if(n2==50){strcpy(sexs,"female");strcpy(np->sex,sexs);break;}
				else {printf("错误输入，请重试\n");}
			  }			while(1);
				break;
			case 4:
				system("cls");
				printf("             您当前的用户年龄：          \n\n");
				printf("%d\n",teding1(np)->age);
				printf("             请输入修改后的用户年龄：          \n\n");
				scanf("%d",&ages);
				np->age=ages;
				printf("\n修改成功,请重新登陆！\n\n");
				break;
			case 5:
				system("cls");
				printf("             您当前的用户电话：          \n\n");
				printf("%s\n",teding1(np)->phonenumber);
			do{
	         	printf("                   用户电话               \n\n");
				scanf("%s",phonenumbers);
				int lenN1=0;
				lenN1=strlen(phonenumbers);
				if(lenN1!=11)
					printf("您输入电话为%d位，不符合11位规范，请重新修改\n",lenN1);

				else
				break;
			  }	while(1);
				strcpy(np->phonenumber,phonenumbers);
				printf("\n修改成功,请重新登陆！\n\n");
				break;
			case 6:
				system("cls");
				printf("             您当前的用户密码：          \n\n");
				printf("%s\n",teding1(np)->password);
				printf("             请输入修改后的用户密码：          \n\n");

				gets(passwords);
				strcpy(np->password,passwords);
				printf("\n修改成功,请重新登陆！\n\n");
				break;
			case 7:
				system("cls");
				printf("             您当前的用户邮箱：          \n\n");
				printf("%s\n",teding1(np)->mail);
			while(1)
				{
				printf("             请输入修改后的用户邮箱：          \n\n");
				gets(mails);

					if(isEmail(mails)==1)
				{
					break;
				}
				printf("错误格式请重试\n");
				}
				strcpy(np->mail,mails);
				printf("\n修改成功,请重新登陆！\n\n");
				break;
			case 8:
				system("cls");
				printf("             您当前的用户地址：          \n\n");
				printf("%s\n",teding1(np)->place);
				printf("             请输入修改后的用户地址：          \n\n");
				gets(places);
				strcpy(np->place,places);
				printf("\n修改成功,请重新登陆！\n\n");
				break;
			case 9:
			    system("cls");
			    printf("             您当前的用户ID：          \n\n");
				printf("%s\n",teding1(np)->id);
				printf("             您当前的用户姓名：          \n\n");
				printf("%s\n",teding1(np)->customer_name);
				printf("             您当前的用户性别：          \n\n");
				printf("%s\n",teding1(np)->sex);
			    printf("             您当前的用户年龄：          \n\n");
				printf("%d\n",teding1(np)->age);
				printf("             您当前的用户电话：          \n\n");
				printf("%s\n",teding1(np)->phonenumber);
				printf("             您当前的用户密码：          \n\n");
				printf("%s\n",teding1(np)->password);
				printf("             您当前的用户邮箱：          \n\n");
				printf("%s\n",teding1(np)->mail);
				printf("             您当前的用户地址：          \n\n");
				printf("%s\n",teding1(np)->place);

				system("pause");
				printf("             请输入修改后的信息：          \n\n");

			do{
			    int count1=0;
				printf("                   用户ID                \n\n");
				gets(ids);
		int lenK1;
		 		lenK1=strlen(ids);

		while(p1!=NULL)//查重ID
	  	{


			if((strcmp(p1->id,ids)==0)&&count1==0)
			{   count1++;
				printf("该用户ID已存在，请重新修改！\n");
			}

	    p1=p1->next;
		}


		if(lenK1<6||lenK1>10)

				printf("该用户ID长度不在6-10间，请重新修改！\n");


		if(count1==0&&lenK1>=6&&lenK1<=10)
		{
		strcpy(np->id,ids);
		yk1=1;
		break;
		}
			}  while(yk1==0);


				printf("                   用户姓名               \n\n");
				gets(names);

			do{
				char n1;
				printf("                男生请选择1 女生请选择2             \n\n");
				scanf("%c",&n1);
				getchar();
				if(n1==49){strcpy(sexs,"male");	break;}
				else if(n1==50){strcpy(sexs,"female");break;}
				else {printf("错误输入，请重试\n");}
			  }			while(1);

				printf("                   用户年龄                \n\n");
				scanf("%d",&ages);
			do{
	         	printf("                   用户电话               \n\n");
				scanf("%s",&phonenumbers);
				int lenN1=0;
				lenN1=strlen(phonenumbers);
				if(lenN1!=11)
					printf("您输入电话为%d位，不符合11位规范，请重新注册\n",lenN1);

				else
				break;
			  }
			    while(1);

				getchar();
				printf("                   用户密码                \n\n");
				gets(passwords);
					while(1)
				{
				printf("             请输入修改后的用户邮箱：          \n\n");
				gets(mails);

					if(isEmail(mails)==1)
				{
					break;
				}
				printf("错误格式请重试\n");
				}
				printf("                   用户地址                \n\n");
				gets(places);

				    strcpy(np->customer_name,names);
	    			strcpy(np->id,ids);
					strcpy(np->sex,sexs);
					strcpy(np->mail,mails);
					strcpy(np->password,passwords);
					strcpy(np->place,places);
					strcpy(np->phonenumber,phonenumbers);
					np->age=ages;
				printf("\n修改成功,请重新登陆！\n\n");
				break;



			default: break;
		}

	}
	 while((NL1<=0)||(NL1>=10));
	   outFile=fopen("顾客信息.dat","w+");
	    while(np1!=NULL)
	    {
		fprintf(outFile,"%-9s\n%-9s\n%-9s\n",np1->id,np1->customer_name,np1->sex);
	 	fprintf(outFile,"%-10d\n%-13s\n%-9s\n%-14s\n",np1->age,np1->phonenumber,np1->password,np1->mail);
	 	fprintf(outFile,"%-5.2lf\n%-9s\n%-10d\n",np1->balance,np1->place,np->time);
	 	np1=np1->next;
		}

	 fclose(outFile);

}





void GMxiugai1(GM *np,GM *GMfNode)//管理员信息修改函数
{
	GM *p1=GMfNode;//调入链表头节点
    FILE *outFile;//临时文件
    GM *np1=GMfNode->next;
    char names[NAMELEN];
	char ids[NUMBER];
	char sexs[NUMBER];
	char mails[NUMBER];
	char passwords[NUMBER];
	char places[NUMBER];
	char phonenumbers[NUMBER];
	int ages;
	int NL1; //操作序号
	int count1=0;//重复id的个数
	int y=0;//判断条件的数字
	int yk1=0;//判断条件的数字

	do{
	    printf("             请选择修改的信息种类：          \n\n");
	    printf("                  1.管理员ID                \n\n");
		printf("                  2.管理员姓名               \n\n");
		printf("                  3.管理员性别                \n\n");
		printf("                  4.管理员年龄                \n\n");
		printf("                  5.管理员电话               \n\n");
		printf("                  6.管理员密码                \n\n");
		printf("                  7.管理员邮箱                \n\n");
		printf("                  8.管理员地址                \n\n");
		printf("                  9.全部修改                \n\n");
		printf("请输入操作序号\n\n");
		scanf("%d",&NL1);
		if((NL1<=0)||(NL1>=10))//垃圾数据处理
		{
		printf("错误，请重新选择!\n");
		system("pause");
   		system("cls");
		}
		getchar();
	    switch(NL1)
		{
			case 1:
				system("cls");
				printf("             您当前的管理员ID：          \n\n");
				printf("%s\n",GMteding1(np)->Gid);
				do{
					int count1=0;
			printf("             请输入修改后的管理员ID：          \n\n");

				gets(ids);
		int len1;
		 len1=strlen(ids);

		while(p1!=NULL)//查重ID
	  	{


			if((strcmp(p1->Gid,ids)==0)&&count1==0)
			{   count1++;
				printf("该用户ID已存在，请重新登陆修改！\n");


			}

	    p1=p1->next;
		}


		if(len1<6||len1>10)//验证长度
		{
				printf("该管理员ID长度不在6-10间，请重新修改！\n");

	}
		if(count1==0&&len1>=6&&len1<=10)//成功
				{
				strcpy(np->Gid,ids);
				y=1;
				break;
				}
					}while(y==0);
					break;

			case 2:
				system("cls");
				printf("             您当前的管理员姓名：          \n\n");
				printf("%s\n",GMteding1(np)->administrator_name);
				printf("             请输入修改后的管理员姓名：          \n\n");
				gets(names);
				strcpy(np->administrator_name,names);
				break;
			case 3:
				system("cls");
				printf("             您当前的管理员性别：          \n\n");
				printf("%s\n",GMteding1(np)->Gsex);
			do{
				char n2;
				printf("                男士请选择1 女士请选择2             \n\n");
				scanf("%c",&n2);
				getchar();
				if(n2==49){strcpy(sexs,"male");	strcpy(np->Gsex,sexs);break;}
				else if(n2==50){strcpy(sexs,"female");strcpy(np->Gsex,sexs);break;}
				else {printf("错误输入，请重试\n");}
			  }			while(1);
				break;


			case 4:
				system("cls");
				printf("             您当前的管理员年龄：          \n\n");
				printf("%d\n",GMteding1(np)->Gage);
				printf("             请输入修改后的管理员年龄：          \n\n");
				scanf("%d",&ages);
				np->Gage=ages;
				break;
			case 5:
				system("cls");
				printf("             您当前的管理员电话：          \n\n");
				printf("%s\n",GMteding1(np)->Gphonenumber);
			do{
	         	printf("                   用户电话               \n\n");
				scanf("%s",phonenumbers);
				int lenN1=0;
				lenN1=strlen(phonenumbers);
				if(lenN1!=11)
					printf("您输入电话为%d位，不符合11位规范，请重新输入\n",lenN1);

				else
				break;
			  }	while(1);
				strcpy(np->Gphonenumber,phonenumbers);

				break;
			case 6:
				system("cls");
				printf("             您当前的管理员密码：          \n\n");
				printf("%s\n",GMteding1(np)->Gpassword);
				printf("             请输入修改后的管理员密码：          \n\n");

				gets(passwords);
				strcpy(np->Gpassword,passwords);
				break;
			case 7:
				system("cls");
				printf("             您当前的管理员邮箱：          \n\n");
				printf("%s\n",GMteding1(np)->Gmail);
					while(1)
				{
					printf("             请输入修改后的管理员邮箱：          \n\n");
				gets(mails);

					if(isEmail(mails)==1)
				{
					break;
				}
				printf("错误格式请重试\n");
				}

				strcpy(np->Gmail,mails);
				break;
			case 8:
				system("cls");
				printf("             您当前的管理员地址：          \n\n");
				printf("%s\n",GMteding1(np)->Gplace);
				printf("             请输入修改后的管理员地址：          \n\n");
				gets(places);
				strcpy(np->Gplace,places);
				break;
			case 9:
			    system("cls");
			    printf("             您当前的管理员ID：          \n\n");
				printf("%s\n",GMteding1(np)->Gid);
				printf("             您当前的管理员姓名：          \n\n");
				printf("%s\n",GMteding1(np)->administrator_name);
				printf("             您当前的管理员性别：          \n\n");
				printf("%s\n",GMteding1(np)->Gsex);
			    printf("             您当前的管理员年龄：          \n\n");
				printf("%d\n",GMteding1(np)->Gage);
				printf("             您当前的管理员电话：          \n\n");
				printf("%s\n",GMteding1(np)->Gphonenumber);
				printf("             您当前的管理员密码：          \n\n");
				printf("%s\n",GMteding1(np)->Gpassword);
				printf("             您当前的管理员邮箱：          \n\n");
				printf("%s\n",GMteding1(np)->Gmail);
				printf("             您当前的管理员地址：          \n\n");
				printf("%s\n",GMteding1(np)->Gplace);

				system("pause");
				printf("             请输入修改后的信息：          \n\n");
			do{
			    int count1=0;
				printf("                   用户ID                \n\n");
				gets(ids);
				int lenK1;
		 		lenK1=strlen(ids);

				while(p1!=NULL)//查重ID
	  			{


				if((strcmp(p1->Gid,ids)==0)&&count1==0)
					{   count1++;
				printf("该用户ID已存在，请重新修改！\n");
					}

	    		p1=p1->next;//偏移到下个节点
				}


		if(lenK1<6||lenK1>10)

				printf("该用户ID长度不在6-10间，请重新修改！\n");


		if(count1==0&&lenK1>=6&&lenK1<=10)
		{
		strcpy(np->Gid,ids);
		yk1=1;
		break;
		}
			}  while(yk1==0);
				printf("                   管理员姓名               \n\n");
				gets(names);

			do{
				char n2;
				printf("                男士请选择1 女士请选择2             \n\n");
				scanf("%c",&n2);
				getchar();
				if(n2==49){strcpy(sexs,"male");	break;}
				else if(n2==50){strcpy(sexs,"female");break;}
				else {printf("错误输入，请重试\n");}
			  }
			while(1);

				printf("                   管理员年龄                \n\n");
				scanf("%d",&ages);
				do{
	         	printf("                   用户电话               \n\n");
				scanf("%s",&phonenumbers);
				int lenN1=0;
			 	lenN1=strlen(phonenumbers);
				if(lenN1!=11)
					printf("您输入电话为%d位，不符合11位规范，请重新输入\n",lenN1);

				else
				break;
			  	}
				while(1);

				getchar();
				printf("                   管理员密码                \n\n");
				gets(passwords);
				while(1)
				{
				printf("             请输入修改后的管理员邮箱：          \n\n");
				gets(mails);

					if(isEmail(mails)==1)
				{
					break;
				}
				printf("错误格式请重试\n");
				}
				printf("                   管理员地址                \n\n");
				gets(places);

				    strcpy(np->administrator_name,names);
	    			strcpy(np->Gid,ids);
					strcpy(np->Gsex,sexs);
					strcpy(np->Gmail,mails);
					strcpy(np->Gpassword,passwords);
					strcpy(np->Gplace,places);
					strcpy(np->Gphonenumber,phonenumbers);
					np->Gage=ages;
						break;

			default: break;
		}

	}
	 while((NL1<=0)||(NL1>=10));
	   outFile=fopen("管理员信息.dat","w+");
	    while(np1!=NULL)
	    {
		fprintf(outFile,"%-12s\n%-11s\n%-9s\n",np1->Gid,np1->administrator_name,np1->Gsex);
	 	fprintf(outFile,"%-15s\n%-15s\n%-14s\n%-10s\n",np1->Gmail,np1->Gphonenumber,np1->Gpassword,np1->Gplace);
	 	fprintf(outFile,"%-10d\n",np1->Gage);
	 	np1=np1->next;
		}

	 fclose(outFile);
	 printf("\n修改成功,请重新登陆！\n\n");
}





CUST *teding1(CUST *np)//把顾客信息链表特定的节点录到一个独立结构体
{

	CUST *np1;//独立结构体
	np1 = (CUST*)malloc(sizeof(CUST));//申请内存

	strcpy(np1->customer_name,np->customer_name );
	strcpy(np1->id, np->id);
	strcpy(np1->sex,np->sex );
	strcpy(np1->mail,np->mail );
	strcpy(np1->password,np->password);
	strcpy(np1->place,np->place);
	strcpy(np1->phonenumber,np->phonenumber);
	np1->balance=np->balance;
	np1->time=np->time;
	np1->age=np->age;

	np1->next = NULL;

	return np1;


}






void chaxungeren1(CUST *np)//查询个人信息函数
{
//打出当前信息
  				printf("             您当前的用户ID：          \n\n");
				printf("%s\n",teding1(np)->id);
				printf("             您当前的用户姓名：          \n\n");
				printf("%s\n",teding1(np)->customer_name);
				printf("             您当前的用户性别：          \n\n");
				printf("%s\n",teding1(np)->sex);
			    printf("             您当前的用户年龄：          \n\n");
				printf("%d\n",teding1(np)->age);
				printf("             您当前的用户电话：          \n\n");
				printf("%s\n",teding1(np)->phonenumber);
				printf("             您当前的用户密码：          \n\n");
				printf("%s\n",teding1(np)->password);
				printf("             您当前的用户邮箱：          \n\n");
				printf("%s\n",teding1(np)->mail);
				printf("             您当前的用户地址：          \n\n");
				printf("%s\n",teding1(np)->place);
				printf("             您当前的用户余额：          \n\n");
				printf("%5.2lf\n",teding1(np)->balance);
				system("pause");
				system("cls");
}





void leibiechaxun3(CUST *np,CUST *fNode)//按照类别查询场地函数
{
	int i3=0,j3=0;//场地个数
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("场地信息.txt","r");

	char SIid3[NUMBER][50];//定义场地信息：编号
    char namr3[NUMBER][50];//场馆名称
	char SIarea3[NUMBER][50];//定义场地信息：区域
	char SIsta3[NUMBER][50];//定义场地信息：场馆（内外场）
	char SIsport3[NUMBER][50];//定义场地信息：运动类型
    char SIagemax3[NUMBER][50];//定义场地信息：适用年龄
	char SIagemin3[NUMBER][50];//定义场地信息：适用年龄
	char SIprice3[NUMBER][50];//定义场地信息：租金
	char SIord3[NUMBER][50];//定义场地信息：租借情况
	char gm[50];



	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],SIprice3[i3],SIord3[i3])!=EOF)
	{
	 i3++;
	}//文件数据录入到数组

    printf("请输入想要查询的运动类别 :");
	gets(gm); //输入运动类别


		for(k3=0;k3<i3;k3++)//计数
		{
			//if(strcmp(s1,s2)==0)
			if (strcmp(SIsport3[k3],gm) == 0)//找到相同条件的场馆
           {

             m3++;//相同条件场馆个数+1
             if(m3==1)
             {
             	printf("场馆编号\t场馆名称\t场馆所属地区\t场地项目\t运动类别\t准入最小年龄\t准入最大年龄\t每小时租金\t历史预约次数\n");
			 }
	 		printf("%-15s%-20s%-15s%-20s%-15s%-15s%-15s%-15s%-15s\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);

		   }
		}
		if(m3==0)//无相同条件场馆
		{
			printf("抱歉，没有该项运动，请重新输入\n");
		}

		else if(m3!=0)
		{   system("pause");
			system("cls");
		  	yudingqueren1(np,fNode);
		}

    fclose(fp3);

}





void quyuchaxun3(CUST *np,CUST *fNode)//按照区域查询场馆函数
{
	int i3=0,j3=0;//场馆个数
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("场地信息.txt","r");

	char SIid3[NUMBER][50];//定义场地信息：编号
    char namr3[NUMBER][50];//场馆名称
	char SIarea3[NUMBER][50];//定义场地信息：区域
	char SIsta3[NUMBER][50];//定义场地信息：场馆（内外场）
	char SIsport3[NUMBER][50];//定义场地信息：运动类型
    char SIagemax3[NUMBER][50];//定义场地信息：适用年龄
	char SIagemin3[NUMBER][50];//定义场地信息：适用年龄
	char SIprice3[NUMBER][50];//定义场地信息：租金
	char SIord3[NUMBER][50];//定义场地信息：租借情况
	char gm[50];


	//文件数据录入到数组
	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],SIprice3[i3],SIord3[i3])==9)
	{
	 i3++;
	}


    printf("请输入想要查询运动馆所属区域 :");
	gets(gm);



		for(k3=0;k3<i3;k3++)//计数
		{

			if (strcmp(SIarea3[k3],gm) == 0)//找到相同条件场馆
           {

             m3++;//相同条件场馆+1
             if(m3==1)
             {
             		printf("场馆编号\t场馆名称\t场馆所属地区\t场地项目\t运动类别\t准入最小年龄\t准入最大年龄\t每小时租金\t历史预约次数\n");
			 }
			 printf("%-15s\t%-20s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t\%-15s\t%-15s\t\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);

			   }
		}

		if(m3==0)
		{
		    printf("抱歉，没有该区域场馆，请重新输入\n");
		}
	      else if(m3!=0)
		  {
			system("pause");
			system("cls");
		   yudingqueren1(np,fNode);
		  }



    fclose(fp3);
	}





void changguanmingchaxun3(CUST *np,CUST *fNode)//场馆名查询函数
{
	int i3=0,j3=0;//场馆个数
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("场地信息.txt","r");

	char SIid3[NUMBER][50];//定义场地信息：编号
    char namr3[NUMBER][50];//场馆名称
	char SIarea3[NUMBER][50];//定义场地信息：区域
	char SIsta3[NUMBER][50];//定义场地信息：场馆（内外场）
	char SIsport3[NUMBER][50];//定义场地信息：运动类型
    char SIagemax3[NUMBER][50];//定义场地信息：适用年龄
	char SIagemin3[NUMBER][50];//定义场地信息：适用年龄
	char SIprice3[NUMBER][50];//定义场地信息：租金
	char SIord3[NUMBER][50];//定义场地信息：租借情况
	char gm[50];



	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],SIprice3[i3],SIord3[i3])!=EOF)
	{
	 i3++;
	}

    printf("请输入想要查询的场馆名 :");
	gets(gm);



		for(k3=0;k3<i3;k3++)//计数
		{

			if (strcmp(namr3[k3],gm) == 0)//找到相同场地名
           {

             m3++;//相同条件场地个数+1
             if(m3==1)//仅在第一次找到时打出
             {
             printf("场馆编号\t场馆名称\t场馆所属地区\t场地类别\t运动项目\t准入最小年龄\t准入最大年龄\t每小时租金\t历史预约次数\n");
			 }
			  printf("%-15s\t%-20s\t%-10s\t%-10s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);
		   }
		}
		if(m3==0)//找不到
		printf("抱歉，没有该场馆，请重新输入\n");
		else if(m3!=0)
		  {
			system("pause");
			system("cls");
			yudingqueren1(np,fNode);

		  }



    fclose(fp3);


}





void changdileixing3(CUST *np,CUST *fNode) //场地类别查询函数
{
	int i3=0,j3=0;//为场地个数
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("场地信息.txt","r");

	char SIid3[NUMBER][50];//定义场地信息：编号
    char namr3[NUMBER][50];//场馆名称
	char SIarea3[NUMBER][50];//定义场地信息：区域
	char SIsta3[NUMBER][50];//定义场地信息：场馆（内外场）
	char SIsport3[NUMBER][50];//定义场地信息：运动类型
    char SIagemax3[NUMBER][50];//定义场地信息：适用年龄
	char SIagemin3[NUMBER][50];//定义场地信息：适用年龄
	char SIprice3[NUMBER][50];//定义场地信息：租金
	char SIord3[NUMBER][50];//定义场地信息：租借情况
	char inside[20]="inside";
	char outside[20]="outside";

	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],SIprice3[i3],SIord3[i3])!=EOF)
	{
	 i3++;
	}//文件数据录入到数组里
	printf("\t\t\t\t\t1代表内场\n\t\t\t\t\t2代表外场\n\n");
	printf("请输入查询序号");
	scanf("%d",&a3);//选择操作序号

	if(a3==1)
	{
		printf("场馆编号\t场馆名称\t场馆所属地区\t场地类别\t运动项目\t准入最小年龄\t准入最大年龄\t每小时租金\t历史预约次数\n");
		for(k3=0;k3<i3;k3++)//计数
		{
			//if(strcmp(s1,s2)==0)
			if (strcmp(SIsta3[k3], inside) == 0)
            printf("%-15s\t%-20s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t\%-15s\t%-15s\t\n\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);
		}

	}
	if(a3==2)
	{
		printf("场馆编号\t场馆名称\t场馆所属地区\t场地类别\t运动项目\t准入最小年龄\t准入最大年龄\t每小时租金\t历史预约次数\n");
		for(m3=0;m3<i3;m3++)//计数
		{
			if (strcmp(SIsta3[m3], outside) == 0)
            printf("%-15s\t%-20s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t\%-15s\t%-15s\t\n\n",SIid3[m3],namr3[m3],SIarea3[m3],SIsta3[m3],SIsport3[m3],SIagemin3[m3],SIagemax3[m3],SIprice3[m3],SIord3[m3]);
		}
	}

	fclose(fp3);

			system("pause");
			system("cls");
		    yudingqueren1(np,fNode);

}





void zujinchaxun3(CUST *np,CUST *fNode)//按照租金高低查询场地
{
	int i3=0,j3=0;
	int i=0,j=0;
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("场地信息.txt","r");

	char SIid3[NUMBER][50];//定义场地信息：编号
    char namr3[NUMBER][50];//场馆名称
	char SIarea3[NUMBER][50];//定义场地信息：区域
	char SIsta3[NUMBER][50];//定义场地信息：场馆（内外场）
	char SIsport3[NUMBER][50];//定义场地信息：运动类型
    char SIagemax3[NUMBER][50];//定义场地信息：适用年龄
	char SIagemin3[NUMBER][50];//定义场地信息：适用年龄
	double SIprice3[50];//定义场地信息：租金
	char SIord3[NUMBER][50];//定义场地信息：租借情况

	int temp;
	char buff[100];


	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%lf\n%s\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],&SIprice3[i3],SIord3[i3])!=EOF)
	{
	 i3++;
	}


	for(i=0;i<i3;i++)
	{
		for(j=0;j<i3-i;j++)
		{
			if(SIprice3[j]<SIprice3[j+1])
			{
				strcpy(buff,SIid3[j]);//    1
                strcpy(SIid3[j],SIid3[j+1]);
                strcpy(SIid3[j+1],buff);

                strcpy(buff,namr3[j]);//    2
                strcpy(namr3[j],namr3[j+1]);
                strcpy(namr3[j+1],buff);

                strcpy(buff,SIarea3[j]);//    3
                strcpy(SIarea3[j],SIarea3[j+1]);
                strcpy(SIarea3[j+1],buff);

                strcpy(buff,SIsta3[j]);//     4
                strcpy(SIsta3[j],SIsta3[j+1]);
                strcpy(SIsta3[j+1],buff);

                strcpy(buff,SIsport3[j]);//     5
                strcpy(SIsport3[j],SIsport3[j+1]);
                strcpy(SIsport3[j+1],buff);


                strcpy(buff,SIagemin3[j]);//     6
                strcpy(SIagemin3[j],SIagemin3[j+1]);
                strcpy(SIagemin3[j+1],buff);

                strcpy(buff,SIagemax3[j]);//      7
                strcpy(SIagemax3[j],SIagemax3[j+1]);
                strcpy(SIagemax3[j+1],buff);

                strcpy(buff,SIord3[j]);//      8
                strcpy(SIord3[j],SIord3[j+1]);
                strcpy(SIord3[j+1],buff);

				temp=SIprice3[j];
				SIprice3[j]=SIprice3[j+1];
				SIprice3[j+1]=temp;

			}
		}
	}
		for(k3=0;k3<i3;k3++)
		{

             m3++;
             if(m3==1)
             {
             	printf("场馆编号\t场馆名称\t场馆所属地区\t场地类别\t运动项目\t准入最小年龄\t准入最大年龄\t每小时租金\t历史预约次数\n");
			 }
	 printf("%-15s\t%-20s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15.2lf\t%-15s\t\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);

		}
		fclose(fp3);
		system("pause");
		system("cls");
		yudingqueren1(np,fNode);


}





void yudingliangchaxun3(CUST *np,CUST *fNode) //按照预定量从大到小查询场地信息
{
	int i3=0,j3=0;
	int i=0,j=0;
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("场地信息.txt","r");

	char SIid3[NUMBER][50];//定义场地信息：编号
    char namr3[NUMBER][50];//场馆名称
	char SIarea3[NUMBER][50];//定义场地信息：区域
	char SIsta3[NUMBER][50];//定义场地信息：场馆（内外场）
	char SIsport3[NUMBER][50];//定义场地信息：运动类型
    char SIagemax3[NUMBER][50];//定义场地信息：适用年龄
	char SIagemin3[NUMBER][50];//定义场地信息：适用年龄
	char SIprice3[NUMBER][50];//定义场地信息：租金
	double SIord3[50];//定义场地信息：租借情况

	int temp;
	char buff[100];


	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%lf\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],SIprice3[i3],&SIord3[i3])!=EOF)
	{
	 i3++;
	}



	for(i=0;i<i3;i++)
	{
		for(j=0;j<i3-i;j++)
		{
			if(SIord3[j]<SIord3[j+1])
			{
				strcpy(buff,SIid3[j]);//    1
                strcpy(SIid3[j],SIid3[j+1]);
                strcpy(SIid3[j+1],buff);

                strcpy(buff,namr3[j]);//    2
                strcpy(namr3[j],namr3[j+1]);
                strcpy(namr3[j+1],buff);

                strcpy(buff,SIarea3[j]);//    3
                strcpy(SIarea3[j],SIarea3[j+1]);
                strcpy(SIarea3[j+1],buff);

                strcpy(buff,SIsta3[j]);//     4
                strcpy(SIsta3[j],SIsta3[j+1]);
                strcpy(SIsta3[j+1],buff);

                strcpy(buff,SIsport3[j]);//     5
                strcpy(SIsport3[j],SIsport3[j+1]);
                strcpy(SIsport3[j+1],buff);


                strcpy(buff,SIagemin3[j]);//     6
                strcpy(SIagemin3[j],SIagemin3[j+1]);
                strcpy(SIagemin3[j+1],buff);

                strcpy(buff,SIagemax3[j]);//      7
                strcpy(SIagemax3[j],SIagemax3[j+1]);
                strcpy(SIagemax3[j+1],buff);

                strcpy(buff,SIprice3[j]);//      8
                strcpy(SIprice3[j],SIprice3[j+1]);
                strcpy(SIprice3[j+1],buff);

				temp=SIord3[j];
				SIord3[j]=SIord3[j+1];
				SIord3[j+1]=temp;

			}
		}
	}
		for(k3=0;k3<i3;k3++)
		{

             m3++;
             if(m3==1)
             {
             	printf("场馆编号\t场馆名称\t场馆所属地区\t场地类别\t运动项目\t准入最小年龄\t准入最大年龄\t每小时租金\t历史预约次数\n");
			 }
	 printf("%-15s\t%-20s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t\%-15s\t%-15.0lf\t\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);

		}

		fclose(fp3);
		system("pause");
			system("cls");
		    yudingqueren1(np,fNode);




 }






void suoyouchangdi1()//管理员查询所有场地信息
{
	int i3=0,j3=0;
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("场地信息.txt","r");

	char SIid3[NUMBER][50];//定义场地信息：编号
    char namr3[NUMBER][50];//场馆名称
	char SIarea3[NUMBER][50];//定义场地信息：区域
	char SIsta3[NUMBER][50];//定义场地信息：场馆（内外场）
	char SIsport3[NUMBER][50];//定义场地信息：运动类型
    char SIagemax3[NUMBER][50];//定义场地信息：适用年龄
	char SIagemin3[NUMBER][50];//定义场地信息：适用年龄
	char SIprice3[NUMBER][50];//定义场地信息：租金
	char SIord3[NUMBER][50];//定义场地信息：租借情况
	char gm[50];


	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],SIprice3[i3],SIord3[i3])!=EOF)
	{
	 i3++;
	}
		for(k3=0;k3<i3;k3++)
		{
			printf("场馆编号\t场馆名称\t   场馆所属地区\t    场地类别\t     运动项目\t   准入最小年龄\t  准入最大年龄\t每小时租金\t历史预约次数\n");
			printf("%-15s\t%-20s\t%-10s\t%-10s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);
		}

}





void tianjia1()//添加场馆函数
{
	FILE *fp1;
	fp1=fopen("场地信息.txt","a");

	char SIid1[NUMBER];//定义场地信息：编号
    char namr1[NUMBER];//场馆名称
	char SIarea1[NUMBER];//定义场地信息：区域
	char SIsta1[NUMBER];//定义场地信息：场馆（内外场）
	char SIsport1[NUMBER];//定义场地信息：运动类型
    char SIagemax1[NUMBER];//定义场地信息：适用年龄
	char SIagemin1[NUMBER];//定义场地信息：适用年龄
	char SIprice1[NUMBER];//定义场地信息：租金
	char SIord1[NUMBER];//定义场地信息：租借情况
	printf("                   场地编号                \n\n");
		gets(SIid1);
		printf("                    场地名称             \n\n");
		gets(namr1);
		printf("                   场地区域               \n\n");
		gets(SIarea1);
		printf("                   场地类型                \n\n");
		gets(SIsta1);
		printf("                   场地项目                \n\n");
		gets(SIsport1);
		printf("                   场地适用最小年龄                 \n\n");
		gets(SIagemin1);
		printf("                   场地适用最大年龄               \n\n");
		gets(SIagemax1);
		printf("                   场地小时租金                \n\n");
		gets(SIprice1);
		printf("                   场地预定量                \n\n");
		gets(SIord1);
	     fprintf(fp1,"%-15s\n%-20s\n%-15s\n",SIid1,namr1,SIarea1);//信息录入文件
	     fprintf(fp1,"%-15s\n%-15s\n",SIsta1,SIsport1);
	     fprintf(fp1,"%-15s\n",SIagemin1);
	     fprintf(fp1,"%-15s\n%-15s\n%-15s\n",SIagemax1,SIprice1,SIord1);
	       fclose(fp1);
	       printf("您已成功添加!\n");

}





void GMchaxungeren1(GM *np)//管理员查询个人信息函数
{

  				printf("             您当前的管理员ID：          \n\n");
				printf("%s\n",GMteding1(np)->Gid);
				printf("             您当前的管理员姓名：          \n\n");
				printf("%s\n",GMteding1(np)->administrator_name);
				printf("             您当前的管理员性别：          \n\n");
				printf("%s\n",GMteding1(np)->Gsex);
			    printf("             您当前的管理员年龄：          \n\n");
				printf("%d\n",GMteding1(np)->Gage);
				printf("             您当前的管理员电话：          \n\n");
				printf("%s\n",GMteding1(np)->Gphonenumber);
				printf("             您当前的管理员密码：          \n\n");
				printf("%s\n",GMteding1(np)->Gpassword);
				printf("             您当前的管理员邮箱：          \n\n");
				printf("%s\n",GMteding1(np)->Gmail);
				printf("             您当前的管理员地址：          \n\n");
				printf("%s\n",GMteding1(np)->Gplace);

				system("pause");
				system("cls");

 }





GM *GMteding1(GM *np)//把管理员信息链表特定的节点录到一个独立结构体
{

	GM *np1;//独立结构体指针
	np1 = (GM*)malloc(sizeof(GM));//申请内存

	strcpy(np1->administrator_name,np->administrator_name);//录入信息
	strcpy(np1->Gid, np->Gid);
	strcpy(np1->Gsex,np->Gsex);
	strcpy(np1->Gmail,np->Gmail );
	strcpy(np1->Gpassword,np->Gpassword);
	strcpy(np1->Gplace,np->Gplace);
	strcpy(np1->Gphonenumber,np->Gphonenumber);
	np1->Gage=np->Gage;
	np1->next=NULL;

	return np1;


}





ORDER *createinf4()/*创建链表函数*/

{   FILE *File4;

    char orid[40];//订单号
	char cusid[20];//客户ID
	char nowtime[30];//下单日期时间
	char siid[12];//场地ID
	char sista[20];//所属场馆
	double orprice;//订单价格
	char ordate[30];//预定日期
	int ortimestart;//预定开始时间
	int ortimeover;//预定结束时间
    File4=fopen("预订信息.txt","r");
    ORDER *np=(ORDER*)malloc(sizeof(ORDER));
    ORDER *head=(ORDER*)malloc(sizeof(ORDER));
    head=NULL;
     while(fscanf(File4,"%s\n%s\n%s\n%s\n%s\n%lf\n%s\n%d\n%d\n",orid,cusid,nowtime,siid,sista,&orprice,ordate,&ortimestart,&ortimeover)==9)
 {
	ORDER *np=(ORDER*)malloc(sizeof(ORDER));
	strcpy(np->cusid,cusid);
	strcpy(np->nowtime,nowtime);
	strcpy(np->ordate,ordate);
	strcpy(np->orid,orid);
    strcpy(np->sista,sista);
    strcpy(np->siid,siid);
    np->orprice=orprice;
    np->ortimeover=ortimeover;
    np->ortimestart=ortimestart;
	np->next=NULL;
   if(head==NULL)
	{
		head=np;

	  //第一次进入初始化节点
	}
	else
	{
	np->next=head;

		head=np;

	}
 }
    fclose(File4);
return head;

}





void chakanyuding1(ORDER *OfNode)//查看预定信息函数
{

	ORDER *np= OfNode;//调入预定信息的头节点
	printf("预定性别\t       客户ID\t          下单日期时间\t            场地ID\t      所属场馆\t      订单价格\t      预定日期\t        预定开始时间\t     预定结束时间\n");
	while(np!=NULL)
	{
		printf("%-15s%-20s%-25s%-15s%-20s%-15.2lf%-25s%-20d%-15d\n",np->orid,np->cusid,np->nowtime,np->siid,np->sista,np->orprice,np->ordate,np->ortimestart,np->ortimeover+1);
		np=np->next;//偏移到下个节点
	}


}





void tongji1()//统计函数
{
	ORDER *OfNode=createinf4(); //调入订单头节点
	int NM1;
	do{	 	printf("*************************************************\n\n");
				printf("             1.按照预定量排序场馆               \n\n");
    			printf("             2.按照营业额高低排序场馆              \n\n");
    			printf("             3.统计用户年龄层次           \n\n");
    			printf("             4.统计营业额               \n\n");
    			printf("             5.统计最欢迎运动                \n\n");
    			printf("             6.按照时间段统计不同场地租用情况                \n\n");
    			printf("             7.返回上页                \n\n");
    			printf("*************************************************\n");
    			printf("请选择执行序号:");
    			scanf("%d",&NM1);/*选择的操作序号*/
    			getchar();
    			if(NM1<=0||NM1>7)
    			printf("错误，请重新输入正确序号。\n");//垃圾数据处理

		switch(NM1)
			{
			case 1:
	    		system("cls");
	    		yudingliangchaxun1();
	    		system("pause");
	    		system("cls");

	     			break;
	    	case 2:
	    		system("cls");
	    		 yudingliang1();
	    		system("pause");
	    		system("cls");

	    			break;
	    	case 3:
	    		system("cls");
	    		nianlingtongji1();
	    		system("pause");
	    		system("cls");

	    			break;
	    	case 4:
	    		system("cls");
	    		yingye1(OfNode);
	    		system("pause");
	    		system("cls");

	    			break;
	    	case 5:
	    		system("cls");
	    		xingbietuijian();
	    		system("pause");
	    		system("cls");
	    			break;
	    	case 6:
				system("cls");
			int t,p;
			printf("请输入起始时间\n");
			scanf("%d",&t);
			printf("请输入终止时间\n");
			scanf("%d",&p);
			shijian2(t,p);
	    		system("pause");
	    		system("cls");

	    			break;
	   		default:
				printf("已退出至上层\n");
	   				break;

			}
		}


			while(NM1!=7);



}




void nianlingtongji1()//年龄阶层统计函数
{
	FILE *File;
 	char names1[NAMELEN][20];
	char ids1[NUMBER][20];
	char sexs1[NUMBER][10];
	char mails1[NUMBER][20];
	int phonenumbers1[NUMBER];
	int ages1[NUMBER];
	char places1[NUMBER][20];
	char passwords1[NUMBER][20];
	double moneys1[NUMBER];
	int times1[NUMBER];
	float m1=0;//青年人数
	float k1=0;//中年人数
	float l1=0;//老年人数
    int i1=0;//总人数
    File=fopen("顾客信息.dat","r");
    float Trate1;//青年人数比例
    float Zrate1;//中年人数比例
    float Lrate1;//老年人数比例



   while(fscanf(File,"%s\n%s\n%s\n%d\n%d\n%s\n%s\n%lf\n%s\n%d\n",ids1[i1],names1[i1],sexs1[i1],&ages1[i1],&phonenumbers1[i1],passwords1[i1],mails1[i1],&moneys1[i1],places1[i1],&times1[i1])!=EOF)
   	{
	 i1++;
	}
    fclose(File);

	int I1;//计数器
	 for(I1=0;I1<i1;I1++)//遍历所有数据分类
	{
		if(ages1[I1]<=30)
			m1++;
        else if((ages1[I1]>=30)&&(ages1[I1]<=55))
			k1++;
		else
		    l1++;

	}
		Trate1=(m1/i1)*100;
		Zrate1=(k1/i1)*100;
		Lrate1=(l1/i1)*100;
		printf("注册用户共%d个\n",i1);
		printf("青年用户一共%1.0f个\n",m1);
		printf("其所占比例为%5.2f%%\n",Trate1);
		printf("中年用户一共%1.0f个\n",k1);
		printf("其所占比例为%5.2f%%\n",Zrate1);
		printf("老年用户一共%1.0f个\n",l1);
		printf("其所占比例为%5.2f%%\n",Lrate1);



	}




void yingye1(ORDER *OfNode)//统计营业额函数
{
	ORDER *temp1=OfNode;//调入头节点于临时指针
	float profit1;//营业额
	while(temp1!=NULL)
	{
		profit1=profit1+(temp1->orprice)*((temp1->ortimeover)-(temp1->ortimestart));//计算公式
		temp1=temp1->next;//偏移下个节点
	}
	printf("已预定场地的营业额为%5.2f元\n",profit1);


}



void yudingliang1() //按照预定量从大到小统计场地信息
{
	 FILE *File4;

    char orid[NUMBER][40];//订单号
	char cusid[NUMBER][20];//客户ID
	char nowtime[NUMBER][30];//下单日期时间
	char siid[NUMBER][12];//场地ID
	char sista[NUMBER][20];//所属场馆
	double orprice[NUMBER];//订单价格
	char ordate[NUMBER][30];//预定日期
	int ortimestart[NUMBER];//预定开始时间
	int ortimeover[NUMBER];//预定结束时间
	int i3=0,j3=0;
	int i=0,j=0;
	int a3,k3=0,m3=0;
	int temp;
	char buff[100];
	double temp1;
	double profit1[NUMBER];//营业额
    File4=fopen("预订信息.txt","r");


     while(fscanf(File4,"%s\n%s\n%s\n%s\n%s\n%lf\n%s\n%d\n%d\n",orid[i3],cusid[i3],nowtime[i3],siid[i3],sista[i3],&orprice[i3],ordate[i3],&ortimestart[i3],&ortimeover[i3])!=EOF)
	{
	 i3++;
	}


	for(i=0;i<i3;i++)
	{
		for(j=0;j<i3-i;j++)
		{
			if((orprice[j])*((ortimeover[j])-(ortimestart[j]))<(orprice[j+1])*((ortimeover[j+1])-(ortimestart[j+1])))
			{
				strcpy(buff,orid[j]);//    1
                strcpy(orid[j],orid[j+1]);
                strcpy(orid[j+1],buff);

                strcpy(buff,cusid[j]);//    2
                strcpy(cusid[j],cusid[j+1]);
                strcpy(cusid[j+1],buff);

                strcpy(buff,nowtime[j]);//    3
                strcpy(nowtime[j],nowtime[j+1]);
                strcpy(nowtime[j+1],buff);

                strcpy(buff,siid[j]);//     4
                strcpy(siid[j],siid[j+1]);
                strcpy(siid[j+1],buff);

                strcpy(buff,sista[j]);//     5
                strcpy(sista[j],sista[j+1]);
                strcpy(sista[j+1],buff);


                temp1=orprice[j];
				orprice[j]=orprice[j+1];
				orprice[j+1]=temp1;

                strcpy(buff,ordate[j]);//      7
                strcpy(ordate[j],ordate[j+1]);
                strcpy(ordate[j+1],buff);

                temp=ortimestart[j];
				ortimestart[j]=ortimestart[j+1];
				ortimestart[j+1]=temp;

				temp=ortimeover[j];
				ortimeover[j]=ortimeover[j+1];
				ortimeover[j+1]=temp;

			}
		}
	}
		for(k3=0;k3<i3;k3++)
		{
			profit1[k3]=(orprice[k3])*((ortimeover[k3]+1)-(ortimestart[k3]));
             m3++;
             if(m3==1)
             {
             	printf("预定性别\t       客户ID\t           下单日期时间\t      场地ID\t      所属场馆\t         订单价格\t      预定日期\t      预定开始时间\t  预定结束时间\t 营业额\t\n");
			 }
	 printf("%-15s\t%-17s\t%-15s\t%-15s\t%-22s\t%-13.2f\t%-15s\t%-12.0d\t%-14.0d\t%5.2lf\n",orid[k3],cusid[k3],nowtime[k3],siid[k3],sista[k3],orprice[k3],ordate[k3],ortimestart[k3],ortimeover[k3]+1,profit1[k3]);

		}

		fclose(File4);
		system("pause");
			system("cls");







}




void tuijian2(char np2[20],int year,int t)
	{
		FILE *File2;
		File2=fopen("场地信息.dat","r");
		SITE *temp=createinf2();
	    int  p=0;
		xingbietuijian(t);
		while(temp!=NULL){
			if(strcmp(temp->SIarea,np2)==0&&temp->SIagemax>year&&temp->SIagemin<year)
			{printf("您附近且适合您年龄的的场地是\n");p=1;
			printf("名称 %s 编号 %s 类型 %s\n",temp->namr,temp->SIid,temp->SIsta);}
			temp=temp->next;
			 } //遍历链表找出附近与符合年龄场地
			 if(p==0){
			 	printf("您附近没有符合您年龄场地\n");
			 }
		fclose(File2);
		free(temp);
\
	}





void xingbietuijian(int t)
{
	int i2=1,q=0,c=0;
	ORDER *bianli2=createinf4();
	SITE *np=createinf2();SITE *temp=np;
	while(temp!=NULL){
		i2++;
	temp=temp->next;

	}//统计场地数量
	SITE2 *n;
	n=(SITE2*)malloc(sizeof(SITE2)*i2);
	while(np!=NULL){
	strcpy(n[q].SIid,np->SIid);
	strcpy(n[q].namr,np->namr);
	strcpy(n[q].SIsport,np->SIsport);
	strcpy(n[q].SIarea,np->SIarea);
    strcpy(n[q].SIsta,np->SIsta);
    n[q].SIprice=np->SIprice;
    n[q].SIagemax=np->SIagemax;
    n[q].SIagemin=np->SIagemin;
    n[q].SIord=np->SIord;
    n[q].woman=0;
    n[q].man=0;
     np=np->next;
     q++;
	}//创建结构体数组并赋值
	q=0;
	if(t==1){
		while(bianli2!=NULL){
		while(q<i2){
		if(strcmp(bianli2->siid,n[q].SIid)==0){
			if(strcmp(bianli2->orid,"male")==0){
				n[q].man++;q++;
			}
			else{
				q++;
			}
		}
		else{
			q++;
		    }
	          }
	    q=0;
	    bianli2=bianli2->next;}//遍历订单文件找出遇到相同场地 id对比客户性别 增加结构体数组中该性别的预定数
	    SITE2 tem;
	      for (int m=0;m<i2-1;m++) {
        for (int j=0;j<i2-1-m;j++) {
            if (n[j].woman<n[j+1].woman)  {
                   tem=n[j];
                n[j]=n[j+1];
                n[j+1]=tem;
            }
        }
    }
}//根据这个性别预定数排序整个结构体数组
	if(t==2){
		while(bianli2!=NULL){
		while(q<i2){
		if(strcmp(bianli2->siid,n[q].SIid)==0){
			if(strcmp(bianli2->orid,"female")==0){
				n[q].woman++;q++;
			}
			else{
				q++;
			}
		}
		else{
			q++;
		    }
	                }
	    q=0;
	    bianli2=bianli2->next;}
	    SITE2 tem;
	      for (int v=0;v<i2-1;v++) {
        for (int j=0;j<i2-1-v;j++) {
            if (n[j].woman<n[j+1].woman){
                   tem=n[j];
                n[j]=n[j+1];
                n[j+1]=tem;
            }
        }
    }
}	//同上 改变统计性别
printf("您选择性别场馆欢迎排名如下\n");
while(q<i2-1){
	printf("%d名称 %s地区 %s场地号 %s \n",q+1,n[q].namr,n[q].SIarea,n[q].SIid);
	q++;
}//输出结果
free(n);
}





SITE *createinf2()/*创建链表函数*/
{   FILE *File2;
  char SIid[NUMBER];//定义场地信息：编号
    char namr[NUMBER];//场馆名称
	char SIarea[NUMBER];//定义场地信息：区域
	char SIsta[NUMBER];//定义场地信息：场馆（内外场）
	char SIsport[NUMBER];//定义场地信息：运动类型
	int SIagemin;//定义场地信息：适用年龄
	int SIagemax;
	double SIprice;//定义场地信息：租金
	int SIord;//定义场地信息：租借情况
    File2=fopen("场地信息.txt","r");
    SITE *np=(SITE*)malloc(sizeof(SITE));
    SITE *head=(SITE*)malloc(sizeof(SITE));
    head=NULL;
     while(fscanf(File2,"%s\n%s\n%s\n%s\n%s\n%d\n%d\n%lf\n%d\n",SIid,namr,SIarea,SIsta,SIsport,&SIagemin,&SIagemax,&SIprice,&SIord)!=EOF)
   	{SITE *np=(SITE*)malloc(sizeof(SITE));
	strcpy(np->SIid,SIid);
	strcpy(np->namr,namr);
	strcpy(np->SIsport,SIsport);
	strcpy(np->SIarea,SIarea);
    strcpy(np->SIsta,SIsta);
    np->SIprice=SIprice;
    np->SIagemax=SIagemax;
    np->SIagemin=SIagemin;
    np->SIord=SIord;
	np->next=NULL;
   if(head==NULL)
	{
		head=np;

	  //第一次进入初始化节点
	}
	else
	{
	np->next=head;

		head=np;

	}
	}
    fclose(File2);
return head;

}




void shijian2(int t,int p)
{
 	int i2=1,q=0,c=0;
	ORDER *bianli2=createinf4();
	SITE *np=createinf2();SITE *temp=np;
	while(temp!=NULL)
	{
		i2++;
	temp=temp->next;
	}//统计场地数量

	SHIJIAN *n;
	n=(SHIJIAN*)malloc(sizeof(SHIJIAN)*i2);
	while(np!=NULL){
	strcpy(n[q].SIid,np->SIid);
	strcpy(n[q].namr,np->namr);
	strcpy(n[q].SIarea,np->SIarea);
	strcpy(n[q].SIsta,np->SIsta);
    n[q].time1=t;
    n[q].time2=p;
    n[q].cishu=0;
     np=np->next;
     q++;
	}//创建结构体数组并赋值
	q=0;
		while(bianli2!=NULL){
		while(q<i2){
		if(strcmp(bianli2->siid,n[q].SIid)==0){
			if(bianli2->ortimeover>n[q].time1||bianli2->ortimestart<n[q].time2){
				n[q].cishu++;q++;
			}
			else{
				q++;
			}
		}
		else{
			q++;
		    }
	          }
	    q=0;
	    bianli2=bianli2->next;}//遍历订单文件找出遇到相同场地 id对比客户性别 增加结构体数组中该性别的预定数
	    SHIJIAN tem;
	      for (int m=0;m<i2-1;m++) {
        for (int j=0;j<i2-1-m;j++) {
            if (n[j].cishu<n[j+1].cishu)  {
                   tem=n[j];
                n[j]=n[j+1];
                n[j+1]=tem;
            }
        }
    }
 	printf("您选择时间段场馆欢迎度排名如下\n");
		while(q+1<i2)
					{
						printf("%d名称 %s地区 %s场地号 %s 场地类型 %s\n",q+1,n[q].namr,n[q].SIarea,n[q].SIid,n[q].SIsta);
						q++;
					}//输出结果
	free(n);
}


void xingbietuijian()
{
	int i2=1,q=0,c=0;
	ORDER *bianli2=createinf4();
	ORDER *pt=bianli2;
	SITE *np=createinf2();
	SITE *temp=np;
	while(temp!=NULL)
	{
		i2++;
	temp=temp->next;

	}//统计场地数量
	SITE22 *n;
	n=(SITE22*)malloc(sizeof(SITE22)*i2);
	while(np!=NULL)
	{

	strcpy(n[q].SIid,np->SIid);
	strcpy(n[q].namr,np->namr);
	strcpy(n[q].SIsport,np->SIsport);
	strcpy(n[q].SIarea,np->SIarea);
    strcpy(n[q].SIsta,np->SIsta);
    n[q].SIprice=np->SIprice;
    n[q].SIagemax=np->SIagemax;
    n[q].SIagemin=np->SIagemin;
    n[q].SIord=np->SIord;
    n[q].n2=0;
     np=np->next;
     q++;
	}//创建结构体数组并赋值
	q=0;

		while(bianli2!=NULL)
		{

		while(q<i2)
				   {
		if(strcmp(bianli2->siid,n[q].SIid)==0)
			{
		n[q].n2++;
	    	}
	        q++;   }
	    q=0;
	    bianli2=bianli2->next;
		}//遍历订单文件找出遇到相同场地 id对比  统计数量
	    bianli2=pt;  SITE22 tem;
	      for (int v=0;v<i2-1;v++)
	{

        for (int j=0;j<i2-1-v;j++)
		{

            if (n[j].SIsport<n[j+1].SIsport)
			{

                   tem=n[j];
                n[j]=n[j+1];
                n[j+1]=tem;
            }
        }
    }
   while(q<i2-1)
   {
   	if(strcmp(n[q+1].SIsport,n[q].SIsport)==0)
	   {
   		n[q+1].n2=n[q+1].n2+n[q].n2;q++;
	   }
	 else
	   {
	 	printf("项目%s有%d人次选择\n",n[q+1].SIsport,n[q+1].n2);q++;
	   }
   }





free(n);

}






int querenxiadan5(CUST *cust5,CUST *fNode)//确认下单 导入客户信息
{

	ORDER *finalorder=(ORDER*)malloc(sizeof(ORDER));
	ORDER *temp;
	ORDER *ordertemp=(ORDER*)malloc(sizeof(ORDER));
	FILE *out;
	ORDER *wholeorder=(ORDER*)malloc(sizeof(ORDER));
	wholeorder=createinf4();//预定信息中已有数据
	ORDER *wholeordertemp=(ORDER*)malloc(sizeof(ORDER));
	wholeordertemp=wholeorder;
	finalorder->ortimestart=-1;

	/*if(out==EOF)
	{
		printf("\n无法打开文件。\n");
		exit(1);
	}*///回到预定订单头结点
	int check=0;
	int i5=0;
	int limit=0;//每个客户一次可预约三个场地。
	if(cust5->time>3)
	{
		printf("对不起，您的爽约次数超过三次，无法预约！");
	}
	else
	{

	while(limit<3)//限制每个用户最多预约三个场地，循环使得用户可以多次选择
	{
		ordertemp=finalorder;
		wholeorder=createinf4();
		wholeordertemp=wholeorder;
		temp=(ORDER*)malloc(sizeof(ORDER));

		temp=yuding4(cust5,fNode);//预订系统程序
		if(temp!=NULL)
		limit++;

		/*if(finalorder->ortimestart==-1)
		{

		strcpy(ordertemp->cusid,temp->cusid);
	    strcpy(ordertemp->nowtime,temp->nowtime);
	    strcpy(ordertemp->ordate,temp->ordate);
	    strcpy(ordertemp->orid,temp->orid);
        strcpy(ordertemp->sista,temp->sista);
        strcpy(ordertemp->siid,temp->siid);
        ordertemp->orprice=temp->orprice;
        ordertemp->ortimeover=temp->ortimeover;
        ordertemp->ortimestart=temp->ortimestart;
     	ordertemp->next=NULL;
        }
        else
        {
        	ordertemp->next=temp;
		}*/
		if(temp!=NULL)
		{
		    if(wholeordertemp!=NULL)
			{
			while((wholeordertemp->next)!=NULL)//找到预定订单文件链表的尾部
        	{
	        	wholeordertemp=wholeordertemp->next;
        	}
         	wholeordertemp->next=temp;
         	out=fopen("预订信息.txt","w+");//打开预定信息文件

	/*if(out==EOF)
	{
		printf("\n无法打开文件。\n");
		exit(1);
	}*///回到预定订单头结点
         	while(wholeorder!=NULL)//将订单信息输入到文件中
         	{

	            fprintf(out,"%s\n%s\n%s\n%s\n%s\n%.2lf\n%s\n%d\n%d\n",wholeorder->orid,wholeorder->cusid,wholeorder->nowtime,wholeorder->siid,wholeorder->sista,wholeorder->orprice,
	         	wholeorder->ordate,wholeorder->ortimestart,wholeorder->ortimeover);
	        	wholeorder=wholeorder->next;
        	}
        	fclose(out);
            }


			if(wholeordertemp==NULL)
			{
			    /*strcpy(wholeordertemp->cusid,ordertemp->cusid);printf("133");
				strcpy(wholeordertemp->cusid,ordertemp->cusid);
	            strcpy(wholeordertemp->nowtime,ordertemp->nowtime);
	            strcpy(wholeordertemp->ordate,ordertemp->ordate);
	            strcpy(wholeordertemp->orid,ordertemp->orid);
                strcpy(wholeordertemp->sista,ordertemp->sista);
                strcpy(wholeordertemp->siid,ordertemp->siid);
                wholeordertemp->orprice=ordertemp->orprice;
                wholeordertemp->ortimeover=ordertemp->ortimeover;
                wholeordertemp->ortimestart=ordertemp->ortimestart;
     	        wholeordertemp->next=NULL;	*/
     	        wholeordertemp=temp;
				while(wholeordertemp!=NULL)//将订单信息输入到文件中
         	   {
         	   out=fopen("预订信息.txt","w+");//打开预定信息文件

	/*if(out==EOF)
	{
		printf("\n无法打开文件。\n");
		exit(1);
	}*///回到预定订单头结点
	            fprintf(out,"%s\n%s\n%s\n%s\n%s\n%.2lf\n%s\n%d\n%d\n",wholeordertemp->orid,wholeordertemp->cusid,wholeordertemp->nowtime,wholeordertemp->siid,wholeordertemp->sista,wholeordertemp->orprice,
	         	wholeordertemp->ordate,wholeordertemp->ortimestart,wholeordertemp->ortimeover);
	        	wholeordertemp=wholeordertemp->next;
        	    }
        	    fclose(out);
			}

			//预定的是新的一个场地
			ordertemp=ordertemp->next;
		}

		do{
		    check=jixuyuding5();//判断是否继续预定  还是确认下单
	    	if(check==1)
	    	continue;
    		else if(check==2)
	    	return 0;
	    }while(check!=1&&check!=2);
	   	if(check==2)
	   	return 0;

	}
	if(limit==3&&check!=2)
	printf("对不起，您已预订超过三个场地，无法继续预定！\n\n");
	else
	dachudingdan(finalorder,limit);
	}

}




ORDER *yuding4(CUST *cust5,CUST *fNode)//预定系统 将客户链表导入
{
	SITE *site5=(SITE*)malloc(sizeof(SITE));
	SITE *sihead=(SITE*)malloc(sizeof(SITE));
	ORDER *orderhead=(ORDER*)malloc(sizeof(ORDER));//订单信息的头节点
	ORDER *order5=(ORDER*)malloc(sizeof(ORDER));
 //订单选择时的链表
	int datecheck;//判断日期是否在七天内
	char orderdate[20];//所选日期
	ORDER *timecheck=(ORDER*)malloc(sizeof(ORDER));//判断时间选择
	int choosesite=0;
	int i5=0;
	sihead=site5=createinf2();//场地创建链表
	int choose=1;//判断循环中去进行 场地 还是 日期的循环 还是退出选择

	while(1)//一直循环
    {
     	int agetemp=0;//对年龄变量初始化

    	while(agetemp!=3&&choose==1)//场地自身循环
    	{
                site5=sihead;
            	i5=0;
             	while(site5!=NULL)//显示出所有场地
            	{
            		i5++;
            		printf("%d.所属场馆：%s  场地编号：%s\n",i5,site5->namr,site5->SIid);
            		site5=site5->next;

            	}//循环可得有i5个场馆
        	     do
	    	    {
	    	    	choosesite=0;
	    	    	printf("请输入你想选择的场地:__\n");
                 	scanf("%d",&choosesite);//choosesite为客户所选择的场地编号
                 	if(choosesite<1||choosesite>i5)//判断场地是否是场地文件中已有的
         	        {
                 		printf("错误，请重新输入正确序号。\n");

                	}
	        	}while(choosesite<1||choosesite>i5);//循环可使客户重新选择场地

            	site5=sihead;//使site5回到场地链表的头结点

             	while(site5!=NULL&&choosesite>1)//找到客户选择的场地 （site5)
            	{
              		site5=site5->next;
            		choosesite--;
             	}

                agetemp=panduannianling5(cust5,site5);//年龄对比是否可以选择 年龄返回值决定重新选择场地 不等于3，或者继续选择预定日期 等于3

    	}

    	if(agetemp==3)
    	{
    		choose=2;
    		datecheck=0;
    		strcpy(order5->siid,site5->SIid);
    		strcpy(order5->sista,site5->SIsta);
		}

	    orderhead=createinf4();/*建立预定信息链表带入orderhead中*/

    	while(choose==2)//日期时间循环
       {

       	    char orderdate[30];//判断日期是否为七天内
    		while(datecheck==0)//循环可以重复选择日期
            {
            	printf("请输入您想选择的日期：（以年：月：日形式打出）\n");
            	scanf("%s",orderdate);
            	getchar();
			    datecheck=dateavailable(orderdate);//判断日期是否于七天之内
			    if(datecheck==0)
			    choose=0;//日期不在七天之内
			    while(choose<1||choose>3)//循环判断选择重选的项目
            	{
	            	printf("想要重新选择：\n1.场地\n2.日期时间\n3.退出\n");
                	scanf("%d",&choose);
                	getchar();
                	if(choose<1||choose>3)
                	printf("错误序号，请重新选择！\n");
            	}
            	if(choose==3||choose==1)
            	{
            		timecheck=NULL;
            			datecheck=2;
				}
			}
			if(datecheck==1)//日期在七天之内
        	{
        		strcpy(order5->ordate,orderdate);
        		timecheck=shijianpanduan(orderdate,site5);//时间的判断是否选择成功，若成功timecheck中含有开始时间和结束时间
                 if(timecheck==NULL)//时间选择失败
			 {
			 	choose=0;
			 	 while(choose<1||choose>3)//循环判断选择重选的项目
            	{
	            	printf("想要重新选择：\n1.场地\n2.日期时间\n3.退出\n");
                	scanf("%d",&choose);
                	if(choose<1||choose>3)
                	printf("错误序号，请重新选择！\n");
            	}

			 }
			else //if(timecheck!=NULL)//时间选择成功
			 {
			 	order5->ortimestart=timecheck->ortimestart;
			 	order5->ortimeover=timecheck->ortimeover;
			 	choose=4;//可继续余额计算
			 }
			}

    	}

    	if(choose==4)
    	{
	    	int time5;
        	time5=order5->ortimeover-order5->ortimestart+1;
         	if(cust5->balance>(site5->SIprice)*(time5+1))//判断余额是否足够
           	{
         		printf("余额可供预订。\n预定成功！\n");
        		cust5->balance=cust5->balance-(site5->SIprice)*(time5+1);
        		xiugaiyue1(fNode);
        		/*更改客户余额读入文件*/
	        	strcpy(order5->cusid,cust5->id);//订单客户ID输入
        		strcpy(order5->siid,site5->SIid);//订单场地ID输入
        		strcpy(order5->sista,site5->SIsta);//订单场馆输入
        		order5->orprice=(site5->SIprice)*(time5+1);//订单价格输入
        		time_t t;
	            struct tm * lt;
            	time (&t);		                        //获取Unix时间戳
            	lt = localtime (&t);
                sprintf(order5->nowtime,"%d:%.2d:%.2d:%.2d:%.2d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday, lt->tm_hour, lt->tm_min);
        	    //现在时间 年月日时分
        		strcpy(order5->orid,cust5->sex);

        	    return order5;//返回订单链表
            }
            else
	    		{
	    		 	printf("余额不足，无法预订！\n") ;
			 	    choose=0;//重新选择
		        }

    	}
    	while(choose<1||choose>3)
    	{
	    	printf("想要重新选择：\n1.场地\n2.日期时间\n3.退出\n");
        	scanf("%d",&choose);
        	if(choose<1||choose>3)
        	printf("错误序号，请重新选择！\n");
    	}

		if(choose==3)
    	    {order5=NULL;
    	   return order5;
        	}

	}
}





int panduannianling5(CUST *cust5,SITE *site5)//判断年龄 将客户链表和所选场地链表导入
{
	if(cust5->age>site5->SIagemax)
	{
		printf("您的年龄超过该场地所规定的最大年龄，无法预约。请重新选择。\n");
		system("pause");
		system("cls");
		return 1;//返回值不为3 则重新选择场地
	}
	else if(cust5->age<site5->SIagemin)
	{
		printf("您的年龄小于该场地所规定的最小年龄，无法预约。\n请重新选择。\n");
		system("pause");
		system("cls");
		return 2;//返回值不为3 则重新选择场地
	}
	else return 3;//返回值为3 可以继续选择预定日期

}

int dateavailable(char order[20])//判断七天
{
    /*char order[20];
    int result = -1;

    scanf("%s",&order);
    result = ordervailable(order);
    printf("%d",result);
    */
    time_t t;
	struct tm * lt;
	time (&t);
	lt = localtime (&t);
    char time2[20];
    char time1[20];
	char year[5];
    char  mon[5];
    char  day[5];
    sprintf(year,"%d",lt->tm_year+1900);
    sprintf(mon,"%d",lt->tm_mon+1);
    sprintf(day,"%d",lt->tm_mday);
    sprintf(time1,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday);
    switch(atoi(mon))
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if((atoi(day)) > 24)
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+2, 7-31+(lt->tm_mday));
        }
        else
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday+7);
        }
    case 4: case 6: case 9: case 11:
        if((atoi(day)) >23)
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+2, 7-30+(lt->tm_mday));
        }
        else
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday+7);
        }
    case 2:
    	if(atoi(year)%400==0||(atoi(year)%4==0&&!(atoi(year)%100==0)))        //判断：如果是闰年2月有29天
        {
            if((atoi(day)) >22)
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+2, 7-29+(lt->tm_mday));
        }
        else
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday+7);
        }
        }
        else                                                                   //若不是闰年 2月有28天
        {
            if((atoi(day)) >21)
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+2, 7-28+(lt->tm_mday));
        }
        else
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday+7);
        }
        }
    }

    if((strcmp(time2,order)>=0)&&(strcmp(time1,order)<0))
    {
		  printf("请选择您想预定的时间段\n");//时间在七天内，并将预定日期导入预定链表中，返回链表
		  return 1;
	}
     else
    {
	    printf("对不起，您只能选择七天内的日期。请重新选择。\n");
	    return 0;//返回空链表
	}


}

ORDER *shijianpanduan(char ordate[30],SITE *site5)//时间判断 调入所选日期
{
	ORDER *orderhead=createinf4();//建立预定信息链表带入orderhead中
	ORDER *ordercheck=(ORDER*)malloc(sizeof(ORDER));
	int n=0;
	int i=0;
	int j=0;
	int temp1;
	int temp2;
	int a[50],b[50];
	int c,d;
	a[0]=22;//开始时间的初始值
	b[0]=5;//结束时间的初始值
	while(orderhead!=NULL)//将已被预订的开始时间a[]和结束时间b[]读入数组中
	{
		if(strcmp(site5->SIid,orderhead->siid)==0)
		{

		if(strcmp(orderhead->ordate,ordate)==0)
		{
			a[n]=orderhead->ortimestart;
			b[n]=orderhead->ortimeover;
			n++;
		}
		}
	    orderhead=orderhead->next;
	}
	if(n>0)
	n=n-1;
	for(i=n;i>=0;i--)//冒泡排序 从小到大
    {
        for(j=0;j<i;++j)
        {
            if(a[j]>a[j+1])
            {
                temp1=a[j];
                a[j]=a[j+1];
                a[j+1]=temp1;
                temp2=b[j];
                b[j]=b[j+1];
                b[j+1]=temp2;
            }
        }
    }

    int check=1;
    while(check==1)//循环可重复选择时间
    {

        printf("您可选择的时间有：\n");//打出空余的时间
        if(a[0]>6)
        {
        	printf("6点-%d点\n",a[0]);
        	if(b[0]>=a[0]&&n==0)
        	{
        		printf("%d点-22点\n",b[0]+1);
			}
    		for(j=0;j<n;j++)
  	    	{
	    		if(b[j]+1<a[j+1])
    			printf("%d点-%d点\n",b[j]+1,a[j+1]);
     		}
     	}
    	else if(a[0]==6)
    	{
    		if(n==0)
    		{
    			printf("%d点-22点\n",b[n]+1);
			}
    		for(j=0;j<n;j++)
    		{
    			if(b[j]+1<a[j+1])
    			printf("%d点-%d点\n",b[j]+1,a[j+1]);
	    	}

    	}
     	if(b[n]<21&&b[n]>6&&n!=0)
    	printf("%d点-22点\n",b[n]+1);


    	printf("请选择您想预定的时间：__点到__点\n");
    	scanf("%d%d",&c,&d);
    	d--;//结束时间客户填写的 到7 点相当于所写代码中的 6点，所以要记录-1

		if(c<6||d>21||c>d)//判断时间是否合理
    	{
		    check=3;
			getchar();
    		while(check<1||check>2)
			{
    	     	printf("对不起，该时间不可预约。\n");
    	    	printf("1.重新选择时间\n2.退出\n");
        		scanf("%d",&check);

        	}

    	}
    	else check=3;
    	for(i=0;i<=n&&check==3;i++)
    	{
			if((c>=a[i]&&c<=b[i])||(d>=a[i]&&d<=b[i]))
    		{
    			getchar();
    			do
    			{
	    		printf("对不起，您选择的时间已被预定。请重新选择！\n");
	    		printf("1.重新选择时间\n2.退出\n");
    		    scanf("%d",&check);
	    		break;
	    		}while(check<1||check>2);
	    	}

	    	else
	    	{
	    		printf("时间可供选择！\n");

	    		ordercheck->ortimestart=c;
	     		ordercheck->ortimeover=d;
	     		return ordercheck;//返回含有开始时间和结束时间的链表
	     	}
    	}

    }
	ordercheck=NULL;
	return ordercheck;

}




int jixuyuding5()
{int NW5=0;
        do
		{
		    printf("************* 是否继续进行预订? ***************** \n\n\n");
	    	printf("**********        1.是        ************* \n\n\n");
	    	printf("**********        2.否        ************* \n\n");
	    	scanf("%d",&NW5);
	    	getchar();
	    	if(NW5==1)
	        {
	        	return 1;
	        }
	        else if(NW5==2)
	        	return 2;
	        else
	       	printf("错误，请重新输入正确序号。\n");//垃圾数据处理
	            system("pause");
	            system("cls");

	    }   while((NW5!=1)||(NW5!=2));

}


void dachudingdan(ORDER *finalorder,int limit)
{
	ORDER *ordertemp=(ORDER*)malloc(sizeof(ORDER));
	ordertemp=finalorder;

    printf("您已预订%d个场地\n",limit);
   /* while(ordertemp!=NULL)//一次输出各个预定信息
    {
        printf("场地ID为：%s  预定日期为：%s  预定时间从：%d点到%d点  订单总额为：%.2lf\n",ordertemp->siid,ordertemp->ordate,ordertemp->ortimestart,ordertemp->ortimeover+1,ordertemp->orprice);
        ordertemp=ordertemp->next;
	}
   */

}






void yudingliangchaxun1() //按照预定量从大到小统计场地信息
{
	int i3=0,j3=0;
	int i=0,j=0;
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("场地信息.txt","r");

	char SIid3[NUMBER][50];//定义场地信息：编号
    char namr3[NUMBER][50];//场馆名称
	char SIarea3[NUMBER][50];//定义场地信息：区域
	char SIsta3[NUMBER][50];//定义场地信息：场馆（内外场）
	char SIsport3[NUMBER][50];//定义场地信息：运动类型
    char SIagemax3[NUMBER][50];//定义场地信息：适用年龄
	char SIagemin3[NUMBER][50];//定义场地信息：适用年龄
	char SIprice3[NUMBER][50];//定义场地信息：租金
	double SIord3[50];//定义场地信息：租借情况

	int temp;
	char buff[100];


	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%lf\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],SIprice3[i3],&SIord3[i3])!=EOF)
	{
	 i3++;
	}



	for(i=0;i<i3;i++)
	{
		for(j=0;j<i3-i;j++)
		{
			if(SIord3[j]<SIord3[j+1])
			{
				strcpy(buff,SIid3[j]);//    1
                strcpy(SIid3[j],SIid3[j+1]);
                strcpy(SIid3[j+1],buff);

                strcpy(buff,namr3[j]);//    2
                strcpy(namr3[j],namr3[j+1]);
                strcpy(namr3[j+1],buff);

                strcpy(buff,SIarea3[j]);//    3
                strcpy(SIarea3[j],SIarea3[j+1]);
                strcpy(SIarea3[j+1],buff);

                strcpy(buff,SIsta3[j]);//     4
                strcpy(SIsta3[j],SIsta3[j+1]);
                strcpy(SIsta3[j+1],buff);

                strcpy(buff,SIsport3[j]);//     5
                strcpy(SIsport3[j],SIsport3[j+1]);
                strcpy(SIsport3[j+1],buff);


                strcpy(buff,SIagemin3[j]);//     6
                strcpy(SIagemin3[j],SIagemin3[j+1]);
                strcpy(SIagemin3[j+1],buff);

                strcpy(buff,SIagemax3[j]);//      7
                strcpy(SIagemax3[j],SIagemax3[j+1]);
                strcpy(SIagemax3[j+1],buff);

                strcpy(buff,SIprice3[j]);//      8
                strcpy(SIprice3[j],SIprice3[j+1]);
                strcpy(SIprice3[j+1],buff);

				temp=SIord3[j];
				SIord3[j]=SIord3[j+1];
				SIord3[j+1]=temp;

			}
		}
	}
		for(k3=0;k3<i3;k3++)
		{

             m3++;
             if(m3==1)
             {
             	printf("场馆编号\t场馆名称\t场馆所属地区\t  场地类别\t   运动项目\t准入最小年龄\t准入最大年龄\t每小时租金\t历史预约次数\n");
			 }
	 printf("%-15s\t%-20s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t\%-15s\t%-15.0lf\t\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);

		}

		fclose(fp3);
		system("pause");
			system("cls");





 }



/*int kongyuchaxun3()
{

	int i3=0,j3=0;
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("预定信息.txt","r");

    char orid[NUMBER][40];//订单号
	char cusid[NUMBER][20];//客户ID
	char nowtime[NUMBER][30];//下单日期时间
	char siid[NUMBER][30];//场地ID
	char sista[NUMBER][30];//所属场馆
	double orprice[50];//订单价格
	char ordate[NUMBER][30];//预定日期
	int ortimestart[50];//预定开始时间
	int ortimeover[50];//预定结束时间
	char ID[50];//输入的id；

	int rqc;//日期差
	int dqyf;//当前月份
	int dqjh;//当前是几号

	int m,l,u;//循环变量
	int chaxunriqi;//想要查询的日期


//第一步，读出系统的月份与年份的程序
	time_t timep;
	struct tm *p;
	time (&timep);
	p=gmtime(&timep);
	//printf("%d\n",1+p->tm_mon);//获取当前月份,范围是0-11,所以要加 1
	//printf("%d\n",p->tm_mday);//获取当前月份日数,范围是1-31



//第二步，建立当前日期的二维数组；
	int biaoge[7][16]={
    {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
    {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
    {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}
		 			};
//*************************************************************************************************************
		while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%lf\n%s\n%d\n%d\n",orid[i3],cusid[i3],nowtime[i3],siid[i3],sista[i3],&orprice[i3],ordate[i3],&ortimestart[i3],&ortimeover[i3])!=EOF)
	{
	 i3++;
	}


    printf("请输入想要查询的场馆ID :");
	gets(ID);



	if(strcmp(siid[k3],ID)!= 0)
	{
		printf("输入错误");
		return 1;
	}

	else
	{

	for(k3=0;k3<i3;k3++)
	{
		if (strcmp(siid[k3],ID) == 0)
		{


		dqyf= 1+p->tm_mon; //当前月份
		dqjh=p->tm_mday; //当前几号

		//printf("%d\t%d\n",ortimestart[k3],ortimeover[k3]);//订单开始时间和结束时间

		//以下是将字符串转化为整数的程序，用来提取订单的月份和日期（到**********截止）
	    char 	*p=	ordate[k3];;
		int b[80]={0},i=0,j=0,x=0; //x相当于一个开关


		for(p=ordate[k3];(*p)!='\0';p++) //遍历字符串
			{
				if(((*p)>='0')&&((*p)<='9')) //如果字符串里面有数字
					{
						if(x==0)
							{
								b[i]=(*p)-48;
								i++;
							}
						else
						b[i-1]=b[i-1]*10+(*p)-48;
						x=1;
					}
				else
				x=0;
			}

			//printf("%d\n",b[1]);//订单月份
			//printf("%d\n",b[2]);//订单日期
//************************************************************************************************
		if(b[1]>dqyf) //如果订单月份大于当前月份则日期增加30天；
		{
			b[2]=b[2]+30;
		}

		rqc=b[2]- dqjh;//更改第几行
		m=ortimeover[k3]-ortimestart[k3];//要改几个数，就循环几次
       	for(l=0;l<m;l++)
        	{
        	biaoge[rqc][ortimestart[k3]+l-6]=0;
			}

		}


	}
		printf("请输入您想查询几天后的预约情况（0-6）天：");
		scanf("%d",&chaxunriqi);
		if(chaxunriqi<7&&chaxunriqi>=0)
		{
			printf("显示时间为可以预约时间\n");
			for(u=0;u<16;u++)
			{
				if(biaoge[chaxunriqi][u]!=0)
				printf("%d\t",biaoge[chaxunriqi][u]);
    		}
    	}
		else
		{
		printf("输入错误");
		return 1;
    	}


	return 0;
	}



}
*/

void chaxundingdan1(CUST *np)
{
	ORDER *np1=createinf4();
    int count1=0;
		while(np1!=NULL) //找到相同id才跳出循环

		{
		if(strcmp(np->id,np1->cusid)==0)
		{
		count1++;
		printf("场地ID为：%s  预定日期为：%s  预定时间从：%d点到%d点  订单总额为：%.2lf\n",Oteding1(np1)->siid,Oteding1(np1)->ordate,Oteding1(np1)->ortimestart,(Oteding1(np1)->ortimeover)+1,Oteding1(np1)->orprice);
		}
		np1=np1->next; //找不到则偏移下个节点
	    }

	if(count1==0)
	{
	printf("您无订单\n");
	}

}



ORDER *Oteding1(ORDER *np1)//把顾客信息链表特定的节点录到一个独立结构体
{

	ORDER *tp1;//独立结构体
	tp1=(ORDER*)malloc(sizeof(ORDER));//申请内存

	strcpy(tp1->orid,np1->orid );
	strcpy(tp1->cusid, np1->cusid);
	strcpy(tp1->nowtime,np1->nowtime);
	strcpy(tp1->siid,np1->siid );
	strcpy(tp1->sista,np1->sista);
	strcpy(tp1->ordate,np1->ordate);
	tp1->orprice=np1->orprice;
	tp1->ortimestart=np1->ortimestart;
	tp1->ortimeover=np1->ortimeover;

	tp1->next=NULL;

	return tp1;


}



int isEmail(char *email){
	int i=1,o=1;
    char *p,*p1;
    p=strstr(email,"@");
    if(!p)return 0;
    while(*(p+i)!=32&&*(p+i)!=0){
    	if(*(p+i)=='@'){return 0;}
    	else i++;
	}
    if(*(p+1)=='.')return 0;
    if (!(p-email))return 0;
    if(*(p+1)=='@') return 0;
    if(isEmail(p)==1)return 0;
     p1=strstr(p,".");
    if(!p1)return 0;
        while(*(p1+o)!=32&&*(p1+o)!=0){
    	if(*(p1+o)=='.'){return 0;}
    	else o++;
	}
    if((p-p1)=='@' )return 0;
    if(*(p1+1)=='\0')return 0;
    if(*(p1+1)=='.')return 0;
    if(isEmail(p1)==1)return 0;

    return 1;
}


	void xiugaiyue1(CUST *fNode)
{
	FILE *outFile;
	CUST *np1=fNode->next;
outFile=fopen("顾客信息.dat","w+");
	    while(np1!=NULL)
	    {
		fprintf(outFile,"%-9s\n%-9s\n%-9s\n",np1->id,np1->customer_name,np1->sex);
	 	fprintf(outFile,"%-10d\n%-10d\n%-9s\n%-14s\n",np1->age,np1->phonenumber,np1->password,np1->mail);
	 	fprintf(outFile,"%-5.2lf\n%-9s\n%-10d\n",np1->balance,np1->place,np1->time);
	 	np1=np1->next;
		}

	 fclose(outFile);



}



double cancleorder(CUST *cust5)//删除订单  将客户链表带入
{


    double price=0;
    int i5 = 1;
	int j = 0;
	int k = -1;
	int check = 0;
	int  cancle;
	char i[50];
	time_t t;
	struct tm *lt;
	time(&t);		                        //获取Unix时间戳
	lt = localtime(&t);	                //转化时间结构
    char avitime[20];
    char time4[20];

	FILE *out;
   	ORDER *temp= (ORDER*)malloc(sizeof(ORDER));
	ORDER *order5 = (ORDER*)malloc(sizeof(ORDER));
	ORDER *orderhead = (ORDER*)malloc(sizeof(ORDER));
	ORDER *order4 = (ORDER*)malloc(sizeof(ORDER));
    ORDER *order4head = (ORDER*)malloc(sizeof(ORDER));

    orderhead = createinf4();

    order5 = orderhead;/*建立预定信息链表带入order5中*/
    order4 = NULL;
    temp=orderhead;



    while(order5!=NULL)
    {
        if(strcmp(cust5->id,order5->cusid)==0)//找到该用户下的所有订单，并全部打出
		{

			printf("\n订单%d.  所属场馆：%s  场地编号：%s   日期:%s   使用时间段：%d:00-%d:00\n",i5,order5->cusid,order5->siid,order5->ordate,order5->ortimestart,order5->ortimeover+1);
			i[j]=i5;
			i5++;
			j++;
			if(order4==NULL)
            {
                order4 = order5;
                order4head = order4;
            }
            else
            {
                order4->next = order5;
                order4 = order5;
            }

        }
        order5=order5->next;
    }
    if(j==0){
        return -1;
    }
    i5--;
    j--;


//orderhead = createinf4();
order4 = order4head;
	printf("\n%d、          取消操作",i5+1);
    while(check == 0)
	{
    	printf("\n\n请输入您想要取消的订单序号或取消操作序号：\n");

    	scanf("%d",&cancle);
    	if( cancle > i5+1 ||cancle <= 0)
    	{
		    printf("无效订单序号，请重新输入！\n");
		    continue;
		}
		else if (cancle==(i5+1))
		return -2;
    	else
        {
        for(k = 0;k < i5; k++)
        {

            if(i[k] == cancle )
            {
                printf("\n\n找到该订单！您想删除的订单信息为\n");
                printf("\n订单%d.  所属场馆：%s  场地编号：%s   日期:%s   使用时间段：%d:00-%d:00 %.2lf\n",i[k],order4->sista,order4->siid,order4->ordate,order4->ortimestart,order4->ortimeover+1,order4->orprice);
                check = 1;
                break;
            }
            order4=order4->next;
        }

}
}
price = order4->orprice;printf("%.2lf",price);
    sprintf(avitime,"%d:%d:%d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday+1, lt->tm_hour, lt->tm_min);//可取消时间为当前时间+1天
    printf(avitime,"%d:%d:%d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday+1, lt->tm_hour, lt->tm_min);
	sprintf(time4,"%s:%d:00",order4->ordate,order4->ortimestart);
    printf("\n该订单预定使用时间为%s\n",time4);
    if(strcmp(time4,avitime)<0)
        printf("\n您只能取消在预定时间24小时之前的订单！\n");
        else
        {


            out=fopen("预订信息.txt","w");
   	        if(out==NULL)
	        {
                printf("\n无法打开文件!\n");
                exit(1);
            }
            if(strcmp(orderhead->cusid,order4->cusid)==0&&strcmp(orderhead->siid,order4->siid)==0&&orderhead->orprice==order4->orprice&&strcmp(orderhead->nowtime,order4->nowtime)==0&&strcmp(orderhead->ordate,order4->ordate)==0)      //所删除订单在最开头
            {
                orderhead=orderhead->next;
                free(order4);


            }


            else         //所删除的订单在中部
            {
            //printf("%s",order4->nowtime);
                while(strcmp(temp->next->cusid,order4->cusid)!=0||strcmp(temp->next->siid,order4->siid)!=0||temp->next->orprice!=order4->orprice||strcmp(temp->next->nowtime,order4->nowtime)!=0||strcmp(temp->next->ordate,order4->ordate)!=0)
                    {
                        temp=temp->next;
                    }
                temp->next=order4->next;
                free(order4);


            }
            printf("\n删除成功！\n");
            while(orderhead!=NULL)
            {
          fprintf(out,"%s\n",orderhead->orid);
          fprintf(out,"%s\n",orderhead->cusid);
          fprintf(out,"%s\n",orderhead->nowtime);
          fprintf(out,"%s\n",orderhead->siid);
          fprintf(out,"%s\n",orderhead->sista);
          fprintf(out,"%.2f\n",orderhead->orprice);
          fprintf(out,"%s\n",orderhead->ordate);
          fprintf(out,"%d\n",orderhead->ortimestart);
          fprintf(out,"%d\n",orderhead->ortimeover+1);


              orderhead=orderhead->next;


            }


    	    fclose(out);
    	    return price;
}
}

void  kongyuchaxun3()
{

int i3=0,j3=0;
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("预订信息.txt","r");

    char orid[NUMBER][40];//订单号
	char cusid[NUMBER][20];//客户ID
	char nowtime[NUMBER][30];//下单日期时间
	char siid[NUMBER][30];//场地ID
	char sista[NUMBER][30];//所属场馆
	double orprice[50];//订单价格
	char ordate[NUMBER][30];//预定日期
	int ortimestart[50];//预定开始时间
	int ortimeover[50];//预定结束时间
	char ID[50];//输入的id；

	int rqc;//日期差
	int dqyf;//当前月份
	int dqjh;//当前是几号

	int m,l,u;//循环变量
	int chaxunriqi;//想要查询的日期
	int a1,b1=0,c1;//循环变量
	int i1=0,j1,k1;

//第一步，读出系统的月份与年份的程序
	time_t timep;
	struct tm *p;
	time (&timep);
	p=gmtime(&timep);
	//printf("%d\n",1+p->tm_mon);//获取当前月份,范围是0-11,所以要加 1
	//printf("%d\n",p->tm_mday);//获取当前月份日数,范围是1-31



//第二步，建立当前日期的二维数组；
	int biaoge[7][16]={
    {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
    {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
    {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}
		 			};
//*************************************************************************************************************
		while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%lf\n%s\n%d\n%d\n",orid[i3],cusid[i3],nowtime[i3],siid[i3],sista[i3],&orprice[i3],ordate[i3],&ortimestart[i3],&ortimeover[i3])!=EOF)
	{
	 i3++;
	}

	a1=i3;
    printf("请输入想要查询的场馆ID :");
	gets(ID);
/*ID首先和i3个已经录入表格的场馆ID进行对比，for循环循环i3次，找到的话判别变量h加一；
  1.如果有，进行程序
  2.如果没有，和链表里所有ID进行对比
  （1）.如果有相同：“该场馆为了7天全时间都可以预订
  （2）.如果没有相同：“输出  抱歉，没有所查询的场馆ID。

*/

	for(i1=0;i1<a1;i1++)
	{
		if (strcmp(siid[i1],ID) == 0)//找到与已录入场馆相同的ID
		b1++;		//用于判别的整数
	}

	if(b1>=1)
	{
		for(k3=0;k3<i3;k3++)
	{
		if (strcmp(siid[k3],ID) == 0)//找到与已录入场馆相同的ID
		{


		dqyf= 1+p->tm_mon; //当前月份
		dqjh=p->tm_mday; //当前几号

		//printf("%d\t%d\n",ortimestart[k3],ortimeover[k3]);//订单开始时间和结束时间

		//以下是将字符串转化为整数的程序，用来提取订单的月份和日期（到**********截止）
	    char 	*p=	ordate[k3];;
		int b[80]={0},i=0,j=0,x=0; //x相当于一个开关


		for(p=ordate[k3];(*p)!='\0';p++) //遍历字符串
			{
				if(((*p)>='0')&&((*p)<='9')) //如果字符串里面有数字
					{
						if(x==0)
							{
								b[i]=(*p)-48;
								i++;
							}
						else
						b[i-1]=b[i-1]*10+(*p)-48;
						x=1;
					}
				else
				x=0;
			}

			//printf("%d\n",b[1]);//订单月份
			//printf("%d\n",b[2]);//订单日期
//************************************************************************************************
			if( b[1]>dqyf&&(b[1]==1||b[1]==3||b[1]==5||b[1]==7||b[1]==8||b[1]==10||b[1]==12))//如果订单月份大于当前月份且订单月份为大月份
		{
			b[2]=b[2]+31;
		}
		if( b[1]>dqyf&&(b[1]==4||b[1]==6||b[1]==9||b[1]==11 ))//如果订单月份大于当前月份且订单月份为小月份
		{
			b[2]=b[2]+30;
		}
		if( b[1]>dqyf&&b[1]==2)	// 如果订单月份大于当前月份且订单月份2月份
		{
			b[2]=b[2]+28;
		}

		rqc=b[2]- dqjh;//更改第几行
		m=ortimeover[k3]-ortimestart[k3];//要改几个数，就循环几次
       	for(l=0;l<m;l++)
        	{
        	biaoge[rqc][ortimestart[k3]+l-6]=0;
			}

		}

	}
		printf("请输入您想查询几天后的预约情况（0-6）天：");
		scanf("%d",&chaxunriqi);
		if(chaxunriqi<7&&chaxunriqi>=0)
		{
			for(u=0;u<16;u++)
			{
				if(biaoge[chaxunriqi][u]!=0)
				printf("%d\t",biaoge[chaxunriqi][u]);
    		}
    	}
		else
		{
		printf("输入错误");

    	}
	}



	if(b1==0)
	{
		SITE *first=NULL;
		first=createinf2();
		traversal(first,ID);

	}






}




void traversal(SITE *first,char id[])//traversal every node           遍历
{
	int i=0;
	SITE *np = first;
	while(np != NULL)
	{
		//	if (strcmp(siid[k3],ID) == 0)
		if (strcmp(np->SIid,id) == 0)

			i=i+1;


		//printStudent(np);
		np = np->next;
	}
	if(i>=1)
	{
	printf("该场馆为了7天全时间都可以预订");
	}
	else
	{
	printf("抱歉，没有所查询的场馆ID");
	}

}



void xiugaiguke1(CUST *fNode)
{
	FILE *outFile;

	CUST *p1;
	p1=fNode;
	CUST *np=fNode;
	CUST *np1=fNode->next;
	char id1[NUMBER];
	char names[NAMELEN];
	char ids[NUMBER];
	char sexs[NUMBER];
	char mails[NUMBER];
	char passwords[NUMBER];
	char places[NUMBER];
	char phonenumbers[NUMBER];
	double balances;
	int times;
	int ages;
    int count1=0;
   int y=0;
   int yk1=0;
	int NL1;
	printf("请输入您修改顾客ID:\n");
	scanf("%s",id1);
	getchar();
	while(np!=NULL&&(strcmp(np->id,id1)!=0))
	{
		np=np->next;

	}
	if(np==NULL)
	printf("无此用户ID");
	if(np!=NULL)
	{
			printf("             请输入修改后的信息：          \n\n");

			do{
			    int count1=0;
				printf("                   用户ID                \n\n");
				gets(ids);
				int lenK1;
		 		lenK1=strlen(ids);

		while(p1!=NULL)//查重ID
	  	{


			if((strcmp(p1->id,ids)==0)&&count1==0)
			{   count1++;
				printf("该用户ID已存在，请重新修改！\n");
			}

	    p1=p1->next;
		}


		if(lenK1<6||lenK1>10)

				printf("该用户ID长度不在6-10间，请重新修改！\n");


		if(count1==0&&lenK1>=6&&lenK1<=10)
		{
		strcpy(np->id,ids);
		yk1=1;
		break;
		}
			}  while(yk1==0);


				printf("                   用户姓名               \n\n");
				gets(names);

			do{
				char n1;
				printf("                男生请选择1 女生请选择2             \n\n");
				scanf("%c",&n1);
				getchar();
				if(n1==49){strcpy(sexs,"male");	break;}
				else if(n1==50){strcpy(sexs,"female");break;}
				else {printf("错误输入，请重试\n");}
			  }			while(1);

				printf("                   用户年龄                \n\n");
				scanf("%d",&ages);
			do{
	         	printf("                   用户电话               \n\n");
				scanf("%s",&phonenumbers);
				int lenN1=0;
				lenN1=strlen(phonenumbers);
				if(lenN1!=11)
					printf("您输入电话为%d位，不符合11位规范，请重新注册\n",lenN1);

				else
				break;
			  }
			    while(1);

				getchar();
				printf("                   用户密码                \n\n");
				gets(passwords);
				while(1)
			{
	    		printf("                   用户邮箱                \n\n");
				gets(mails);
	    		if(isEmail(mails)==1)
				{
					break;
				}
				printf("错误格式请重试\n");
			}
				printf("                   用户地址                \n\n");
				gets(places);
				printf("                   用户余额                \n\n");
				scanf("%lf",&balances);
				printf("                   用户违约次数                \n\n");
				scanf("%d",&times);

				    strcpy(np->customer_name,names);
	    			strcpy(np->id,ids);
					strcpy(np->sex,sexs);
					strcpy(np->mail,mails);
					strcpy(np->password,passwords);
					strcpy(np->place,places);
					strcpy(np->phonenumber,phonenumbers);
					np->age=ages;
					np->balance=balances;
					np->time=times;





	   outFile=fopen("顾客信息.dat","w+");
	    while(np1!=NULL)
	    {
		fprintf(outFile,"%-9s\n%-9s\n%-9s\n",np1->id,np1->customer_name,np1->sex);
	 	fprintf(outFile,"%-10d\n%-13s\n%-9s\n%-14s\n",np1->age,np1->phonenumber,np1->password,np1->mail);
	 	fprintf(outFile,"%-5.2lf\n%-9s\n%-10d\n",np1->balance,np1->place,np1->time);
	 	np1=np1->next;
		}

	 fclose(outFile);
	  printf("成功修改！\n");
	}



}

