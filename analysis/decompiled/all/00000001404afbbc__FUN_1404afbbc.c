// Function: FUN_1404afbbc
// Addr: 1404afbbc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afbbc(char *param_1,char *param_2)

{
  char *pcVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  int unaff_ESP;
  undefined4 unaff_00000024;
  byte in_CF;
  float10 in_ST0;
  
  while( true ) {
    uVar3 = ((int)param_2 - unaff_ESP) - (uint)in_CF;
    param_2 = (char *)(ulonglong)uVar3;
    *param_2 = *param_2 + (char)param_1;
    uVar2 = in_EAX + 0x37741934;
    *(short *)((ulonglong)uVar2 * 2) = (short)ROUND(in_ST0);
    if (0xcffff5cb < in_EAX + 0x7740f00U) break;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + -0xc);
    pcVar1 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + (longlong)param_2 * 2);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
    uVar2 = uVar2 | *(uint *)(ulonglong)uVar2;
    in_CF = 0;
    in_EAX = CONCAT31((int3)(CONCAT22((short)(uVar2 >> 0x10),
                                      CONCAT11((byte)(uVar2 >> 8) & (byte)(uVar3 >> 8),(char)uVar2))
                            >> 8),(char)uVar2);
  }
  *param_1 = *param_1 + (char)unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

