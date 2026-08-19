// Function: FUN_1404cfba4
// Addr: 1404cfba4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cfc19) overlaps instruction at (ram,0x0001404cfc18)
    */

void FUN_1404cfba4(int *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int in_EAX;
  int iVar5;
  int *piVar7;
  char *pcVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  byte bVar13;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  byte *unaff_RSI;
  longlong unaff_RDI;
  char in_R11B;
  byte unaff_R12B;
  char unaff_R13B;
  byte in_CF;
  uint *puVar6;
  byte *pbVar12;
  
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  iVar5 = in_EAX + *param_1 + (uint)in_CF;
  cVar3 = (char)iVar5 + *unaff_RSI;
  puVar6 = (uint *)(ulonglong)CONCAT31((int3)((uint)iVar5 >> 8),cVar3);
  lVar11 = (longlong)param_1 + -1;
  if (lVar11 == 0 || cVar3 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = (byte)((uint)iVar5 >> 8);
  *(byte *)puVar6 = (byte)*puVar6 ^ bVar4;
  *unaff_RSI = *unaff_RSI >> 1;
  *(byte *)((longlong)puVar6 + 0x12) = *(byte *)((longlong)puVar6 + 0x12) + bVar13;
  *(byte *)puVar6 = (byte)*puVar6 + cVar3;
  *puVar6 = *puVar6 & (uint)param_2;
  cVar2 = bVar4 + bVar13;
  uVar10 = CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11(cVar2,cVar3));
  pcVar8 = (char *)(ulonglong)uVar10;
  cVar9 = (char)lVar11 + *pcVar8;
  pbVar12 = (byte *)CONCAT71((int7)((ulonglong)lVar11 >> 8),cVar9);
  if (cVar9 == '\0') {
    if (SCARRY1((char)lVar11,*pcVar8)) {
      pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4c + unaff_RDI * 8)
      ;
      *pcVar1 = *pcVar1 + unaff_BL;
      param_2[0x12] = param_2[0x12] + cVar2;
      *pcVar8 = *pcVar8 + cVar3;
      *(char *)(unaff_RBP + -5) = *(char *)(unaff_RBP + -5) - cVar2;
      pcVar8 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4c + unaff_RDI * 8)
      ;
      *pcVar8 = *pcVar8 + unaff_R13B;
      *param_2 = *param_2 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    cVar9 = (char)((char)param_2 + pcVar8[-0x7c]) >> 1;
    bVar4 = *pbVar12;
    *pbVar12 = *pbVar12 + unaff_R12B;
    cVar3 = (cVar3 - *(char *)((longlong)pcVar8 * 2)) - CARRY1(bVar4,unaff_R12B);
    piVar7 = (int *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),cVar3);
    *piVar7 = *piVar7 + (int)pbVar12;
    *pbVar12 = *pbVar12 + unaff_R12B;
    *(char *)piVar7 = (char)*piVar7 + cVar3;
    unaff_RSI[-0x7affc37b] = unaff_RSI[-0x7affc37b] + cVar2;
    pcVar8 = (char *)func_0x0001614d48f3();
    bVar4 = (byte)pcVar8;
    *pcVar8 = *pcVar8 + bVar4;
    pcVar8[-0x7c] = pcVar8[-0x7c] + cVar9;
    *pbVar12 = *pbVar12 + in_R11B;
    uVar10 = (int)pbVar12 - *(int *)pbVar12;
    *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + unaff_BL;
    *(uint *)(unaff_RSI + 4) = *(int *)(unaff_RSI + 4) + uVar10;
    pbVar12 = (byte *)((CONCAT62((int6)((ulonglong)pcVar8 >> 0x10),
                                 CONCAT11((byte)((ulonglong)pcVar8 >> 8) | bVar4 ^ 0x55 | 0xf0,bVar4
                                         )) ^ 0x55 | 0xf0) + 7);
    *pbVar12 = *pbVar12 | bVar13;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

