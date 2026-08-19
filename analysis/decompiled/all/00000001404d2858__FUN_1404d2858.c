// Function: FUN_1404d2858
// Addr: 1404d2858
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d2859) overlaps instruction at (ram,0x0001404d2858)
    */

void FUN_1404d2858(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  unkbyte10 *pVar3;
  longlong unaff_RBX;
  char unaff_SPL;
  char in_ZF;
  unkbyte10 in_ST0;
  char *pcVar2;
  
  pVar3 = (unkbyte10 *)(param_1 + -1);
  if (pVar3 != (unkbyte10 *)0x0 && in_ZF == '\0') {
    uVar1 = in(param_2);
    pcVar2 = (char *)(ulonglong)uVar1;
    *param_4 = *param_4 + unaff_SPL;
    *pcVar2 = *pcVar2 + (char)uVar1;
    *pcVar2 = *pcVar2 + (char)((ushort)param_2 >> 8);
    *pVar3 = in_ST0;
    pcVar2 = (char *)(unaff_RBX * 9 + 0x39);
    *pcVar2 = *pcVar2 + (char)pVar3;
    in(param_2);
  }
  *param_4 = *param_4 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

