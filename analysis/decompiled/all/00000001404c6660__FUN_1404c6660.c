// Function: FUN_1404c6660
// Addr: 1404c6660
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6660(longlong param_1,longlong param_2)

{
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar1;
  longlong unaff_RBX;
  
  cVar1 = (char)param_2;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + cVar1;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)((ulonglong)param_2 >> 8);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH + cVar1,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH + cVar1,in_AL)) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

