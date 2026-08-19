// Function: FUN_1404c85bc
// Addr: 1404c85bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c85bc(uint *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  undefined2 uVar3;
  byte bVar4;
  char cVar5;
  ulonglong in_RAX;
  char *pcVar7;
  char cVar9;
  uint uVar10;
  uint unaff_EBX;
  longlong in_FS_OFFSET;
  byte *pbVar6;
  char cVar8;
  
  cVar9 = (char)((ulonglong)param_1 >> 8);
  uVar10 = (uint)param_2;
  *param_1 = *param_1 + uVar10;
  *(int *)(param_2 + -0x1ff40ff3) = *(int *)(param_2 + -0x1ff40ff3) + uVar10;
  pbVar6 = (byte *)(in_RAX & 0xffffffff);
  *param_1 = *param_1 & unaff_EBX;
  bVar4 = (byte)pbVar6 | *pbVar6;
  pbVar6 = (byte *)CONCAT71((int7)((ulonglong)pbVar6 >> 8),bVar4);
  *pbVar6 = *pbVar6 | bVar4;
  uVar2 = (uint)pbVar6 + 0x11000974;
  piVar1 = (int *)(in_FS_OFFSET + (ulonglong)uVar2);
  *piVar1 = *piVar1 + uVar2 + (uint)(0xeefff68b < (uint)pbVar6);
  uVar10 = uVar10 | *(uint *)((ulonglong)uVar2 + param_2);
  cVar5 = (char)uVar2 + '4';
  LocalDescriptorTableRegister((short)CONCAT31((int3)(uVar2 >> 8),cVar5));
  uVar3 = (undefined2)(uVar2 >> 0x10);
  cVar8 = (char)(uVar2 >> 8) + cVar9;
  pcVar7 = (char *)(ulonglong)CONCAT22(uVar3,CONCAT11(cVar8,cVar5));
  *pcVar7 = *pcVar7 + cVar5;
  cVar5 = cVar5 + (char)uVar10;
  pcVar7 = (char *)(ulonglong)CONCAT22(uVar3,CONCAT11(cVar8 + cVar9,cVar5));
  *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + (char)param_1;
  *pcVar7 = *pcVar7 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

