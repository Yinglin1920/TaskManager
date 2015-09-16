; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CTaskManagerDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "TaskManager.h"

ClassCount=3
Class1=CTaskManagerApp
Class2=CTaskManagerDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_TASKMANAGER_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Resource4=IDR_MENU_MAIN

[CLS:CTaskManagerApp]
Type=0
HeaderFile=TaskManager.h
ImplementationFile=TaskManager.cpp
Filter=N

[CLS:CAboutDlg]
Type=0
HeaderFile=TaskManagerDlg.h
ImplementationFile=TaskManagerDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_TASKMANAGER_DIALOG]
Type=1
Class=CTaskManagerDlg
ControlCount=1
Control1=IDC_STATIC,static,1342177294

[MNU:IDR_MENU_MAIN]
Type=1
Class=?
Command1=IDM_MENU_EXIT
Command2=IDM_MENU_ADD
Command3=IDM_MENU_EXPORT
Command4=IDM_MENU_IMPORT
Command5=IDM_MENU_QUERYALL
Command6=IDM_MENU_QUERY
Command7=IDM_MENU_HOTKEY
Command8=IDM_MENU_SAVE
Command9=IDM_MENU_ABOUT
CommandCount=9

[CLS:CTaskManagerDlg]
Type=0
HeaderFile=view\taskmanagerdlg.h
ImplementationFile=view\taskmanagerdlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDM_MENU_ABOUT

