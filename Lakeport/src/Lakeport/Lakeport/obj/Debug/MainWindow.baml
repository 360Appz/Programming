   M S B A M L   `   `   `  ����C  ?Lakeport, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null#clr-namespace:LakeportLakeport  5   	   9!clr-namespace:Lakeport.ViewModelsLakeport.ViewModels  6.       Lakeport.MainWindow   5   	   \ XPresentationFramework, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35R NWindowsBase, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35W SPresentationCore, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35D 9http://schemas.microsoft.com/winfx/2006/xaml/presentation    5   	   R NSystem.Xaml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   (localclr-namespace:Lakeport     5   	   8
viewmodels!clr-namespace:Lakeport.ViewModels     6.     � Title$  LakePort��5   	   $	��768��6   $
��1024��6'    � 
ResizeMode$ NoResize=�64    � WindowStyle$ SingleBorderWindow=�5	   	   ���#181735.��5      � $	��800��6   $	��600��6   $��	0,9,0,147q�6$   .+�5   
   �� $	��500��6   $	��200��6!   $��	0,100,0,0q�6.   .+�5      �� $��LakePort��5      $��50��5      
�������$��1��5      $��45(�5      $��Fonts/#GraphikBlack)�5      $��Medium"�5      $��4��6%   $��50,-90,46,12q�5      $	��181��6'   �� 5      $	��130��6   $	��500��6&   .+�5      �� $^��XHello there !! This is app will show how the MVVM (Model-View-ViewModel) works for GUIs'��6   $
��Wrap=�6|   
�������$��25(�5   +   5      5       �� 5&   
   ��6   �� *SelectedViewModel+�� 5)   
   $
��Home��6   
���   �$��25(�5+      $��Medium"�5,      $
��Home��5.      $��80,-450,294,0q�61   ��5-      �� *
UpdateView+��5/      �� 50       �� 
TargetType" ��6   .�51      ��  �� Property � �� �� Value$ Fonts/#GraphikBlack)�6?   �� 52       � �� �#FE658463   �� 53       �@�Cursor$
 Hand��6/    �� Triggers 55      P� 56       P� Property �@J�IsMouseOver P� Value . . �57      ��  � �� �#FF4C706;   58      5:      ��5=      �� 5>      	 �� 
TargetType"	 ��6"   .R�5?      �� $	��150��6   $��45��6)   
 �� CornerRadius$
 25��5@   %   #��z��67   ._�5B      �� $��Center=�6+   $��Center=�5C   3   5D      5E      5F      5I      �� 5L   
   $
��Rent��6   
���   �$��25(�5N      $��Medium"�5O      $
��Rent��5Q      $��250,-450,0,0q�61   ��5P      �� *
UpdateView+��5R      �� 5S      " ��6   .�5T      ��  � ��$ Fonts/#GraphikBlack)�6?   �� 5U       � �� �#FE658463   �� 5V       �@�Cursor$
 Hand��6/    5X      P� 5Y       �@J�IsMouseOver . . �5Z      ��  � �� �#FF4C706;   5[      5]      ��5`      �� 5a      "	 ��6"   .R�5b      �� $	��150��6   $��45��6)   $
 25��5c   %   #��z��67   ._�5e      �� $��Center=�6+   $��Center=�5f   3   5g      5h      5i      5l      5o      5q      