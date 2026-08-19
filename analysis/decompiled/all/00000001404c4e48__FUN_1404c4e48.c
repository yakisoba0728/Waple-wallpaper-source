// Function: FUN_1404c4e48
// Addr: 1404c4e48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4e48(int *param_1,uint *param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *in_RAX;
  char *pcVar6;
  char unaff_BL;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  int *piVar5;
  
  *param_1 = *param_1 + (int)param_1;
  cVar2 = *in_RAX;
  *param_2 = *param_2 | unaff_ESI;
  iVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + cVar2) + 0x2061130;
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (byte)iVar3;
  uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),(byte)iVar3 ^ (byte)*param_2);
  pbVar1 = (byte *)((longlong)(ulonglong)uVar4 + -0x49);
  *pbVar1 = *pbVar1 ^ (byte)((uint)iVar3 >> 8);
  uVar4 = uVar4 - *(int *)(ulonglong)uVar4;
  piVar5 = (int *)(ulonglong)uVar4;
  *piVar5 = *piVar5 + uVar4;
  *(char *)piVar5 = (char)*piVar5 + (char)uVar4;
  *(char *)((longlong)param_2 + -0x44eaffd3) = *(char *)((longlong)param_2 + -0x44eaffd3) + '\x01';
  pcVar6 = (char *)(ulonglong)(uVar4 + 0xbdc95700);
  cVar2 = (char)(uVar4 + 0xbdc95700);
  *pcVar6 = *pcVar6 + cVar2;
  *pcVar6 = *pcVar6 + cVar2;
  *(char *)param_1 = (char)*param_1 + cVar2;
  (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI) * 2] =
       (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI) * 2] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

