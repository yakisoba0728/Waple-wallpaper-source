// Function: FUN_1404bdf34
// Addr: 1404bdf34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdf34(char *param_1,char *param_2)

{
  byte bVar1;
  undefined4 in_EAX;
  char *unaff_RSI;
  longlong unaff_RDI;
  
  bVar1 = (byte)((uint)in_EAX >> 8);
  *(byte *)(unaff_RDI + -0x58d7ffdb) = *(byte *)(unaff_RDI + -0x58d7ffdb) & bVar1;
  bVar1 = bVar1 & 0x94;
  *param_1 = *param_1 + bVar1;
  *param_2 = *param_2 + bVar1;
  in(4);
  *unaff_RSI = *unaff_RSI + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

