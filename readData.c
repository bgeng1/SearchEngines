/*
pseudocode i guess?!

List_of_Urls <-- GetCollection(	)
  Create	a	set	(list)	of	urls to	process	by	reading	data	from	file	
  “collection.txt”
  
Graph	g	<-- GetGraph(List_of_Urls )
  Create	empty	graph	(use	graph	ADT	in	say	graph.h and	graph.c)
  For	each	url in	the	above	list	
    • read	<url>.txt	file,	and	update	graph	by	adding	a	node	and	
      outgoing	links	
      
InvertedList <-- GetInvertedList(List_of_Urls )
  Create	empty	inverted	list	(use	say	List	of	lists,	BST	where	values	are	
  lists,	etc)
  For	each	url in	List_of_Urls
    • read	<url>.txt	file,	and	update	inverted	index	
*/

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "readData.h"
#include "graph.h"

#define urlLength 100
#define listLength 100
#define MAXNAMESIZE 20
#define MAXWORDSIZE 30



//need to define a list (array of strings) - how to do that?
List getCollection(FILE *collection){

    char urlList[listLength][urlLength];
    int i;
  
    for (i = 0; (fscanf(collection, "%s", list[i]) != EOF); i++)
    {
            //printf(" %s \n", list[i]);
            strcat(list[i],".txt");
            if(strncmp(list[i],"Section-1",25)==0) i = -1;
            if(strncmp(list[i],"#end",17)==0) break;
        
    }
    //fclose(collection);
    return urlList;
}

Graph getGraph(List collection){
  Graph new = newGraph(100);
  int i = 0;
  collection[i]??
  for(n = 0; n < something ;n++){
/*draft    FILE *urlFile = fopen(collection[0],"r");
    for(x = 0; (fscanf(urlFile, "%s", listOutbound); x++;){
      listOutbound[x]
    }
*/
  }
  return new;
}

List getInvertedList(BSTree todoT, Queue todoQ){
	int counter = 1;
	char *current;
	char buffer[MAXWORDSIZE];
	char name[MAXNAMESIZE];
	FILE *fp;

	while(!emptyQueue(todoQ)){
		current = leaveQueue(todoQ);
		sprintf(name, "%s.txt",current);
		fp = fopen(name, "r");

		while(strcmp(buffer,"Section-2") != 0){
			fscanf(fp,%s,buff);
		}

		fscanf(fp, "%s", buff);

		while(strcmp(buffer, "#end") != 0){
			if(counter = 1){
				todoT = BSTreeInsert(todoT, cleanString(buffer),cleanString(current));
			}
			else {
				//BSTreeInsert(newT, CleanString(buffer),CleanString(current));
				counter = 0;
			}
			fscanf(fp,"%s",buffer);
		}
		fclose(fp);
	}
}
