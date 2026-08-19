// Function: FUN_1404bd708
// Addr: 1404bd708
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd708(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  char *in_RAX;
  char *pcVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  longlong unaff_RDI;
  char *unaff_retaddr;
  
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  iVar7 = (int)param_2;
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar5 = (char *)func_0x00011892d713();
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)pcVar5 >> 8),(char)pcVar5 + *pcVar5);
  uVar1 = *puVar6;
  uVar4 = (uint)puVar6 + *puVar6;
  iVar2 = *(int *)(unaff_RDI + CONCAT44(uVar8,iVar7));
  *unaff_retaddr = *unaff_retaddr + (char)iVar7;
  piVar3 = (int *)((ulonglong)uVar4 * 2);
  *piVar3 = *piVar3 + iVar7;
  pcVar5 = (char *)((ulonglong)uVar4 | 0x70);
  *pcVar5 = *pcVar5 + (char)pcVar5;
  puVar6 = (uint *)((ulonglong)((int)&stack0x00000000 + iVar2 + (uint)CARRY4((uint)puVar6,uVar1)) +
                   param_1);
  *puVar6 = *puVar6 & (uint)unaff_retaddr;
  pcVar5[unaff_RDI * 4] = pcVar5[unaff_RDI * 4] + (char)unaff_retaddr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

