// Function: FUN_1404abda0
// Addr: 1404abda0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abda0(void)

{
  byte bVar1;
  char *in_RAX;
  int *piVar2;
  char *pcVar3;
  ulonglong unaff_RSI;
  
  bVar1 = (char)in_RAX + *in_RAX;
  piVar2 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1 - 0x3c);
  *piVar2 = *piVar2 + (int)piVar2 + (uint)(0x3b < bVar1);
  pcVar3 = (char *)(unaff_RSI & 0xffffffff);
  verr();
  *pcVar3 = *pcVar3 + (char)pcVar3;
  verr();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

