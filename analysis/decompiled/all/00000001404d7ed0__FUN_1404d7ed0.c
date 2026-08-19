// Function: FUN_1404d7ed0
// Addr: 1404d7ed0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7ed0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *in_RAX;
  int unaff_EBX;
  uint *puVar4;
  
  iVar2 = (int)in_RAX;
  *in_RAX = *in_RAX + iVar2;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + iVar2;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + unaff_EBX;
  uVar3 = iVar2 + 0x5781800;
  puVar4 = (uint *)(ulonglong)uVar3;
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  *(char *)puVar4 = (char)*puVar4 + (char)uVar3;
  *param_1 = *param_1 + param_2;
  uVar1 = *puVar4;
  *puVar4 = *puVar4 + uVar3;
  *(char *)puVar4 = (char)*puVar4 + (char)uVar3;
  *param_1 = *param_1 + param_2 + uVar3 + (uint)CARRY4(uVar1,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

