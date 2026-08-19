// Function: FUN_1404cdf94
// Addr: 1404cdf94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ce028) overlaps instruction at (ram,0x0001404ce027)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ce01d) */
/* WARNING: Removing unreachable block (ram,0x0001404ce026) */
/* WARNING: Removing unreachable block (ram,0x0001404ce021) */
/* WARNING: Removing unreachable block (ram,0x0001404ce023) */
/* WARNING: Removing unreachable block (ram,0x0001404ce027) */

void FUN_1404cdf94(char *param_1,undefined8 param_2,char *param_3)

{
  byte *pbVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  int in_EAX;
  uint uVar5;
  int *piVar7;
  byte bVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  byte *unaff_RSI;
  byte *unaff_RDI;
  char in_R11B;
  char unaff_R12B;
  char unaff_R15B;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  char *pcVar6;
  
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  uVar5 = in_EAX + 0x60000634;
  pcVar6 = (char *)(ulonglong)uVar5;
  if (*param_3 < (char)(byte)uVar5) {
    *param_1 = *param_1;
    cVar3 = (char)unaff_RDI;
    *unaff_RSI = *unaff_RSI + cVar3;
    *unaff_RDI = *unaff_RDI + cVar3;
    if (*unaff_RDI != 0) {
      *unaff_RDI = *unaff_RDI + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_RDI[0x4b] = unaff_RDI[0x4b] + (char)((ulonglong)unaff_RDI >> 8);
    if (cVar3 <= (char)*unaff_RDI) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1 + (char)unaff_EBX;
    uVar2 = (undefined3)(uVar5 >> 8);
    bVar4 = (byte)uVar5 | *(byte *)((longlong)pcVar6 * 2);
    *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(bVar9 | unaff_RSI[CONCAT31(uVar2,bVar4)],bVar8
                                                     ))) =
         *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(bVar9 | unaff_RSI[CONCAT31(uVar2,bVar4)],
                                                           bVar8))) + (char)param_1;
    bVar4 = bVar4 ^ *unaff_RSI;
    uVar5 = CONCAT31(uVar2,bVar4);
    piVar7 = (int *)(ulonglong)uVar5;
    bVar9 = 0x2b;
    unaff_RDI[CONCAT44(unaff_0000001c,unaff_EBX) * 8] =
         unaff_RDI[CONCAT44(unaff_0000001c,unaff_EBX) * 8] + bVar4;
    *(char *)((longlong)piVar7 + 9) = *(char *)((longlong)piVar7 + 9) + unaff_R12B;
    *(short *)((longlong)piVar7 * 2 + 2) = (short)in_ST0;
    *param_1 = *param_1 + in_R11B;
    param_1 = (char *)(ulonglong)
                      ((uint)param_1 &
                      *(uint *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(0x2b,bVar8))));
    pbVar1 = (byte *)(param_1 + (longlong)piVar7);
    bVar4 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar8;
    *piVar7 = *piVar7 + uVar5 + (uint)CARRY1(bVar4,bVar8);
    pcVar6 = (char *)(ulonglong)(uVar5 | 0x9e00bf0);
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
  }
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar3 = *pcVar6;
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  *pcVar6 = *pcVar6 + bVar9 + cVar3;
  *(short *)((longlong)pcVar6 * 2 + 0x7a) = (short)in_ST0;
  *pcVar6 = *pcVar6 + (char)pcVar6;
  *pcVar6 = *pcVar6 + (char)((ulonglong)param_1 >> 8);
  *unaff_RDI = *unaff_RDI + unaff_R15B;
  *(short *)((longlong)pcVar6 * 2 + 2) = (short)in_ST1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

