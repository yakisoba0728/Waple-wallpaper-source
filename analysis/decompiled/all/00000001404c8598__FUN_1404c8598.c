// Function: FUN_1404c8598
// Addr: 1404c8598
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8598(uint *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  char cVar9;
  undefined8 in_RAX;
  char cVar10;
  uint unaff_EBX;
  longlong in_FS_OFFSET;
  uint *puVar7;
  char *pcVar8;
  
  cVar10 = (char)((ulonglong)param_1 >> 8);
  param_2 = param_2 | *(uint *)(&stack0x00000000 + (longlong)param_1);
  cVar4 = (byte)in_RAX + 0x34;
  puVar7 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  *(byte *)puVar7 = (byte)*puVar7 + cVar4 + (0xcb < (byte)in_RAX);
  bVar5 = (byte)(param_2 >> 8);
  *(byte *)puVar7 = (byte)*puVar7 & bVar5;
  *puVar7 = *puVar7 ^ (uint)puVar7;
  uVar6 = (uint)puVar7 ^ 0xa4003130;
  pcVar8 = (char *)(ulonglong)uVar6;
  *pcVar8 = *pcVar8 + (byte)uVar6;
  *pcVar8 = *pcVar8 + (char)(uVar6 >> 8);
  *(byte *)param_1 = (byte)*param_1 ^ bVar5;
  cRam00000000e44cb6e9 = cRam00000000e44cb6e9 + bVar5;
  puVar7 = (uint *)((longlong)pcVar8 * 2);
  uVar2 = *puVar7;
  *puVar7 = *puVar7 + uVar6;
  piVar1 = (int *)((ulonglong)param_2 - 0x1ff40ff3);
  *piVar1 = *piVar1 + param_2 + (uint)CARRY4(uVar2,uVar6);
  *param_1 = *param_1 & unaff_EBX;
  bVar5 = (byte)uVar6 | *(byte *)(ulonglong)uVar6;
  uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar5);
  *(byte *)(ulonglong)uVar6 = *(byte *)(ulonglong)uVar6 | bVar5;
  uVar2 = uVar6 + 0x11000974;
  piVar1 = (int *)(in_FS_OFFSET + (ulonglong)uVar2);
  *piVar1 = *piVar1 + uVar2 + (uint)(0xeefff68b < uVar6);
  param_2 = param_2 | *(uint *)((ulonglong)uVar2 + (ulonglong)param_2);
  cVar4 = (char)uVar2 + '4';
  LocalDescriptorTableRegister((short)CONCAT31((int3)(uVar2 >> 8),cVar4));
  uVar3 = (undefined2)(uVar2 >> 0x10);
  cVar9 = (char)(uVar2 >> 8) + cVar10;
  pcVar8 = (char *)(ulonglong)CONCAT22(uVar3,CONCAT11(cVar9,cVar4));
  *pcVar8 = *pcVar8 + cVar4;
  cVar4 = cVar4 + (char)param_2;
  pcVar8 = (char *)(ulonglong)CONCAT22(uVar3,CONCAT11(cVar9 + cVar10,cVar4));
  *(char *)(ulonglong)param_2 = *(char *)(ulonglong)param_2 + (char)param_1;
  *pcVar8 = *pcVar8 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

