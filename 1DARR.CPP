//Programmer: Angelica Joy Uy
#include<iostream.h>
#include<conio.h>
#include<process.h>

	int choice, i, c, j;
	int arr1[30], arr2[30];

void input(int fscore[], int index)
{
	for(int i=0; i<index; i++)
	{
	cout<<"Enter Element["<<i+1<<"]:";
	cin>>fscore[i];
	}

}

void dis(int fscore[], int index)
{
	cout<<"The value of all Elements are: "<<endl;
	for(i=0; i<index; i++)
	cout<<"Element no.["<<i+1<<"]:"<<fscore[i]<<endl;
	getch();
}

void sum(int fscore[], int index)
{
	int sum=0;
	for(i=0; i<index; i++)
	sum=sum+fscore[i];
	getch();
}

void diseve(int fscore[], int index)
{
	for(i=0; i<index; i++)
	if(fscore[i]%2==0)
	{
	cout<<"The even numbers within the elements are: ";
	cout<<fscore[i]<<endl;
	}
	getch();
}

void larnsmal(int fscore[], int index)
{
		int largest = fscore[0], smallest = fscore[0], indexS, indexL;

		for(int i = 0; i <index; i++){
		if(fscore[i] <= smallest){
			smallest = fscore[i];
			indexS = i;
		}
		if(fscore[i] >= largest){
			largest = fscore[i];
			indexL = i;
		}
		}
		cout<<"The Smallest Number is: "<<smallest<<" located at index["<<indexS<<"]"<<endl;
		cout<<"The Largest Number is: "<<largest<<" located at index["<<indexL<<"]"<<endl;

	       getch();
}

void ocu(int fscore[], int index)
{
	       int n;
	       int t=0;
	       cout<<"Input an Integer: ";
	       cin>>n;

	       for(i=0; i<index; i++)
	       {
		  if(fscore[i]==n)
		  t++;
	       }

	       cout<<"Number "<<n<<" Occured: "<<t++<<" times";

	       getch();
}

void reve(int fscore[], int index)
{
	       {
		 cout<<"Default array: "<<endl;
		 for(i = 0; i <index; i++)
	       {
		      cout<<fscore[i]<<endl;
	       } }
		 cout<<"Reversed array: "<<endl;
		  for(i = 9; i >index; i--)
	       {
		       cout<<fscore[i]<<endl;
	}
	getch();
}
void seclar(int fscore[], int index)
{
	       int f;
	       f=0;
	       int s=0;

	       for (i=1; i<index; i++)
	       {
		  if (fscore[i]>s)
		  {
		    s=f;
		    f=fscore[i];
	       } else if (fscore[i]>s&&fscore[i]<f)
		 {
			s=fscore[i];
	       } }
	       cout<<"\nSecond Largest Number: "<<s;

	       getch();

}

void ArrayCopy1D(int source[], int destination[], int index)
{
    for(i=0; i<index; i++){
     destination[i]=source[i];
    }
    }
int BinarySearch(int fscore[], int index, int search)
{
     int low=0;
     int high=index-1;
     while (low<=high){
     int midd=low+(high-low)/2;
     if(fscore[midd]==search)
     return midd;
     else if(fscore[midd]<search)
     low=midd+1;
     else
     high=midd-1;
     }
    return-1;
    }
void insertionsort(int fscore[], int index)
{
     for(int i=1; i<index; i++){
    int key=arr1[i];
    int j=i-1;
     while(j>=0&&arr1[j]>key){
    fscore[j+1]=fscore[j];
    j--;
    }
    fscore[j+1]=key;
    }
    cout<<"(Insertion Sort): "<<endl;
    }
void selectionsort(int fscore[], int index)
{
    int minindex, temp, i;
    minindex=i;
    for(i=0;i<index; i++)
    {
    minindex=i;
     for(int j=i+1;j<index; j++)
     {
    if(fscore[j]<fscore[minindex])
    {
    minindex=j;
    }
     }
     temp=fscore[minindex];
     fscore[minindex]=fscore[i];
     fscore[i]=temp;
    }
    cout<<"(Selection Sort): "<<endl;
    }
void bubblesort(int fscore[], int index)
{
    int temp;
    for(i=0; i<index-1; i++){
     for(j=0; j<index-i-1; j++){
    if(fscore[j]>fscore[j+1])
    {
     temp=fscore[j];
     fscore[j]=fscore[j+1];
     fscore[j+1]=temp;
    }
     }
    }
    cout<<"(Bubble Sort): "<<endl;
    }

void main()
{
	clrscr();
	int numofelements;
	cout<<"How many elements you want in your array? ";
	cin>>numofelements;

	do{
	clrscr();

	cout << "----------------------- MAIN MENU ------------------------" << endl;
	cout << "[1] Input Array Elements" << endl;
	cout << "[2] Display Elements" << endl;
	cout << "[3] Sum All Elements In The Array" << endl;
	cout << "[4] Sum Of All Negative Numbers" << endl;
	cout << "[5] Find The Smallest And The Largest Element In The Array" << endl;
	cout << "[6] Count The Occurrence Of An Integer" << endl;
	cout << "[7] Reverse The Current Array" << endl;
	cout << "[8] Second Largest Element" << endl;
	cout << "[9] Copy The Elements" << endl;
	cout << "[10] Search For An Element" << endl;
	cout << "[11] Sort The Elements Using Insertion" << endl;
	cout << "[12] Sort The Elements Using Bubble" << endl;
	cout << "[13] Sort The Elements Using Selection" << endl;
	cout << "[14] Exit" << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "Enter your choice: ";
	cin >> choice;

	switch(choice)

{
	case 1:
	       input(arr1, numofelements);
	       break;

	case 2:
	       dis(arr1, numofelements);
	       break;

	case 3:
	       sum(arr1, numofelements);
	       break;

	case 4:
	       diseve(arr1, numofelements);
	       break;

	case 5:
	       larnsmal(arr1, numofelements);
	       break;

	case 6:
	       ocu(arr1, numofelements);
	       break;

	case 7:
	       reve(arr1, numofelements);
	       break;

	case 8:
	       seclar(arr1, numofelements);
	       break;

case 9:
    ArrayCopy1D(arr1, arr2, numofelements);
    cout<<"Original Array: "<<endl;
    display(arr1, numofelements);
    cout<<"Copied Array: "<<endl;
    display(arr2, numofelements);
    getch();
    break;
case 10:
    int search;
    cout<<"Enter number to search: ";
    cin>>search;
    int indexx=BinarySearch(arr1, numofelements, search);
     if(indexx!=-1)
     cout<<"Element found at index["<<indexx<<"]"<<endl;
     else
    cout<<"You entered element is not found!"<<endl;
    getch();
    break;
case 11:
    ArrayCopy1D(arr1, arr2, numofelements);
    insertionsort(arr2, numofelements);
    cout<<"The Original Array: "<<endl;
    display(arr1, numofelements);
    cout<<"The Sorted Array: "<<endl;
    display(arr2, numofelements);
    getch();
    break;
case 12:
    ArrayCopy1D(arr1, arr2, numofelements);
    selectionsort(arr2, numofelements);
    cout<<"The Original Array: "<<endl;
    display(arr1, numofelements);
    cout<<"The Sorted Array: "<<endl;
    display(arr2, numofelements);
    getch();
    break;
case 13:
    ArrayCopy1D(arr1, arr2, numofelements);
    bubblesort(arr2, numofelements);
    cout<<"The Original Array: "<<endl;
    display(arr1, numofelements);
    cout<<"The Sorted Array: "<<endl;
    display(arr2, numofelements);
    getch();
    break;
	case 14:
		exit(0);
		default:
		cout<<"Invalid! Please try again.";
		getch();
		break;
		}
	getch();

	}while(choice!=14);


}