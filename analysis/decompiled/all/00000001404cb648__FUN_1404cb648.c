// Function: FUN_1404cb648
// Addr: 1404cb648
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb648(longlong param_1,longlong param_2)

{
  unkbyte10 Var1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  char *pcVar6;
  longlong lVar7;
  unkbyte10 *unaff_RBX;
  uint *unaff_RSI;
  longlong unaff_RDI;
  char in_ZF;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  char *pcVar5;
  
  while( true ) {
    lVar7 = param_1 + -1;
    if (lVar7 != 0 && in_ZF == '\0') {
      pcVar6 = (char *)CONCAT62((int6)((ulonglong)lVar7 >> 0x10),CONCAT11(0x4c,(char)lVar7));
      *pcVar6 = *pcVar6 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = (uint)in_RAX ^ *in_RAX;
    pcVar5 = (char *)(ulonglong)uVar4;
    Var1 = to_bcd(in_ST0);
    *unaff_RBX = Var1;
    pcVar6 = (char *)(unaff_RDI * 9 + 0x210049);
    bVar3 = (byte)uVar4;
    *pcVar6 = *pcVar6 + bVar3;
    *pcVar5 = *pcVar5 + bVar3;
    if (param_1 + -2 == 0 || *pcVar5 == '\0') break;
    Var1 = to_bcd(in_ST1);
    *unaff_RBX = Var1;
    pcVar6 = (char *)(unaff_RDI * 9 + 0x210049);
    *pcVar6 = *pcVar6 + bVar3;
    in_RAX = (uint *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar3 + *pcVar5);
    pcVar6 = (char *)(unaff_RDI + (longlong)in_RAX);
    *pcVar6 = *pcVar6 + (char)(uVar4 >> 8);
    in_ZF = *pcVar6 == '\0';
    param_1 = param_1 + -2;
    in_ST0 = in_ST2;
    in_ST1 = in_ST3;
    in_ST2 = in_ST4;
    in_ST3 = in_ST5;
    in_ST4 = in_ST6;
    in_ST5 = in_ST7;
    in_ST6 = in_ST7;
  }
  uVar2 = *(undefined4 *)pcVar5;
  Var1 = to_bcd(in_ST1);
  *unaff_RBX = Var1;
  pcVar6 = (char *)(unaff_RDI * 9 + 0x9010049);
  *pcVar6 = *pcVar6 + (bVar3 ^ (byte)uVar2);
  *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | (uint)param_2;
  *unaff_RSI = *unaff_RSI & (int)param_1 - 3U;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

