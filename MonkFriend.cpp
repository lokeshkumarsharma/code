#include <iostream>
using namespace std;
struct Tree
{
 long long Val;
 struct Tree *Left;
 struct Tree *Right;
};
int main()
{
freopen("test.txt","r",stdin);
    int nTestCases;
 scanf("%d", &nTestCases);
 for (int j = 0; j < nTestCases; j++)
 {
  Tree *Head;
  Tree *Current;
  Tree *Parent;
  int n, m;
  scanf("%d", &n);
  scanf("%d", &m);
  long int ld;
  int i = 0;
  for (i = 0; i < n; i++)
  {
   scanf("%ld", &ld);
   if (i == 0)
   {
    Head = (Tree*)malloc(sizeof(Tree));
    (*Head).Val = ld;
    (*Head).Left = NULL;
    (*Head).Right = NULL;
   }
   else
   {
    Current = Head;
    Parent = NULL;
    while (Current != NULL)
    {
     Parent = Current;
     if((*Current).Val < ld)
     {
      (Current) = (*Current).Left;
     }
     else
     {
      (Current) = (*Current).Right;
     }
    }
    Current = (Tree*)malloc(sizeof(Tree));
    (*Current).Val = ld;
    (*Current).Left = NULL;
    (*Current).Right = NULL;

    if ((*Parent).Val < ld)
    {
     (*Parent).Left = Current;
    }
    else
    {
     (*Parent).Right = Current;
    }
   }
  }
  for (i = n; i < n + m; i++)
  {
   bool bFound = false;
   scanf("%ld", &ld);

   Current = Head;
   Parent = NULL;
   while (Current != NULL)
   {
    Parent = Current;
    if ((*Current).Val < ld)
    {
     (Current) = (*Current).Left;
    }
    else  if ((*Current).Val > ld)
    {
     (Current) = (*Current).Right;
    }
    else
    {
     bFound = true;
     (Current) = (*Current).Right;
    }
   }
   Current = (Tree*)malloc(sizeof(Tree));
   (*Current).Val = ld;
   (*Current).Left = NULL;
   (*Current).Right = NULL;

   if ((*Parent).Val < ld)
   {
    (*Parent).Left = Current;
   }
   else
   {
    (*Parent).Right = Current;
   }

   if (bFound)
   {
    printf("YES");
   }
   else
   {
    printf("NO");
   }
   printf("\n");
  }
 }
}
