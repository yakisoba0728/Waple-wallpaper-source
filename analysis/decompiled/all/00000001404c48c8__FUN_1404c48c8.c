// Function: FUN_1404c48c8
// Addr: 1404c48c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c48c8(void)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  longlong unaff_RSI;
  
  pcVar1 = (char *)((ulonglong)
                    ((uint)&stack0x00000000 |
                    *(uint *)((CONCAT71(in_register_00000001,in_AL) | 0x70) + 0x19)) + unaff_RSI);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

