// Function: FUN_1404ab544
// Addr: 1404ab544
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab544(byte *param_1,byte param_2,undefined8 param_3,char *param_4)

{
  undefined2 uVar1;
  char in_AL;
  longlong unaff_RSI;
  
  *param_1 = *param_1 & param_2;
  uVar1 = TaskRegister();
  *(undefined2 *)(unaff_RSI + -0x73fff0ef) = uVar1;
  LOCK();
  *param_4 = *param_4 + in_AL;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

