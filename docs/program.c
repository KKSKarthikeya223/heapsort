## Welcome to Github Pages

You can use the [editor on GitHub](https://github.com/KKSKarthikeya223/heapsort/edit/main/docs/index.md) to maintain and preview the content for your website in Markdown files.

Whenever you commit to this repository, GitHub Pages will run [Jekyll](https://jekyllrb.com/) to rebuild the pages in your site, from the content in your Markdown files.

### Markdown

Markdown is a lightweight and easy-to-use syntax for styling your writing. It includes conventions for

```markdown
Syntax highlighted code block

//heap sort
#include<stdio.h>
int no,c,i,j,root,temp;
int main()
{
	int *a,flag=0;
	void heaptree(int*);
	void heapsort(int*);
	printf("enter the range of elements");
	scanf("%d",&no);
	a=(int*)malloc(no*sizeof(int));
	printf("enter %d no. of elements",no);
	for(i=0;i<no;i++)
	{
		scanf("%d",&a[i]);
		if(i>0)
		{
			if(a[i-1]>a[i])
			{
				flag++;
			}
		}
	}
	if(flag==0)
	{
		printf("given elements are in sorted list");
		exit(0);
	}
	heaptree(a);
	printf("\n the maximum heap tree is \n");
	for(i=0;i<no;i++)
	    printf("%d \t",a[i]);
	heapsort(a);
	printf("\n Heapsorted list is \n");
	for(i=0;i<no;i++)
	    printf("%d \t",a[i]);
}  
void heaptree(int *a)
{
	for(i=1;i<no;i++)
	{
		c=1;
		do
		{
			root=(c-1)/2;
			if(a[root]<a[c])
			{
				temp=a[c];
				a[c]=a[root];
				a[root]=temp;
			}
			c=root;
		}while(c!=0);
	}
}
void heapsort(int *a)
{
	for(j=no-1;j>=0;j--)
	{
		temp=a[0];
		a[0]=a[j];
		a[j]=temp;
		root=0;
		do
		{
			c=2*root+1;
			if((a[c]<a[c+1]) && c<j-1)
			    c++;
			if(a[root]<a[c] && c<j)
			{
				temp=a[c];
				a[c]=a[root];
				a[root]=temp;
			}
			root=c;
		}while(c<j);
	}
}

- Bulleted
- List

1. Numbered
2. List

**Bold** and _Italic_ and `Code` text

[Link](url) and ![Image](src)
```

For more details see [Basic writing and formatting syntax](https://docs.github.com/en/github/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/KKSKarthikeya223/heapsort/settings/pages). The name of this theme is saved in the Jekyll `_config.yml` configuration file.

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://docs.github.com/categories/github-pages-basics/) or [contact support](https://support.github.com/contact) and we’ll help you sort it out.
