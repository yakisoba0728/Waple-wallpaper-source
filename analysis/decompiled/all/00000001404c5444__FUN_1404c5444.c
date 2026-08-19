// Function: FUN_1404c5444
// Addr: 1404c5444
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5444(char *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 in_RAX;
  int *piVar3;
  char unaff_BL;
  
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX & (byte)param_2);
  *(char *)piVar3 = (char)*piVar3 + (char)((ulonglong)param_2 >> 8);
  iVar1 = *piVar3;
  *param_1 = *param_1 + unaff_BL;
  uVar2 = (int)piVar3 + iVar1 & 0x5416000a;
  *(int *)(ulonglong)uVar2 = *(int *)(ulonglong)uVar2 + uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

