// Function: FUN_14049f874
// Addr: 14049f874
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f874(int *param_1,undefined2 param_2)

{
  byte *pbVar1;
  uint in_EAX;
  int iVar2;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  out(param_2,in_EAX);
  iVar2 = CONCAT31((int3)(in_EAX >> 8),1);
  *(char *)CONCAT44(in_register_00000004,iVar2) =
       *(char *)CONCAT44(in_register_00000004,iVar2) + (char)((ushort)param_2 >> 8);
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,iVar2) + -0x4f10ffff);
  *pbVar1 = *pbVar1 ^ 1;
  *(char *)CONCAT44(in_register_00000004,iVar2) =
       *(char *)CONCAT44(in_register_00000004,iVar2) + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

