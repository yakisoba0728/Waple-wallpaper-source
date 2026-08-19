// Function: FUN_1404a54fc
// Addr: 1404a54fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a54fc(undefined8 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong in_RAX;
  char *unaff_RBX;
  int *unaff_RDI;
  
  param_2 = param_2 | *(uint *)((in_RAX | 0x70) + 1);
  iVar1 = *unaff_RDI;
  *unaff_RBX = *unaff_RBX + (char)param_2;
  piVar2 = (int *)((ulonglong)(uint)((int)(in_RAX | 0x70) + iVar1) * 2);
  *piVar2 = *piVar2 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

