# include <stdio.h>
# include <string.h>

int indexOfList(char * list[], int size, char str[])
{
	int i;
	 for(i=0; i<size; i++){
        if(strcmp(str,list[i])==0)
            return i;
    }
    return -1;
}
int main()
{
	const int planetTotal = 8; 
	char *planets[planetTotal] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
	double distance[planetTotal] = {57.91, 108.2, 149.6, 227.94, 778.33, 1424.6, 2873.55, 4501}; 
	char *number[planetTotal] = {"first","second","third","fourth","fifth","sixth","seventh","eighth"};

	char p[100];
	int i;
	double dist[100];
	for(i=0;i<3;i++)
	{
		 printf("Say a planet: ");
         scanf("%s",p);
		 int ans = indexOfList(planets, planetTotal, p);
		 if(ans != -1)
            printf("%s is the %s planet from the sun. Its average distance from the sun is %lf million km.\n",p,*(number+ans), *(distance+ans));
        else
            printf("%s is not a planet in the solar system.\n",p);
    }
	return 0;
}