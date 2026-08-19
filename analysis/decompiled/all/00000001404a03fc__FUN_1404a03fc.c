// Function: FUN_1404a03fc
// Addr: 1404a03fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a042a) overlaps instruction at (ram,0x0001404a0428)
    */

void FUN_1404a03fc(char *param_1,char *param_2)

{
  byte *pbVar1;
  undefined2 uVar2;
  byte bVar3;
  uint uVar4;
  char cVar7;
  int *in_RAX;
  int *piVar5;
  uint *puVar6;
  byte bVar8;
  char cVar9;
  byte *unaff_RBX;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  bool in_CF;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  cVar7 = (char)unaff_ESP;
  if (in_CF) {
    uVar4 = (int)in_RAX + *in_RAX;
    piVar5 = (int *)(ulonglong)uVar4;
    *unaff_RBX = *unaff_RBX | (byte)uVar4;
  }
  else {
    uVar4 = (int)in_RAX + *in_RAX;
    piVar5 = (int *)(ulonglong)uVar4;
    *param_1 = *param_1 + cVar7;
    *(char *)((longlong)piVar5 * 2) = *(char *)((longlong)piVar5 * 2) + (char)uVar4;
    unaff_RBX[(longlong)param_1] = unaff_RBX[(longlong)param_1] + (char)(uVar4 >> 8);
    pbVar1 = (byte *)(param_1 + CONCAT44(unaff_00000024,unaff_ESP));
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar8;
    if (CARRY1(bVar3,bVar8)) goto code_r0x0001404a0442;
  }
  uVar4 = (int)piVar5 + *piVar5;
  piVar5 = (int *)(ulonglong)uVar4;
  *param_1 = *param_1 + cVar7;
  *(char *)piVar5 = (char)*piVar5 + (char)uVar4;
  param_2[0x2c] = param_2[0x2c] + cVar9;
  uVar4 = uVar4 + *piVar5;
  *param_1 = *param_1 + cVar7;
  bVar3 = (byte)uVar4;
  *(char *)((ulonglong)uVar4 * 2) = *(char *)((ulonglong)uVar4 * 2) + bVar3;
  uVar2 = (undefined2)(uVar4 >> 0x10);
  cVar7 = (char)(uVar4 >> 8) + bVar8;
  uVar4 = CONCAT22(uVar2,CONCAT11(cVar7,bVar3));
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  uVar4 = CONCAT22(uVar2,CONCAT11(cVar7 + bVar3,bVar3));
  piVar5 = (int *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar3 | *(byte *)(ulonglong)uVar4);
  *unaff_RBX = *unaff_RBX >> 3;
  param_2[0x2c] = param_2[0x2c] + cVar9;
code_r0x0001404a0442:
  uVar4 = (int)piVar5 + *piVar5;
  puVar6 = (uint *)(ulonglong)uVar4;
  cVar7 = *param_2;
  *puVar6 = *puVar6 & uVar4;
  *(char *)puVar6 = (char)*puVar6 + (char)uVar4;
  *unaff_RBX = *unaff_RBX >> 3;
  param_2[0x2c] = param_2[0x2c] + cVar9;
  iRam00000000d2570464 =
       iRam00000000d2570464 +
       CONCAT31((int3)((ulonglong)param_1 >> 8),(char)param_1 + cVar7 + *param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

