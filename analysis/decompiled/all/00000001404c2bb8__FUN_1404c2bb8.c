// Function: FUN_1404c2bb8
// Addr: 1404c2bb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2bb8(int param_1,longlong param_2)

{
  int *piVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  
  piVar1 = (int *)(unaff_RSI + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *piVar1 = *piVar1 + param_1;
  *(char *)(param_2 * 3) = *(char *)(param_2 * 3) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

