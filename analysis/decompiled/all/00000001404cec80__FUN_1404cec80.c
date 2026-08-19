// Function: FUN_1404cec80
// Addr: 1404cec80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ced8a) overlaps instruction at (ram,0x0001404ced87)
    */

uint * FUN_1404cec80(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  code *pcVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char *in_RAX;
  uint *puVar6;
  longlong lVar7;
  char *pcVar8;
  byte bVar11;
  char cVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *pbVar15;
  undefined4 *unaff_RDI;
  undefined4 *puVar16;
  char unaff_R12B;
  char cVar9;
  undefined6 uVar10;
  
  uVar14 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar13 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar12 = (char)((ulonglong)param_2 >> 8);
  bVar11 = (byte)param_1;
  *unaff_RSI = *unaff_RSI >> (bVar11 & 0x1f);
  pcVar8 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x92004c + unaff_RBP * 8)
  ;
  *pcVar8 = *pcVar8 + unaff_BH;
  cVar3 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar3;
  lVar7 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                   CONCAT11((char)((ulonglong)param_1 >> 8) - cVar3,bVar11));
  bVar11 = (byte)param_2 & bVar11;
  in_RAX[0x21004a1d] = in_RAX[0x21004a1d] + cVar12;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + cVar3;
  *(char *)(lVar7 * 2) = *(char *)(lVar7 * 2) + cVar12;
  pcVar8 = in_RAX + lVar7;
  *pcVar8 = *pcVar8 + bVar11;
  lVar7 = lVar7 + -1;
  if (lVar7 != 0 && *pcVar8 != '\0') {
    pcVar1 = (code *)swi(3);
    puVar6 = (uint *)(*pcVar1)();
    return puVar6;
  }
  *(char *)CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(cVar12,bVar11))) =
       *(char *)CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(cVar12,bVar11))) +
       (char)((ulonglong)in_RAX >> 8);
  *(int *)unaff_RSI = *(int *)unaff_RSI >> 1;
  in_RAX[0x21004a1d] = in_RAX[0x21004a1d] + cVar12;
  cVar3 = (char)lVar7;
  uVar5 = ((uint)in_RAX | 4) + 0x9640500;
  puVar6 = (uint *)(ulonglong)uVar5;
  *(byte *)((longlong)puVar6 + -0x3affc31d) = *(byte *)((longlong)puVar6 + -0x3affc31d) + cVar12;
  pbVar15 = unaff_RSI;
  puVar16 = unaff_RDI;
  if (lVar7 != 0) {
    cVar9 = (char)uVar5;
    puVar16 = unaff_RDI + 1;
    pbVar15 = unaff_RSI + 4;
    *unaff_RDI = *(undefined4 *)unaff_RSI;
    *param_4 = *param_4;
    (&stack0x00000000)[(longlong)pbVar15 * 8] = (&stack0x00000000)[(longlong)pbVar15 * 8] + bVar11;
    uVar5 = CONCAT31((int3)(CONCAT22((short)(uVar5 >> 0x10),
                                     CONCAT11((char)(uVar5 >> 8) + cVar9,cVar9)) >> 8),
                     cVar9 + '\x06') | 0x5000a74;
    puVar6 = (uint *)((ulonglong)uVar5 ^ 8);
    bVar4 = (byte)puVar6;
    uVar10 = (undefined6)((ulonglong)lVar7 >> 0x10);
    cVar9 = (char)((ulonglong)lVar7 >> 8) + bVar4;
    pcVar8 = (char *)CONCAT62(uVar10,CONCAT11(cVar9,cVar3));
    uVar2 = (undefined3)(uVar5 >> 8);
    if (pcVar8 == (char *)0x0) {
      *(char *)(unaff_RDI + 0xe) = *(char *)(unaff_RDI + 0xe) + cVar3;
      uVar5 = CONCAT31(uVar2,bVar4 | (byte)*puVar6);
      puVar6 = (uint *)(CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(cVar12,bVar11))) + 5);
      *puVar6 = *puVar6 | CONCAT22(uVar13,CONCAT11(cVar12,bVar11));
      if (*puVar6 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (pcVar8 != (char *)0x0) {
        (&stack0x00000000)[unaff_RBP * 8] = (&stack0x00000000)[unaff_RBP * 8] + cVar9;
        *pcVar8 = *pcVar8 + unaff_R12B;
        *(byte *)puVar6 = (byte)*puVar6 + bVar4;
        pcVar8 = (char *)CONCAT62(uVar10,CONCAT11(cVar9 + bVar4,cVar3));
        if (pcVar8 == (char *)0x0) {
          cRam00000001804cf1dd = cRam00000001804cf1dd + bVar4;
          return puVar6;
        }
        if (pcVar8 == (char *)0x0) {
          *(byte *)((longlong)puVar6 + -0x35) = *(byte *)((longlong)puVar6 + -0x35) + bVar4;
          unaff_RSI[-0x31] = unaff_RSI[-0x31] + unaff_BL;
          *(byte *)((longlong)puVar6 + 0x21004c5e) =
               *(byte *)((longlong)puVar6 + 0x21004c5e) + cVar12;
          uVar5 = (int)puVar6 + 0x54050004;
          puVar6 = (uint *)(ulonglong)uVar5;
          *puVar6 = *puVar6 | uVar5;
          (&stack0x00000000)[(longlong)puVar6] =
               (&stack0x00000000)[(longlong)puVar6] + (char)(uVar5 >> 8);
        }
        else {
          (&stack0x00000000)[unaff_RBP * 8] = (&stack0x00000000)[unaff_RBP * 8] + cVar9 + bVar4;
          *pcVar8 = *pcVar8 + unaff_R12B;
          *(byte *)puVar6 = (byte)*puVar6 + bVar4;
          *(byte *)((longlong)puVar6 + -0x3affc31d) =
               *(byte *)((longlong)puVar6 + -0x3affc31d) + cVar12;
          if (pcVar8 != (char *)0x0) goto code_r0x0001404ced4b;
          UNK_1404cf6e1 = UNK_1404cf6e1 + bVar4;
          puVar6 = (uint *)(ulonglong)CONCAT31(uVar2,bVar4);
        }
        return puVar6;
      }
      cRam0000000000000000 = cRam0000000000000000 + cVar3;
      uVar5 = (int)puVar6 + 0x26003e0;
    }
    uRam00000001a451ed78 = uRam00000001a451ed78 & uVar5;
    return (uint *)(ulonglong)uVar5;
  }
code_r0x0001404ced4b:
  *puVar16 = *(undefined4 *)pbVar15;
  *param_4 = *param_4 + (char)puVar6;
  pcVar8 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0xc);
  *pcVar8 = *pcVar8 + (char)((ulonglong)puVar6 >> 8) + (char)puVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

