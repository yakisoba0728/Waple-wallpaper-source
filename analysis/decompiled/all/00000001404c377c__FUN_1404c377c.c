// Function: FUN_1404c377c
// Addr: 1404c377c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c377c(uint *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  undefined2 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar9;
  uint *in_RAX;
  int *piVar7;
  uint unaff_EBX;
  uint unaff_EBP;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  bool bVar10;
  undefined1 auStack_8 [8];
  uint *puVar6;
  char *pcVar8;
  
  *(uint *)((longlong)param_1 + -0x56daffd5) =
       *(uint *)((longlong)param_1 + -0x56daffd5) | unaff_EBP;
  uVar3 = (uint)in_RAX - *in_RAX;
  puVar6 = (uint *)(ulonglong)uVar3;
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  *param_2 = *param_2 + bVar9 + ((uint)in_RAX < *in_RAX);
  *(byte *)((longlong)puVar6 * 2) = *(byte *)((longlong)puVar6 * 2) | (byte)uVar3;
  param_2[4] = param_2[4] | bVar9;
  uVar5 = *puVar6;
  *param_1 = *param_1 | unaff_EBX;
  uVar4 = uVar3 + *puVar6;
  uVar5 = (uint)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                         CONCAT11(bVar9 + (char)uVar5,(char)param_2));
  uVar4 = uVar4 + 0x301470 + (uint)(uVar5 < uVar4 || uVar5 - uVar4 < (uint)CARRY4(uVar3,*puVar6));
  pcVar8 = (char *)((longlong)(ulonglong)uVar4 + -0x49);
  *pcVar8 = *pcVar8 + (char)(uVar4 >> 8);
  uVar4 = uVar4 - *(int *)(ulonglong)uVar4;
  piVar7 = (int *)(ulonglong)uVar4;
  *piVar7 = *piVar7 + uVar4;
  *(char *)piVar7 = (char)*piVar7 + (char)uVar4;
  bVar9 = (byte)(uVar4 >> 8);
  *(char *)((longlong)piVar7 + 0x31) = *(char *)((longlong)piVar7 + 0x31) + bVar9;
  bVar10 = CARRY1(bRam00000000d5002ba8,bVar9);
  bRam00000000d5002ba8 = bRam00000000d5002ba8 + bVar9;
  puVar6 = (uint *)((longlong)piVar7 * 2);
  uVar5 = *puVar6;
  uVar3 = *puVar6;
  *puVar6 = uVar3 + uVar4 + (uint)bVar10;
  *(uint *)(unaff_RDI + (longlong)piVar7) =
       *(int *)(unaff_RDI + (longlong)piVar7) + (int)auStack_8 +
       (uint)(CARRY4(uVar5,uVar4) || CARRY4(uVar3 + uVar4,(uint)bVar10));
  uVar5 = (uVar4 + 0x80000654) - *(int *)(ulonglong)(uVar4 + 0x80000654);
  pcVar8 = (char *)(ulonglong)uVar5;
  *param_4 = *param_4 + (char)auStack_8;
  cVar2 = (char)uVar5;
  *pcVar8 = *pcVar8 + cVar2;
  pcVar8[-0x61ffd447] = pcVar8[-0x61ffd447] + cVar2;
  *param_4 = *param_4 + cVar2;
  *unaff_RDI = *unaff_RDI + '+';
  uVar1 = TaskRegister();
  *(undefined2 *)(unaff_RDI + in_FS_OFFSET) = uVar1;
  *unaff_RDI = *unaff_RDI + '+';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

