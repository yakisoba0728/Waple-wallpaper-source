// Function: FUN_1404ad08c
// Addr: 1404ad08c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad08c(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong in_RAX;
  int *piVar6;
  undefined7 uVar8;
  char *pcVar7;
  char cVar9;
  char unaff_BL;
  char *unaff_RDI;
  
  cVar9 = (char)((ulonglong)param_1 >> 8);
  piVar6 = (int *)(in_RAX | 0x6c);
  *piVar6 = *piVar6 + (int)piVar6;
  *param_1 = *param_1;
  *(char *)piVar6 = (char)*piVar6 + (char)piVar6;
  uVar8 = (undefined7)(in_RAX >> 8);
  cVar2 = (char)piVar6 + unaff_BL;
  unaff_RDI[(longlong)param_1 * 8 + 0x4a] = unaff_RDI[(longlong)param_1 * 8 + 0x4a];
  *param_1 = *param_1 + (char)(in_RAX >> 8);
  *(char *)CONCAT71(uVar8,cVar2) = *(char *)CONCAT71(uVar8,cVar2) + cVar2;
  puVar1 = (undefined1 *)(CONCAT71(uVar8,cVar2) + -0x1c);
  *puVar1 = *puVar1;
  *param_4 = *param_4 + cVar2;
  uVar4 = (uint)CONCAT71(uVar8,cVar2) | 5;
  uVar5 = uVar4 + 0x3600470;
  bVar3 = (byte)uVar5;
  bRam0000000000000000 = bRam0000000000000000 + (char)param_1 ^ bVar3;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + bVar3;
  *(uint *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + uVar5;
  param_1[-0x68] = param_1[-0x68] + bVar3;
  pcVar7 = (char *)(ulonglong)(uVar4 + 0x9e83870);
  *unaff_RDI = *unaff_RDI + cVar9;
  if (-1 < *unaff_RDI) {
    *pcVar7 = *pcVar7 + cVar9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

