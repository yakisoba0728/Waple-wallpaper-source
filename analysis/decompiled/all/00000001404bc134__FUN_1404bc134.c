// Function: FUN_1404bc134
// Addr: 1404bc134
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc134(undefined8 param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte in_AL;
  byte bVar1;
  undefined7 in_register_00000001;
  char unaff_SPL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(char *)(unaff_RBP + 0x22) = *(char *)(unaff_RBP + 0x22) + (char)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RSI + 0x6d) = *(char *)(unaff_RSI + 0x6d) + (char)param_1;
  bVar1 = in_AL & *(byte *)CONCAT71(in_register_00000001,in_AL);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 | bVar1;
  *(char *)CONCAT71(in_register_00000001,bVar1) =
       *(char *)CONCAT71(in_register_00000001,bVar1) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

