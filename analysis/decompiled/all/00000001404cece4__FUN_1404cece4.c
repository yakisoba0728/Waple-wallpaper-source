// Function: FUN_1404cece4
// Addr: 1404cece4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ced8a) overlaps instruction at (ram,0x0001404ced87)
    */

uint * FUN_1404cece4(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  code *pcVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  uint *in_RAX;
  char cVar6;
  char *pcVar7;
  char cVar10;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  int *unaff_RSI;
  int *piVar11;
  int *unaff_RDI;
  int *piVar12;
  char unaff_R12B;
  char cVar8;
  undefined6 uVar9;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + cVar10;
  pcVar7 = (char *)((longlong)in_RAX + param_1);
  *pcVar7 = *pcVar7 + (char)param_2;
  param_1 = param_1 + -1;
  if (param_1 != 0 && *pcVar7 != '\0') {
    pcVar1 = (code *)swi(3);
    puVar5 = (uint *)(*pcVar1)();
    return puVar5;
  }
  *param_2 = *param_2 + (char)((ulonglong)in_RAX >> 8);
  *unaff_RSI = *unaff_RSI >> 1;
  *(char *)((longlong)in_RAX + 0x21004a1d) = *(char *)((longlong)in_RAX + 0x21004a1d) + cVar10;
  cVar6 = (char)param_1;
  uVar4 = ((uint)in_RAX | 4) + 0x9640500;
  puVar5 = (uint *)(ulonglong)uVar4;
  *(byte *)((longlong)puVar5 + -0x3affc31d) = *(byte *)((longlong)puVar5 + -0x3affc31d) + cVar10;
  piVar11 = unaff_RSI;
  piVar12 = unaff_RDI;
  if (param_1 != 0) {
    cVar8 = (char)uVar4;
    piVar12 = unaff_RDI + 1;
    piVar11 = unaff_RSI + 1;
    *unaff_RDI = *unaff_RSI;
    *param_4 = *param_4;
    (&stack0x00000000)[(longlong)piVar11 * 8] =
         (&stack0x00000000)[(longlong)piVar11 * 8] + (char)param_2;
    uVar4 = CONCAT31((int3)(CONCAT22((short)(uVar4 >> 0x10),
                                     CONCAT11((char)(uVar4 >> 8) + cVar8,cVar8)) >> 8),
                     cVar8 + '\x06') | 0x5000a74;
    puVar5 = (uint *)((ulonglong)uVar4 ^ 8);
    bVar3 = (byte)puVar5;
    uVar9 = (undefined6)((ulonglong)param_1 >> 0x10);
    cVar8 = (char)((ulonglong)param_1 >> 8) + bVar3;
    pcVar7 = (char *)CONCAT62(uVar9,CONCAT11(cVar8,cVar6));
    uVar2 = (undefined3)(uVar4 >> 8);
    if (pcVar7 == (char *)0x0) {
      *(char *)(unaff_RDI + 0xe) = (char)unaff_RDI[0xe] + cVar6;
      uVar4 = CONCAT31(uVar2,bVar3 | (byte)*puVar5);
      puVar5 = (uint *)(param_2 + 5);
      *puVar5 = *puVar5 | (uint)param_2;
      if (*puVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (pcVar7 != (char *)0x0) {
        (&stack0x00000000)[unaff_RBP * 8] = (&stack0x00000000)[unaff_RBP * 8] + cVar8;
        *pcVar7 = *pcVar7 + unaff_R12B;
        *(byte *)puVar5 = (byte)*puVar5 + bVar3;
        pcVar7 = (char *)CONCAT62(uVar9,CONCAT11(cVar8 + bVar3,cVar6));
        if (pcVar7 == (char *)0x0) {
          cRam00000001804cf1dd = cRam00000001804cf1dd + bVar3;
          return puVar5;
        }
        if (pcVar7 == (char *)0x0) {
          *(byte *)((longlong)puVar5 + -0x35) = *(byte *)((longlong)puVar5 + -0x35) + bVar3;
          *(char *)((longlong)unaff_RSI + -0x31) = *(char *)((longlong)unaff_RSI + -0x31) + unaff_BL
          ;
          *(byte *)((longlong)puVar5 + 0x21004c5e) =
               *(byte *)((longlong)puVar5 + 0x21004c5e) + cVar10;
          uVar4 = (int)puVar5 + 0x54050004;
          puVar5 = (uint *)(ulonglong)uVar4;
          *puVar5 = *puVar5 | uVar4;
          (&stack0x00000000)[(longlong)puVar5] =
               (&stack0x00000000)[(longlong)puVar5] + (char)(uVar4 >> 8);
        }
        else {
          (&stack0x00000000)[unaff_RBP * 8] = (&stack0x00000000)[unaff_RBP * 8] + cVar8 + bVar3;
          *pcVar7 = *pcVar7 + unaff_R12B;
          *(byte *)puVar5 = (byte)*puVar5 + bVar3;
          *(byte *)((longlong)puVar5 + -0x3affc31d) =
               *(byte *)((longlong)puVar5 + -0x3affc31d) + cVar10;
          if (pcVar7 != (char *)0x0) goto code_r0x0001404ced4b;
          UNK_1404cf6e1 = UNK_1404cf6e1 + bVar3;
          puVar5 = (uint *)(ulonglong)CONCAT31(uVar2,bVar3);
        }
        return puVar5;
      }
      cRam0000000000000000 = cRam0000000000000000 + cVar6;
      uVar4 = (int)puVar5 + 0x26003e0;
    }
    uRam00000001a451ed78 = uRam00000001a451ed78 & uVar4;
    return (uint *)(ulonglong)uVar4;
  }
code_r0x0001404ced4b:
  *piVar12 = *piVar11;
  *param_4 = *param_4 + (char)puVar5;
  pcVar7 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0xc);
  *pcVar7 = *pcVar7 + (char)((ulonglong)puVar5 >> 8) + (char)puVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

