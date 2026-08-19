// Function: FUN_1404bd56c
// Addr: 1404bd56c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd56c(byte *param_1,char *param_2,char param_3)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar8;
  longlong in_RAX;
  undefined1 *puVar6;
  int *piVar7;
  char cVar9;
  char *unaff_RBX;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  char in_CF;
  
  cVar9 = (char)((ulonglong)param_1 >> 8);
  *(char *)(in_RAX + 0x780a0004) = *(char *)(in_RAX + 0x780a0004) + (char)param_1 + in_CF;
  uVar4 = (int)in_RAX + 0x6680500;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  param_1[0x2c] = param_1[0x2c] + (char)(uVar4 >> 8);
  uVar2 = uVar4 >> 8 & 0x4bd44c;
  puVar6 = (undefined1 *)(ulonglong)(uVar2 << 8);
  cVar8 = (char)uVar2;
  *param_1 = *param_1 + cVar8;
  *puVar6 = *puVar6;
  *puVar6 = *puVar6;
  uVar4 = uVar4 >> 8 & 0x4bd44c;
  uVar5 = uVar4 * 0x100;
  param_1[0x2c] = param_1[0x2c] + cVar8;
  piVar7 = (int *)(ulonglong)uVar5;
  *param_1 = *param_1;
  puVar3 = (uint *)((longlong)piVar7 * 2);
  uVar2 = *puVar3;
  *puVar3 = *puVar3 + uVar4 * -0x100;
  *(int *)((longlong)piVar7 + 9) =
       (*(int *)((longlong)piVar7 + 9) - unaff_EDI) - (uint)(uVar2 < uVar5);
  *param_2 = *param_2 + (char)param_1;
  *(int *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(int *)CONCAT44(unaff_0000003c,unaff_EDI) + (int)param_2;
  bVar1 = *param_1;
  *param_1 = *param_1 + (byte)uVar4;
  *(char *)piVar7 = ((char)*piVar7 - param_3) - CARRY1(bVar1,(byte)uVar4);
  *piVar7 = *piVar7 + uVar5;
  func_0x0001188bd5b0();
  *unaff_RBX = *unaff_RBX + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

