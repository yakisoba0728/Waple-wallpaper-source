// Function: FUN_1404d8010
// Addr: 1404d8010
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d8010(int param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  int *in_RAX;
  int *unaff_RBX;
  int *piVar3;
  
  *param_2 = *param_2 + param_1;
  *in_RAX = *in_RAX + (int)in_RAX;
  bVar1 = (byte)in_RAX | (byte)param_2;
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *(byte *)piVar3 = (char)*piVar3 + bVar1;
  *unaff_RBX = *unaff_RBX + (int)param_2;
  uVar2 = (int)piVar3 + *piVar3;
  *(char *)param_2 = (char)*param_2 + (char)uVar2;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  uRam00000001a852802c = uRam00000001a852802c & uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

