// Function: FUN_1404cd5d4
// Addr: 1404cd5d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd5d4(undefined8 param_1,undefined2 param_2,char *param_3,char *param_4)

{
  undefined4 in_EAX;
  longlong unaff_RSI;
  
  *(undefined1 *)(unaff_RSI + 0x41) = *(undefined1 *)(unaff_RSI + 0x41);
  out(param_2,in_EAX);
  *param_3 = *param_3 + '\b';
  *param_4 = *param_4 + '\x10';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

