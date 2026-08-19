// Function: FUN_1404cb638
// Addr: 1404cb638
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb638(longlong param_1,longlong param_2)

{
  unkbyte10 Var1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  char cVar6;
  char *in_RAX;
  uint *puVar5;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  unkbyte10 *unaff_RBX;
  uint *unaff_RSI;
  longlong unaff_RDI;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 Var10;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  
  do {
    Var10 = in_ST2;
    lVar8 = param_1;
    Var1 = to_bcd(in_ST0);
    *unaff_RBX = Var1;
    pcVar7 = (char *)(unaff_RDI * 9 + 0x210049);
    *pcVar7 = *pcVar7 + (char)in_RAX;
    puVar5 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + *in_RAX);
    pcVar7 = (char *)(unaff_RDI + (longlong)puVar5);
    cVar6 = (char)((ulonglong)in_RAX >> 8);
    *pcVar7 = *pcVar7 + cVar6;
    lVar9 = lVar8 + -1;
    if (lVar9 != 0 && *pcVar7 != '\0') {
      pcVar7 = (char *)CONCAT62((int6)((ulonglong)lVar9 >> 0x10),CONCAT11(0x4c,(char)lVar9));
      *pcVar7 = *pcVar7 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = (uint)puVar5 ^ *puVar5;
    in_RAX = (char *)(ulonglong)uVar4;
    Var1 = to_bcd(in_ST1);
    *unaff_RBX = Var1;
    pcVar7 = (char *)(unaff_RDI * 9 + 0x210049);
    bVar3 = (byte)uVar4;
    *pcVar7 = *pcVar7 + bVar3;
    *in_RAX = *in_RAX + bVar3;
    param_1 = lVar8 + -2;
    in_ST0 = Var10;
    in_ST1 = in_ST3;
    in_ST2 = in_ST4;
    in_ST3 = in_ST5;
    in_ST4 = in_ST6;
    in_ST5 = in_ST7;
    in_ST6 = in_ST7;
  } while (lVar8 + -2 != 0 && *in_RAX != '\0');
  uVar2 = *(undefined4 *)in_RAX;
  Var1 = to_bcd(Var10);
  *unaff_RBX = Var1;
  pcVar7 = (char *)(unaff_RDI * 9 + 0x9010049);
  *pcVar7 = *pcVar7 + (bVar3 ^ (byte)uVar2);
  *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | (uint)param_2;
  *unaff_RSI = *unaff_RSI & (int)lVar8 - 3U;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

