// Function: FUN_1404a0cdc
// Addr: 1404a0cdc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a0c1a) overlaps instruction at (ram,0x0001404a0c19)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a0c09) */

void FUN_1404a0cdc(longlong param_1,uint *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *in_RAX;
  uint uVar6;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_ESI;
  undefined4 *puVar7;
  char *unaff_RDI;
  char in_ZF;
  
  param_1 = param_1 + -1;
  if (param_1 == 0 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = (uint)in_RAX | *in_RAX;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  puVar7 = (undefined4 *)(ulonglong)(unaff_ESI | *(uint *)((ulonglong)uVar4 + 0x21));
  uVar4 = uVar4 + 0x34050002;
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  *(undefined4 *)unaff_RDI = *puVar7;
  uVar4 = *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  puVar5 = (uint *)(ulonglong)uVar4;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x21004a + param_1);
  *pcVar1 = *pcVar1 + (char)param_2;
  uVar6 = *puVar5;
  cVar2 = (char)uVar4;
  *(char *)puVar5 = (char)*puVar5 + cVar2;
  if (SCARRY1((char)uVar6,cVar2)) {
    uVar6 = *param_2;
    *puVar5 = *puVar5 & uVar4;
    *(char *)puVar5 = (char)*puVar5 + cVar2;
    uVar6 = ((uint)param_1 | uVar6) & *(uint *)((longlong)puVar5 + -0x7787fffd);
    iVar3 = uVar4 + *puVar5;
    cVar2 = (char)iVar3 + '\v' + CARRY4(uVar4,*puVar5);
    *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + -8;
    pcVar1 = (char *)((ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),cVar2) * 2);
    *pcVar1 = *pcVar1 + (char)uVar6;
    uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),
                     CONCAT11(((char)((uint)iVar3 >> 8) + (char)((ulonglong)param_2 >> 8)) * '\x02',
                              cVar2)) + 0x6d40000;
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_RDI + 4) = puVar7[1];
  uVar4 = *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x1f21004a + param_1);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | (byte)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

