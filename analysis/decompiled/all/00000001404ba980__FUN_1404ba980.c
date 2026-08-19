// Function: FUN_1404ba980
// Addr: 1404ba980
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ba981) overlaps instruction at (ram,0x0001404ba980)
    */

void FUN_1404ba980(char *param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  byte *in_RAX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  while( true ) {
    in_RAX[0x21004b] = in_RAX[0x21004b] & (byte)((ulonglong)param_1 >> 8);
    bVar2 = (byte)in_RAX;
    *in_RAX = *in_RAX + bVar2;
    *(byte **)((longlong)register0x00000020 + -8) = in_RAX;
    *in_RAX = *in_RAX & bVar2;
    if ((POPCOUNT(*in_RAX) & 1U) == 0) break;
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    *in_RAX = *in_RAX + bVar2;
    in_RAX[-0xd] = in_RAX[-0xd] + param_2;
    *in_RAX = *in_RAX & bVar2;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
  }
  *in_RAX = *in_RAX & bVar2;
  *param_4 = *param_4 + (char)(undefined1 *)((longlong)register0x00000020 + -8);
  pcVar1 = (char *)(unaff_RDI + 0x20 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + param_2;
  pcVar1 = (char *)((ulonglong)
                    ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2 + 0xa8) + 0x4fbb002) +
                    0x1f210049 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

