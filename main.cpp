#include<iostream>
#include<cstdlib>
using namespace std;
//"x si 0"
//un jucator castiga daca umple primul o linie sau o coloana cu x sau 0
int main()
{
	char nume1[22],nume2[22],a[5][5],c,q='y';
	int gata=0,r=0,j,i,castig,x,z;
	for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)
		{
			r++;
			a[i][j]=char(r+48);
		}
	r=0;
	cout<<"nume1=";cin>>nume1;
	cout<<"nume2=";cin>>nume2;
	system("cls");
	while(q=='y')
	{
		r++;
		if(r%2==0)
		cout<<"mutarea lui: "<<nume1<<" (X)"<<endl;
		else
			cout<<"mutarea lui: "<<nume2<<" (0)"<<endl;
		cout<<a[1][1]<<" | "<<a[1][2]<<" | "<<a[1][3]<<endl;
		cout<<"--+---+---"<<endl;
		cout<<a[2][1]<<" | "<<a[2][2]<<" | "<<a[2][3]<<endl;
		cout<<"--+---+---"<<endl;
		cout<<a[3][1]<<" | "<<a[3][2]<<" | "<<a[3][3]<<endl;
		cout<<"alegeti un numar: ";
		cin>>c;
		for(i=1;i<=3;i++)
			for(j=1;j<=3;j++)
				if(a[i][j]==c)
				{	if(r%2==0)
					a[i][j]='X';
					else
						a[i][j]='0';
				}
		system("cls");
		for(i=1;i<=3;i++)
		{
			x=0;z=0;
			for(j=1;j<=3;j++)
			{
				if(a[i][j]=='X')
					x++;
				else
					if(a[i][j]=='0')
					z++;
			}
				if(x==3||z==3)
				{
					gata=1;
					if(x==3)
					cout<<"castigatorul este "<<nume1<<'\n'<<'\n';
					if(z==3)
					cout<<"castigatorul este "<<nume2<<'\n'<<'\n';
					cout<<"introduceti y pt a mai juca sau n pt a iesi:";
					cin>>q;
					if(q=='y')
					{
						r=0;
						for(i=1;i<=3;i++)
							for(j=1;j<=3;j++)
							{
								r++;
								a[i][j]=char(r+48);
							}
							r=0;
					}
					system("cls");


				}
		}
		for(j=1;j<=3;j++)
		{
			x=0;z=0;
			for(i=1;i<=3;i++)
			{
				if(a[i][j]=='X')
					x++;
				else
					if(a[i][j]=='0')
					z++;
			}
				if(x==3||z==3)
				{
					gata=1;
					if(x==3)
					cout<<"castigatorul este "<<nume1<<'\n'<<'\n';
					if(z==3)
					cout<<"castigatorul este "<<nume2<<'\n'<<'\n';
					cout<<"introduceti y pt a mai juca sau n pt a iesi:";
					cin>>q;
					if(q=='y')
					{
						r=0;
						for(i=1;i<=3;i++)
							for(j=1;j<=3;j++)
							{
								r++;
								a[i][j]=char(r+48);
							}
							r=0;
					}
					system("cls");
				}
		}
		x=0;z=0;
			for(i=1;i<=3;i++)
			{
				if(a[i][i]=='X')
					x++;
				else
					if(a[i][i]=='0')
					z++;
			}
				if(x==3||z==3)
				{
					gata=1;
					if(x==3)
					cout<<"castigatorul este "<<nume1<<'\n'<<'\n';
					if(z==3)
					cout<<"castigatorul este "<<nume2<<'\n'<<'\n';
					cout<<"introduceti y pt a mai juca sau n pt a iesi:";
					cin>>q;
					if(q=='y')
					{
						r=0;
						for(i=1;i<=3;i++)
							for(j=1;j<=3;j++)
							{
								r++;
								a[i][j]=char(r+48);
							}
							r=0;
					}
					system("cls");
				}

	}
	return 0;
}
