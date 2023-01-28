#include "Main_Methods.h"
void Main_Methods::Add(Text_Editor t)
{
	//clear console 
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Add Line \n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	string newLine;
	cout << "Line: ";
	getline(cin >> ws, newLine);
	t.Add_Line(newLine);
	exitOrContinue(t);
}
void Main_Methods::Insert(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Insert Line At Specific Position\n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	int index; string s1;
	cout << "Line Position: ";
	cin >> index;
	cout << "Line : ";
	getline(cin >> ws, s1);
	t.Insert_Line(index, s1);
	exitOrContinue(t);
}
void Main_Methods::Update(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Update Line Operation\n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	int index; string s2;
	cout << "Line Position: ";
	cin >> index;
	cout << "Modified Line: ";
	getline(cin >> ws, s2);
	t.Update_Line(index, s2);
	exitOrContinue(t);
}
void Main_Methods::Get(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Get Line \n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	int index;
	cout << "Line Position: ";
	cin >> index;
	string neededLine = t.Get_Line(index);
	cout << "Line is \" " << neededLine << " \"...\n";
	exitOrContinue(t);
}
void Main_Methods::Delete(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Delte Line \n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	int index;
	cout << "Line Position: ";
	cin >> index;
	t.Delete_Line(index);
	exitOrContinue(t);
}
void Main_Methods::FindAll(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Find All Lines That Contain that text \n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	string text;
	cout << "Text: ";
	getline(cin >> ws, text);
	t.FindAll(text);
	exitOrContinue(t);
}
void Main_Methods::FindReplaceAll(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t Find and Replace Text in All Lines \n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	string t1, t2;
	cout << endl;
	cout << "Line : ";
	getline(cin >> ws, t2);
	cout << "Modified line: ";
	getline(cin >> ws, t1);
	t.Find_ReplaceAll(t1, t2);
	exitOrContinue(t);
}
void Main_Methods::FindReplaceLine(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t Find and Replace Text in One Line \n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	int index; string t1, t2;
	cout << "Line Position: ";
	cin >> index;
	cout << "Line: ";
	getline(cin >> ws, t2);
	cout << "Modified Line: ";
	getline(cin >> ws, t1);
	t.Find_Replace_Line(index, t1, t2);
	exitOrContinue(t);
}
void Main_Methods::Display(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Display All Lines \n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	t.Display();
	exitOrContinue(t);
}
void Main_Methods::Load(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Load All Lines \n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	t.Load_Lines();
	exitOrContinue(t);
}
void Main_Methods::Save(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t    Save All Lines \n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	t.Save_Lines();
	exitOrContinue(t);
}
void Main_Methods::ClearConsle(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t    Clear All Data From The Consle\n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	t.Clear_Consle();
	exitOrContinue(t);
}
void Main_Methods::ClearFile(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t    Clear All Data From The File\n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	t.Clear_File();
	exitOrContinue(t);
}
void Main_Methods::menu(Text_Editor t)
{
	system("cls");
	int selectedOperation;
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t      Welcome To Mini Text Editor\n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "1. Add a line \n";
	cout << "2. Insert a line At specific Position \n";
	cout << "3. Get a Line By Index \n";
	cout << "4. Update a line By Index \n";
	cout << "5. Delete a line By Index \n";
	cout << "6. Find All Lines That Contain That Text And Their Indexes \n";
	cout << "7. Find Text And Replace it in All Lines\n";
	cout << "8. Find Text And Replace it in One Line\n";
	cout << "9. Display All Lines\n";
	cout << "10. Load All Lines Enterd Before\n";
	cout << "11. Save All Lines Enterd\n";
	cout << "12. Clear All Data From The Consle\n";
	cout << "13. Clear All Data From The File\n";
	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "Please, Choose From Previous Options: ";
	cin >> selectedOperation;
	switch (selectedOperation)
	{
	case 1:
		Add(t);	break;
	case 2:
		Insert(t);	  break;
	case 3:
		Get(t); break;
	case 4:
		Update(t); break;
	case 5:
		Delete(t); break;
	case 6:
		FindAll(t);
	case 7:
		FindReplaceAll(t);	 break;
	case 8:
		FindReplaceLine(t);	 break;
	case 9:
		Display(t);	 break;
	case 10:
		Load(t);
		break;
	case 11:
		Save(t);
		break;
	case 12:
		ClearConsle(t);
		break;
	case 13:
		ClearFile(t);
		break;
	default:
		exit(0);
		break;
	}
}
void Main_Methods::exitOrContinue(Text_Editor t)
{
	cout << endl;
	int answer;
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << " 1. Back To The Main Menu...\n";
	cout << " 2. Exit From The Application...\n";
	cout << endl;
	cout << "Please, Choose From Previous Options: ";
	cin >> answer;
	switch (answer)
	{
	case 1:
		menu(t); break;
	case 2:
		exit(0); break;
	default:
		exit(0);
		break;
	}
}
