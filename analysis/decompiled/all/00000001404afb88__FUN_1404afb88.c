// Function: FUN_1404afb88
// Addr: 1404afb88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afb88(char *param_1,char param_2)

{
  char in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar1;
  int *unaff_RBX;
  char in_CF;
  
  cVar1 = (char)((ulonglong)param_1 >> 8);
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + param_2 + in_CF;
  *param_1 = *param_1 + in_AL;
  *unaff_RBX = *unaff_RBX - (int)param_1;
  *param_1 = *param_1 + cVar1;
  *param_1 = *param_1 + cVar1;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^
           0x49) =
       *(int *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
               ^ 0x49) + (CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0x49);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

