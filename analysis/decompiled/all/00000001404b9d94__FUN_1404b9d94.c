// Function: FUN_1404b9d94
// Addr: 1404b9d94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9d94(longlong param_1,longlong param_2)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar1;
  longlong unaff_RBX;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)param_2;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH + in_AL,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH + in_AL,in_AL)) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

