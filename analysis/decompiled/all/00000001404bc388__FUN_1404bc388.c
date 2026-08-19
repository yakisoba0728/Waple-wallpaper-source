// Function: FUN_1404bc388
// Addr: 1404bc388
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bc3b3) overlaps instruction at (ram,0x0001404bc3b1)
    */

void FUN_1404bc388(byte *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined8 in_RAX;
  undefined7 uVar5;
  char *pcVar4;
  char unaff_BL;
  undefined8 *puVar6;
  undefined8 *unaff_RBP;
  longlong unaff_RDI;
  char in_CF;
  undefined1 auStack_f3 [227];
  undefined8 uStack_10;
  
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar2 = (char)in_RAX + unaff_BL + in_CF;
  *param_1 = *param_1 +
             (char)((uint)((int)CONCAT71(uVar5,cVar2 + *(char *)CONCAT71(uVar5,cVar2) | *param_1) +
                          0xe212100) >> 8);
  puVar6 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\x1b';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar6 = puVar6 + -1;
    *puVar6 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  cRam00000001484bcb31 = cRam00000001484bcb31 + (char)param_1;
  if (-1 < cRam00000001484bcb31) {
    pcVar4 = (char *)((longlong)&stack0xfffffffffffffff8 * 2 + 0xaeaf1204);
    *pcVar4 = *pcVar4 + '\x04';
    uVar3 = uRamc2ac0022a19f0022;
    uRam00000000aeaf1204 = uRam00000000aeaf1204 | 0xaeaf1204;
    pcVar4 = (char *)(ulonglong)uRamc2ac0022a19f0022;
    *param_4 = *param_4 + (char)auStack_f3;
    *pcVar4 = *pcVar4 + (char)uVar3;
    pcVar4[-0x5f] = pcVar4[-0x5f] + (char)param_2;
    uVar3 = iRam1201004bc2ac0022 + 0x26341200;
    *param_2 = *param_2 + (char)param_2;
    piVar1 = (int *)((ulonglong)uVar3 * 2);
    *piVar1 = *piVar1 + (int)auStack_f3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + -0x53ffdd5f) = *(char *)(unaff_RDI + -0x53ffdd5f) + unaff_BL;
  return;
}

