// Function: FUN_1404bc378
// Addr: 1404bc378
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bc3b3) overlaps instruction at (ram,0x0001404bc3b1)
    */

void FUN_1404bc378(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined8 in_RAX;
  undefined7 uVar7;
  char *pcVar6;
  char cVar8;
  byte bVar9;
  undefined6 uVar10;
  char unaff_BL;
  undefined8 *puVar11;
  undefined8 *unaff_RBP;
  longlong unaff_RDI;
  undefined1 auStack_f3 [227];
  undefined8 uStack_10;
  uint *puVar5;
  
  uVar10 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar8 = (char)param_1;
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (char)in_RAX + 0x30;
  puVar5 = (uint *)CONCAT71(uVar7,bVar2);
  *(byte *)puVar5 = (char)*puVar5 + bVar2;
  iRam000000013878c38a = iRam000000013878c38a + (int)unaff_RBP;
  *(byte *)puVar5 = (char)*puVar5 + bVar2;
  bVar9 = (byte)((ulonglong)param_1 >> 8) & bVar2;
  uVar4 = *puVar5;
  *puVar5 = *puVar5 + (uint)puVar5;
  cVar3 = bVar2 + unaff_BL + CARRY4(uVar4,(uint)puVar5);
  *(char *)CONCAT62(uVar10,CONCAT11(bVar9,cVar8)) =
       *(char *)CONCAT62(uVar10,CONCAT11(bVar9,cVar8)) +
       (char)((uint)((int)CONCAT71(uVar7,cVar3 + *(char *)CONCAT71(uVar7,cVar3) |
                                         *(byte *)CONCAT62(uVar10,CONCAT11(bVar9,cVar8))) +
                    0xe212100) >> 8);
  puVar11 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar3 = '\x1b';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar11 = puVar11 + -1;
    *puVar11 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  cRam00000001484bcb31 = cRam00000001484bcb31 + cVar8;
  if (-1 < cRam00000001484bcb31) {
    pcVar6 = (char *)((longlong)&stack0xfffffffffffffff8 * 2 + 0xaeaf1204);
    *pcVar6 = *pcVar6 + '\x04';
    uVar4 = uRamc2ac0022a19f0022;
    uRam00000000aeaf1204 = uRam00000000aeaf1204 | 0xaeaf1204;
    pcVar6 = (char *)(ulonglong)uRamc2ac0022a19f0022;
    *param_4 = *param_4 + (char)auStack_f3;
    *pcVar6 = *pcVar6 + (char)uVar4;
    pcVar6[-0x5f] = pcVar6[-0x5f] + (char)param_2;
    uVar4 = iRam1201004bc2ac0022 + 0x26341200;
    *param_2 = *param_2 + (char)param_2;
    piVar1 = (int *)((ulonglong)uVar4 * 2);
    *piVar1 = *piVar1 + (int)auStack_f3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + -0x53ffdd5f) = *(char *)(unaff_RDI + -0x53ffdd5f) + unaff_BL;
  return;
}

