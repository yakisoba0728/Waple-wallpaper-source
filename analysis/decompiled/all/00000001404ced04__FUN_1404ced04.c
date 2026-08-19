// Function: FUN_1404ced04
// Addr: 1404ced04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ced8a) overlaps instruction at (ram,0x0001404ced87)
    */

uint * FUN_1404ced04(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  char cVar6;
  undefined6 uVar7;
  char *pcVar5;
  char cVar8;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *puVar9;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  uVar2 = in_EAX + 0xb0000964;
  puVar3 = (uint *)(ulonglong)uVar2;
  bVar1 = (byte)uVar2;
  cVar4 = (char)param_1;
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  puVar9 = unaff_RSI;
  if (param_1 == 0) {
    pcVar5 = (char *)((ulonglong)bVar1 << 8);
  }
  else {
    cVar6 = (char)((ulonglong)param_1 >> 8) + bVar1;
    if (CONCAT62(uVar7,CONCAT11(cVar6,cVar4)) == 0) goto code_r0x0001404ced4b;
    *unaff_RDI = *unaff_RSI;
    *param_4 = *param_4;
    (&stack0x00000000)[(longlong)(unaff_RSI + 1) * 8] =
         (&stack0x00000000)[(longlong)(unaff_RSI + 1) * 8] + (char)param_2;
    uVar2 = CONCAT31((int3)(CONCAT22((short)(uVar2 >> 0x10),
                                     CONCAT11((char)(uVar2 >> 8) + bVar1,bVar1)) >> 8),bVar1 + 6) |
            0x5000a74;
    puVar3 = (uint *)((ulonglong)uVar2 ^ 8);
    bVar1 = (byte)puVar3;
    cVar6 = cVar6 + bVar1;
    pcVar5 = (char *)CONCAT62(uVar7,CONCAT11(cVar6,cVar4));
    if (pcVar5 == (char *)0x0) {
      *(char *)(unaff_RDI + 0xe) = *(char *)(unaff_RDI + 0xe) + cVar4;
      uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1 | (byte)*puVar3);
      puVar3 = (uint *)(param_2 + 5);
      *puVar3 = *puVar3 | (uint)param_2;
      if (*puVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
code_r0x0001404ced70:
      uRam00000001a451ed78 = uRam00000001a451ed78 & uVar2;
      return (uint *)(ulonglong)uVar2;
    }
    if (pcVar5 == (char *)0x0) {
      cRam0000000000000000 = cRam0000000000000000 + cVar4;
      uVar2 = (int)puVar3 + 0x26003e0;
      goto code_r0x0001404ced70;
    }
    (&stack0x00000000)[unaff_RBP * 8] = (&stack0x00000000)[unaff_RBP * 8] + cVar6;
    *pcVar5 = *pcVar5 + unaff_R12B;
    *(byte *)puVar3 = (byte)*puVar3 + bVar1;
    pcVar5 = (char *)CONCAT62(uVar7,CONCAT11(cVar6 + bVar1,cVar4));
    if (pcVar5 == (char *)0x0) {
      cRam00000001804cf1dd = cRam00000001804cf1dd + bVar1;
      return puVar3;
    }
    puVar9 = unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 1;
    if (pcVar5 == (char *)0x0) {
      *(byte *)((longlong)puVar3 + -0x35) = *(byte *)((longlong)puVar3 + -0x35) + bVar1;
      *(char *)((longlong)unaff_RSI + -0x31) = *(char *)((longlong)unaff_RSI + -0x31) + unaff_BL;
      *(byte *)((longlong)puVar3 + 0x21004c5e) = *(byte *)((longlong)puVar3 + 0x21004c5e) + cVar8;
      uVar2 = (int)puVar3 + 0x54050004;
      puVar3 = (uint *)(ulonglong)uVar2;
      *puVar3 = *puVar3 | uVar2;
      (&stack0x00000000)[(longlong)puVar3] =
           (&stack0x00000000)[(longlong)puVar3] + (char)(uVar2 >> 8);
      return puVar3;
    }
  }
  (&stack0x00000000)[unaff_RBP * 8] =
       (&stack0x00000000)[unaff_RBP * 8] + (char)((ulonglong)pcVar5 >> 8);
  *pcVar5 = *pcVar5 + unaff_R12B;
  *(byte *)puVar3 = (byte)*puVar3 + (char)puVar3;
  *(byte *)((longlong)puVar3 + -0x3affc31d) = *(byte *)((longlong)puVar3 + -0x3affc31d) + cVar8;
  if (pcVar5 == (char *)0x0) {
    UNK_1404cf6e1 = UNK_1404cf6e1 + (char)puVar3;
    return puVar3;
  }
code_r0x0001404ced4b:
  *unaff_RDI = *puVar9;
  *param_4 = *param_4 + (char)puVar3;
  pcVar5 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0xc);
  *pcVar5 = *pcVar5 + (char)((ulonglong)puVar3 >> 8) + (char)puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

