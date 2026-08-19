// Function: FUN_1404cc080
// Addr: 1404cc080
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc080(longlong param_1,undefined8 param_2)

{
  uint in_EAX;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  uRam00000001b451c088 = uRam00000001b451c088 & in_EAX;
  *(byte *)(unaff_RBX + -0x74b7ffcc) = *(byte *)(unaff_RBX + -0x74b7ffcc) & (byte)param_1;
  *unaff_RDI = *unaff_RSI;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)((ulonglong)param_2 >> 8);
  *(byte *)(unaff_RBX + -0x74b7ffcc) = *(byte *)(unaff_RBX + -0x74b7ffcc) & (byte)param_1;
  uRam000000000021004c = unaff_RSI[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

