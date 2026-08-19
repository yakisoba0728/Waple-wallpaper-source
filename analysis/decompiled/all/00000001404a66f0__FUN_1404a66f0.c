// Function: FUN_1404a66f0
// Addr: 1404a66f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a66f0(char *param_1,char *param_2)

{
  undefined3 uVar1;
  char cVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  uint *puVar5;
  longlong unaff_RBX;
  char unaff_SPL;
  
  iVar4 = in_EAX + -0x34c40800;
  cVar3 = (char)iVar4;
  *(char *)(unaff_RBX + -0x5bfff67d) = *(char *)(unaff_RBX + -0x5bfff67d) + cVar3;
  *(undefined4 *)param_1 = *(undefined4 *)param_1;
  uVar1 = (undefined3)((uint)iVar4 >> 8);
  cVar2 = cVar3 + 'f';
  *param_1 = *param_1 + unaff_SPL;
  *(char *)(ulonglong)CONCAT31(uVar1,cVar2) = *(char *)(ulonglong)CONCAT31(uVar1,cVar2) + cVar2;
  *(char *)(unaff_RBX + -0x5bfff67d) = *(char *)(unaff_RBX + -0x5bfff67d) + cVar2;
  *(undefined4 *)param_1 = *(undefined4 *)param_1;
  cVar3 = cVar3 + -0x34;
  *param_1 = *param_1 + unaff_SPL;
  *param_2 = *param_2 + cVar3;
  *(char *)(ulonglong)CONCAT31(uVar1,cVar3) = *(char *)(ulonglong)CONCAT31(uVar1,cVar3) + cVar3;
  puVar5 = (uint *)((ulonglong)CONCAT31(uVar1,cVar3) ^ 0x32);
  *(char *)((longlong)puVar5 + -0x7d) = *(char *)((longlong)puVar5 + -0x7d) + (char)param_2;
  *puVar5 = *puVar5 | (uint)puVar5;
  *(int *)(unaff_RBX + 0x65f40009) = *(int *)(unaff_RBX + 0x65f40009) + 0x4a;
  cVar2 = (char)((uint)iVar4 >> 8);
  *param_1 = *param_1 + cVar2;
  *(char *)puVar5 = (char)*puVar5 + (char)puVar5;
  *(char *)((longlong)puVar5 + -0x7d) = *(char *)((longlong)puVar5 + -0x7d) + (char)param_2;
  *puVar5 = *puVar5 | (uint)puVar5;
  *(int *)(unaff_RBX + 0x65f40009) = *(int *)(unaff_RBX + 0x65f40009) + 0x4a;
  *param_1 = *param_1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

