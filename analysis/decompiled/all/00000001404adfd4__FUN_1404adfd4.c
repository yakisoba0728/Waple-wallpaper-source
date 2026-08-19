// Function: FUN_1404adfd4
// Addr: 1404adfd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404adfd4(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int in_EAX;
  uint uVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined6 uVar13;
  int unaff_EBX;
  int unaff_ESP;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  int *unaff_RSI;
  longlong unaff_RDI;
  bool bVar14;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar11 = (undefined1)param_2;
  bVar12 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(param_2 + 6);
  uVar7 = in_EAX + 0x68150006U + *(int *)(ulonglong)(in_EAX + 0x68150006U) | 0x5000b54;
  pbVar10 = (byte *)((ulonglong)uVar7 ^ 10);
  pbVar9 = pbVar10 + -0x5e;
  bVar14 = CARRY1(*pbVar9,bVar12);
  *pbVar9 = *pbVar9 + bVar12;
  bVar6 = (byte)pbVar10;
  bVar4 = bVar6 + *pbVar10;
  uVar2 = (undefined3)(uVar7 >> 8);
  cVar3 = bVar4 + bVar14;
  if ((SCARRY1(bVar6,*pbVar10) != SCARRY1(bVar4,bVar14)) == cVar3 < '\0') {
    pbVar9 = (byte *)(unaff_RDI + CONCAT62(uVar13,CONCAT11(bVar12,uVar11)));
    bVar4 = (byte)(uVar7 >> 8);
    *pbVar9 = *pbVar9 | bVar4;
    puVar1 = (undefined1 *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x6969ffee);
    *puVar1 = *puVar1;
    puVar8 = (uint *)(ulonglong)CONCAT31(uVar2,cVar3 + bVar4);
  }
  else {
    bVar4 = cVar3 + *(char *)(ulonglong)CONCAT31(uVar2,cVar3) +
            (CARRY1(bVar6,*pbVar10) || CARRY1(bVar4,bVar14));
    pbVar9 = (byte *)(ulonglong)CONCAT31(uVar2,bVar4);
    uRam00000001b84fdffc = uRam00000001b84fdffc & CONCAT31(uVar2,bVar4);
    cVar3 = bVar4 + *pbVar9;
    puVar8 = (uint *)(ulonglong)CONCAT31(uVar2,cVar3);
    if (SCARRY1(bVar4,*pbVar9) != cVar3 < '\0') {
      bVar5 = cVar3 + (char)*puVar8 + CARRY1(bVar4,*pbVar9);
      pbVar9 = (byte *)(ulonglong)CONCAT31(uVar2,bVar5);
      out(CONCAT11(bVar12,uVar11),bVar5);
      bVar4 = *pbVar9;
      bVar6 = *pbVar9;
      bRam0021004adf080012 = bVar5;
      *pbVar9 = *pbVar9 + bVar5;
      if (SCARRY1(bVar6,bVar5) != (char)*pbVar9 < '\0') {
        bVar6 = bVar5 + *pbVar9 + CARRY1(bVar4,bVar5);
        pbVar9 = (byte *)(ulonglong)CONCAT31(uVar2,bVar6);
        out(CONCAT11(bVar12,uVar11),bVar6);
        bVar14 = CARRY1(*pbVar9,bVar6);
        bVar4 = *pbVar9;
        bRam0021004adf080012 = bVar6;
        *pbVar9 = *pbVar9 + bVar6;
        if (SCARRY1(bVar4,bVar6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar4 = bVar6 + *pbVar9;
        cVar3 = bVar4 + bVar14;
        if ((SCARRY1(bVar6,*pbVar9) != SCARRY1(bVar4,bVar14)) == cVar3 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar7 = CONCAT31(uVar2,cVar3 + *(char *)(ulonglong)CONCAT31(uVar2,cVar3) +
                               (CARRY1(bVar6,*pbVar9) || CARRY1(bVar4,bVar14)));
        *unaff_RSI = *unaff_RSI + unaff_EBX;
        *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 | uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x0001404adfb0;
    }
  }
  *puVar8 = *puVar8 & (uint)puVar8;
  *(char *)puVar8 = (char)*puVar8 + (char)puVar8;
  puVar1 = (undefined1 *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x6969ffee);
  *puVar1 = *puVar1;
  pbVar9 = (byte *)CONCAT71((int7)((ulonglong)puVar8 >> 8),
                            (char)puVar8 + (char)((ulonglong)puVar8 >> 8));
code_r0x0001404adfb0:
  *unaff_RSI = *unaff_RSI + unaff_ESP;
  *(byte *)unaff_RSI =
       (char)*unaff_RSI +
       ((byte)((ulonglong)pbVar9 >> 8) | (byte)((uint)*(undefined4 *)pbVar9 >> 8));
  *unaff_RSI = *unaff_RSI + unaff_EBP;
  *(char *)CONCAT62(uVar13,CONCAT11(bVar12,uVar11)) =
       *(char *)CONCAT62(uVar13,CONCAT11(bVar12,uVar11)) + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

