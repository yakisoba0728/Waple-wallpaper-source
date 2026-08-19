// Function: FUN_1404bc3a4
// Addr: 1404bc3a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bc3b3) overlaps instruction at (ram,0x0001404bc3b1)
    */

void FUN_1404bc3a4(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  uint in_EAX;
  uint uVar2;
  char *pcVar4;
  char unaff_BL;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined1 auStack_8 [8];
  uint *puVar3;
  
  uVar2 = in_EAX | 0x8000788;
  puVar3 = (uint *)(ulonglong)uVar2;
  if (-1 < (int)uVar2) {
    pcVar4 = (char *)((longlong)puVar3 + unaff_RBP * 2);
    *pcVar4 = *pcVar4 + (char)uVar2;
    *puVar3 = *puVar3 | uVar2;
    uVar2 = uRamc2ac0022a19f0022;
    pcVar4 = (char *)(ulonglong)uRamc2ac0022a19f0022;
    *param_4 = *param_4 + (char)auStack_8;
    *pcVar4 = *pcVar4 + (char)uVar2;
    pcVar4[-0x5f] = pcVar4[-0x5f] + (char)param_2;
    uVar2 = iRam1201004bc2ac0022 + 0x26341200;
    *param_2 = *param_2 + (char)param_2;
    piVar1 = (int *)((ulonglong)uVar2 * 2);
    *piVar1 = *piVar1 + (int)auStack_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + -0x53ffdd5f) = *(char *)(unaff_RDI + -0x53ffdd5f) + unaff_BL;
  return;
}

