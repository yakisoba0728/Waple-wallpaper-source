// Function: FUN_1404d7c78
// Addr: 1404d7c78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7c78(char *param_1,longlong param_2)

{
  undefined3 uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint in_EAX;
  uint uVar6;
  uint uVar7;
  char *pcVar9;
  char cVar10;
  byte *pbVar11;
  byte bVar12;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int *piVar13;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  bool bVar14;
  uint *puVar8;
  
  uVar6 = in_EAX + 0x70000454;
  uVar1 = (undefined3)(uVar6 >> 8);
  cVar3 = (char)(uVar6 >> 8);
  if ((POPCOUNT(uVar6 & 0xff) & 1U) == 0) {
    pbVar11 = (byte *)(param_1 + -1);
    if (pbVar11 == (byte *)0x0 || uVar6 == 0) {
      bRam0000000152bd907d = bRam0000000152bd907d << 1 | 0x8ffffbab < in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar4 = (char)uVar6 + 0x70;
    *pbVar11 = *pbVar11 ^ bVar4;
    uVar6 = (int)pbVar11 + *(int *)(ulonglong)CONCAT31(uVar1,bVar4);
    bVar12 = (byte)param_2;
    bVar14 = CARRY1(*(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)),bVar12);
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar12;
    pbVar11 = (byte *)(in_FS_OFFSET + (longlong)(ulonglong)CONCAT31(uVar1,bVar4));
    bVar12 = bVar4 + *pbVar11;
    bVar5 = bVar12 + bVar14;
    pbVar11 = (byte *)(ulonglong)
                      ((int)param_2 + *(int *)((ulonglong)uVar6 + param_2) +
                      (uint)(CARRY1(bVar4,*pbVar11) || CARRY1(bVar12,bVar14)));
    *pbVar11 = *pbVar11 | bVar5;
    *(char *)(ulonglong)CONCAT31(uVar1,bVar5) =
         *(char *)(ulonglong)CONCAT31(uVar1,bVar5) + (char)uVar6;
    pcVar9 = (char *)((ulonglong)CONCAT31(uVar1,bVar5) ^ 0x10);
    *pcVar9 = *pcVar9 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + 0x7a) = *(char *)(unaff_RDI + 0x7a) + unaff_BH;
  pcVar9 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x21004d + unaff_RDI * 2)
  ;
  cVar10 = (char)param_1;
  *pcVar9 = *pcVar9 + cVar10;
  cVar2 = (char)uVar6 + *(char *)(ulonglong)uVar6;
  uVar7 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11(cVar3 + cVar2,cVar2)) + 0x367a7000;
  puVar8 = (uint *)(ulonglong)uVar7;
  *(char *)(unaff_RDI + 0x7a) = *(char *)(unaff_RDI + 0x7a) + unaff_BH;
  pcVar9 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x21004d + unaff_RDI * 2)
  ;
  *pcVar9 = *pcVar9 + cVar10;
  uVar6 = *puVar8;
  cVar3 = (char)uVar7;
  *(char *)puVar8 = (char)*puVar8 + cVar3;
  if (!SCARRY1((char)uVar6,cVar3)) {
    *(char *)(unaff_RDI + 0x7a) = *(char *)(unaff_RDI + 0x7a) + unaff_BH;
    pcVar9 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x1f01004d +
                     unaff_RDI * 2);
    *pcVar9 = *pcVar9 + cVar10;
    *puVar8 = *puVar8 | uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar13 = (int *)(ulonglong)
                   ((uint)unaff_RDI &
                   *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x61c80038));
  *param_1 = *param_1 + unaff_R12B;
  *(char *)((longlong)puVar8 * 2) = *(char *)((longlong)puVar8 * 2) + cVar3;
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *(char *)((longlong)piVar13 + (longlong)puVar8) =
       *(char *)((longlong)piVar13 + (longlong)puVar8) + cVar2;
  *(char *)(unaff_RSI + (longlong)puVar8) = *(char *)(unaff_RSI + (longlong)puVar8) + cVar2;
  *piVar13 = *piVar13 + CONCAT31((int3)(uVar7 >> 8),cVar3 + cVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

