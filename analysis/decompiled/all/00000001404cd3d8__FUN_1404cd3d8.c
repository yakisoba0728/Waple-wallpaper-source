// Function: FUN_1404cd3d8
// Addr: 1404cd3d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd3d8(char *param_1,longlong param_2,char param_3)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  byte *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  pcVar1 = (char *)(unaff_RBX + param_2 * 8);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(char *)(param_2 + 1) = *(char *)(param_2 + 1) + param_3;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *param_1 = *param_1 - (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

