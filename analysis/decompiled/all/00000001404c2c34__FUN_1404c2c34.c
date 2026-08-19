// Function: FUN_1404c2c34
// Addr: 1404c2c34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2c34(longlong param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char *pcVar4;
  char unaff_BH;
  char unaff_R12B;
  int iVar3;
  
  bVar2 = (char)in_EAX + 0x60;
  iVar3 = CONCAT31((int3)((uint)in_EAX >> 8),bVar2);
  pcVar4 = (char *)(ulonglong)(uint)(param_2 + *(int *)(CONCAT44(in_register_00000004,iVar3) + 2));
  *(byte *)CONCAT44(in_register_00000004,iVar3) =
       *(byte *)CONCAT44(in_register_00000004,iVar3) ^ bVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,iVar3) + -0x2e);
  *pcVar1 = *pcVar1 + bVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,iVar3) + 0x2b);
  *pcVar1 = *pcVar1 + unaff_BH;
  *pcVar4 = *pcVar4 + unaff_R12B;
  *(byte *)CONCAT44(in_register_00000004,iVar3) =
       *(char *)CONCAT44(in_register_00000004,iVar3) + bVar2;
  *(char *)(param_1 + -0x6cffb3d5) = *(char *)(param_1 + -0x6cffb3d5) - bVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,iVar3) + 0x405a002b);
  *pcVar1 = *pcVar1 + -0x4f;
  *(int *)CONCAT44(in_register_00000004,iVar3) =
       *(int *)CONCAT44(in_register_00000004,iVar3) + iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

