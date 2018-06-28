#include <iostream>
#include <iomanip>
using namespace std;

int strLen(char* arr)
{
    int index = 0;
    while(arr[index]!='\0')
    {
        index+=1;
    }
    return index;
}

void printString(char* arr, int const size)
{
    for(int times = 0; times<size; times+=1)
    {
        for(int index=0; index<strLen(arr); index+=1)
        {
            switch(arr[index])
            {
            case 'a':
            case 'A':
                if(times == 0 || times == size / 2)
                {
                    for(int col = 0; col < size; col++)
                    {

                        cout << "*";
                    }
                }
                else
                {
                    for(int i=0; i<size; i++)
                    {
                        if(i==0||i==size-1)
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }

                }
                break;
            case 'b':
            case 'B':
                if(times == 0 || times == size-1 || times == size / 2 || (size%2==0 && times== (size/2-1) ))
                {
                    for(int col = 0; col < size; col++)
                    {

                        cout << "*";
                    }
                    cout << " ";
                }
                else
                {
                    for(int i=0; i<size; i++)
                    {
                        if(i==0||i==size-1)
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                    cout << "*";

                }
                break;
            case 'c':
            case 'C':
                if(times == 0 || times == size-1)
                {
                    for(int col = 0; col < size-1; col++)
                    {

                        cout << "*";
                    }
                    cout << " ";
                }
                else
                {
                    cout << "*";
                    for(int col = 0; col < size-1; col++)
                    {
                        if((col==size-2)&&(times==1||times==size-2))
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                }
                break;
            case 'd':
            case 'D':
                if(times == 0 || times == size-1)
                {
                    for (int columns = 0; columns < size-1 ; columns ++)
                    {
                        cout << "*";
                    }
                }
                else
                {
                    for (int columns = 0 ; columns < size ; columns ++)
                    {
                        if (columns == 0 || columns == size-1)
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                }
                break;
            case 'e':
            case 'E':
                if(times == 0 || times == size-1 || times == size/2 ||(times == (size/2)-1 && size%2==0))
                {
                    for(int col = 0; col < size; col++)
                    {
                        cout << "*";
                    }
                }
                else
                {
                    cout << "*";
                    cout << setw(size-1) << setfill(' ')<<"";
                }
                break;
            case 'f':
            case 'F':
                if(times==0 || times==size/2-1)
                {
                    for(int i=0; i<size; i++)
                    {
                        cout << "*";
                    }
                }
                else
                {
                    cout << "*";
                    for(int times=1; times<size; times++)
                    {
                        cout << " ";
                    }
                }
                break;
            case 'g':
            case 'G':
                if(times==0||times==size-1)
                {
                    for(int i=0; i<size; i++)
                    {
                        cout << "*";
                    }
                }
                else if(times>size/2)
                {
                    for(int i=0; i<size; i++)
                    {
                        if(i==0||i==size-1)
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                }
                else if(times==size/2)
                {
                    for(int i=0; i<size; i++)
                    {
                        if(i==0 || i>=size/2)
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }

                }
                else
                {
                    cout << "*";
                    for(int i=1; i<size; i++)
                    {
                        cout << " ";
                    }
                }

                break;
            case 'h':
            case 'H':
                if(times==size/2)
                {
                    for(int i=0; i<size; i++)
                    {
                        cout << "*";
                    }
                }
                else
                {
                    for(int i=0; i<size; i++)
                    {
                        if(i==0||i==size-1)
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                }

                break;
            case 'i':
            case 'I':
                if(times==0 || times==size-1)
                {
                    for(int i=0; i<size; i++)
                    {
                        cout << "*";
                    }

                }
                else
                {
                    for(int c=0; c<=size/2-1; c++)
                    {
                        cout << " ";
                    }
                    cout << "*";
                    for(int c=size/2+1; c<size; c++)
                    {
                        cout << " ";
                    }
                }
                break;
            case 'j':
            case 'J':
                if(times==0)
                {
                    for(int i=0; i<size; i++)
                    {
                        cout << "*";
                    }

                }
                else if(times==size-1)
                {
                    for(int i=0; i<=size/2; i++)
                    {
                        cout << "*";
                    }
                }
                else
                {
                    if(times>=size/2)
                    {
                        cout << "*";
                        for(int c=1; c<=size/2-1; c++)
                        {
                            cout << " ";
                        }
                        cout << "*";
                        for(int c=size/2+1; c<size; c++)
                        {
                            cout << " ";
                        }
                    }
                    else
                    {
                        for(int c=0; c<=size/2-1; c++)
                        {
                            cout << " ";
                        }
                        cout << "*";
                        for(int c=size/2+1; c<size; c++)
                        {
                            cout << " ";
                        }
                    }
                }
                break;
            case 'k':
            case 'K':
                cout << "*";
                for(int columns=1; columns<size; columns+=1)
                {
                    if((times>=size/2 &&columns==times) || (times<size/2 &&columns+times==size-1))
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                break;
            case 'l':
            case 'L':
                if(times!=size-1)
                {
                    cout << "*";
                    for(int columns=0; columns<size-1; columns+=1)
                    {
                        cout << " ";
                    }
                }
                else
                {
                    for(int columns=0; columns<size; columns+=1)
                    {
                        cout << "*";
                    }
                }
                break;
            case 'm':
            case 'M':
                cout << "*";
                for(int columns=1; columns<size-1; columns+=1)
                {
                    if(((size%2==1 &&times==size/2) || times<size/2) && (columns==times || columns+times == size-1))
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << "*";
                break;
            case 'n':
            case 'N':
                cout << "*";
                for(int columns=1; columns<size-1; columns+=1)
                {
                    if(columns==times)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << "*";
                break;
            case 'o':
            case 'O':
                if(times==0||times==size-1)
                {
                    for(int columns=0; columns<size; columns+=1)
                    {
                        cout << "*";
                    }
                }
                else
                {
                    for(int columns=0; columns<size; columns+=1)
                    {
                        if(columns==0||columns==size-1)
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                }
                break;
            case 'p':
            case 'P':
                if(times==0||times==size/2)
                {
                    for(int columns=0; columns<size-1; columns+=1)
                    {
                        cout << "*";
                    }
                }
                else if(times>0 && times< size/2)
                {
                    cout << "*";
                    for(int columns=0; columns<size-2; columns+=1)
                    {
                        cout << " ";
                    }
                    cout << "*";
                }
                else
                {
                    cout << "*";
                    for(int columns=0; columns<size-1; columns+=1)
                    {
                        cout << " ";
                    }
                }
                break;
            case 'q':
            case 'Q':
                if(times == 0 || times == size-1)
                {
                    for (int columns = 0; columns < size ; columns ++)
                    {
                        cout << "*";
                    }
                }
                else
                {
                    for (int columns = 0 ; columns < size ; columns ++)
                    {
                        if (columns == 0 || columns == size-1)
                        {
                            cout << "*";
                        }
                        else
                        {
                            if(times>=size/2&& columns==times)
                            {
                                cout << "*";
                            }
                            else
                            {
                                cout << " ";
                            }
                        }
                    }
                }
                if (times==size-1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                break;
            case 'r':
            case 'R':
                if(times==0||times==size/2)
                {
                    for(int columns=0; columns<size-1; columns+=1)
                    {
                        cout << "*";
                    }
                    cout << " ";
                }
                else if(times > 0 && times < size/2)
                {
                    cout << "*";
                    cout << setw(size-2) << setfill(' ')<< "";
                    cout << "*";
                }
                else
                {
                    cout << "*";
                    cout << setw(size-2) << setfill(' ')<< "";
                    cout << "*";
                }
                break;
            case 's':
            case 'S':
                cout << " ";
                if(times == 0 || times == size/2 || times == size-1)
                {
                    for (int star = 0 ; star <= size-1 ; star++)
                    {
                        cout << "*";
                    }
                }
                else if(times > 0 && times < size/2)
                {
                    cout << "*";
                    for (int space = 0 ; space <= size-2 ; space++)
                    {
                        cout << " ";
                    }
                }
                else if(times > size/2 && times < size-1)
                {
                    for (int space = 0 ; space <= size-2 ; space++)
                    {
                        cout << " ";
                    }
                    cout << "*";
                }
                break;
            case 't':
            case 'T':
                cout << " ";
                if(times==0 )
                {
                    for(int i=0; i<size; i++)
                    {
                        cout << "*";
                    }

                }
                else
                {
                    for(int c=0; c<=size/2-1; c++)
                    {
                        cout << " ";
                    }
                    cout << "*";
                    for(int c=0; c<=size/2-1; c++)
                    {
                        cout << " ";
                    }
                }
                break;
            case 'u':
            case 'U':
                if(times == 0)
                {
                    for (int columns = 0; columns < 1 ; columns ++)
                    {
                        cout << "*";
                    }
                    for (int spaces = 0; spaces <= size-3 ; spaces++)
                    {
                        cout << " ";
                    }
                    cout << "*";
                }
                else if(times == size-1)
                {
                    for (int columns = 0; columns < size ; columns ++)
                    {
                        cout << "*";
                    }
                }
                else
                {
                    for (int columns = 0 ; columns < size ; columns ++)
                    {
                        if (columns == 0 || columns == size-1)
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                }
                break;
            case 'v':
            case 'V':
                for(int columns=0; columns<size-1; columns+=1)
                {
                    if((columns==times))
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << "*";
                break;
            case 'w':
            case 'W':
                cout << "*";
                for(int columns=1; columns<size; columns+=1)
                {
                    if((columns == size-1)||(times>=size/2) && (columns==times || columns+times == size-1))
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                break;
            case 'x':
            case 'X':
                for(int line=0; line<size; line+=1)
                {
                    if( times == line || times+line == size-1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
                break;
            case 'y':
            case 'Y':
                for(int line=0; line<size; line+=1)
                {
                    if( (times == line && times<size/2) || times+line == size-1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
                break;
            case 'z':
            case 'Z':
                for(int line=0; line<size; line+=1)
                {
                    if((times == 0 || times == size-1)||(line == -1 || line == size+1) || times+line == size-1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
                break;
            case '#':
                cout << " ";
                break;
            }
            cout << "\t";
        }
        cout << endl;
    }
}

int main()
{
    char strng[20];
    cout << "Enter string : ";
    cin >> strng;
    int size;
    cout << "Enter size of matrix : ";
    cin >> size;
    printString(strng,size);
    return 0;
}
