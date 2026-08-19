// Function: FUN_1404d31b8
// Addr: 1404d31b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d31ee) overlaps instruction at (ram,0x0001404d31ed)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d31ee) */

void FUN_1404d31b8(byte *param_1,uint param_2)

{
  undefined3 uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int in_EAX;
  uint uVar5;
  int *piVar7;
  byte bVar8;
  undefined2 uVar9;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  byte *unaff_RBP;
  uint unaff_ESI;
  char *unaff_RDI;
  undefined1 in_XMM1 [16];
  uint *puVar6;
  
  bVar8 = (byte)param_1;
  uVar5 = in_EAX + 0x1300450;
  *unaff_RDI = *unaff_RDI + bVar8;
  uVar5 = CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 | *(byte *)(ulonglong)uVar5);
  sysenter();
  *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 | uVar5;
  rsqrtps(in_XMM1,*(undefined1 (*) [16])CONCAT44(unaff_0000001c,unaff_EBX));
  uVar5 = uVar5 + 0x64050002;
  *(byte *)(ulonglong)uVar5 = *(byte *)(ulonglong)uVar5 | (byte)uVar5;
  uVar9 = (undefined2)param_2;
  out(uVar9,uVar5);
  out(uVar9,uVar5);
  uVar1 = (undefined3)(uVar5 >> 8);
  cVar3 = in(uVar9);
  uVar2 = CONCAT31(uVar1,cVar3);
  puVar6 = (uint *)(ulonglong)uVar2;
  *unaff_RBP = *unaff_RBP ^ bVar8;
  *puVar6 = *puVar6 & uVar2;
  *(char *)puVar6 = (char)*puVar6 + cVar3;
  out(uVar9,uVar2);
  out(uVar9,uVar2);
  bVar4 = in(uVar9);
  *unaff_RBP = *unaff_RBP ^ bVar8;
  *(int *)(ulonglong)CONCAT31(uVar1,bVar4) = *(int *)(ulonglong)CONCAT31(uVar1,bVar4) + param_2;
  piVar7 = (int *)(ulonglong)CONCAT31(uVar1,bVar4);
  bVar8 = *param_1;
  *param_1 = *param_1 + bVar4;
  *piVar7 = *piVar7 + CONCAT31(uVar1,bVar4) + (uint)CARRY1(bVar8,bVar4);
  piVar7[2] = piVar7[2] | unaff_ESI;
  *param_1 = *param_1 ^ (byte)(uVar5 >> 8);
  *(uint *)((longlong)piVar7 * 2) = *(uint *)((longlong)piVar7 * 2) ^ param_2;
  *(uint *)((longlong)piVar7 + -0x77d3fffd) = *(uint *)((longlong)piVar7 + -0x77d3fffd) ^ unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

