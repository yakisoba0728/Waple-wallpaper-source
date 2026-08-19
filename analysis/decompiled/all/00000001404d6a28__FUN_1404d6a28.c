// Function: FUN_1404d6a28
// Addr: 1404d6a28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6a28(char param_1,byte param_2)

{
  byte bVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_register_00000004;
  int *unaff_RBX;
  int unaff_ESP;
  undefined3 uVar4;
  
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  param_2 = (byte)in_EAX & param_2;
  uVar2 = CONCAT31(uVar4,param_2);
  *(char *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + param_1;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,uVar2);
  *(byte *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + param_2;
  *unaff_RBX = (*unaff_RBX - unaff_ESP) - (uint)CARRY1(bVar1,param_2);
  param_2 = param_2 | *(byte *)CONCAT44(in_register_00000004,uVar2);
  iVar3 = CONCAT31(uVar4,param_2 + 0x34);
  *(uint *)CONCAT44(in_register_00000004,iVar3) =
       (*(int *)CONCAT44(in_register_00000004,iVar3) - iVar3) - (uint)(0xcb < param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

