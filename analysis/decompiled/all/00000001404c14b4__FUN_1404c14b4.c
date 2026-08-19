// Function: FUN_1404c14b4
// Addr: 1404c14b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c14b4(uint *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  int *unaff_RBX;
  uint unaff_ESP;
  
  *param_1 = *param_1 + (int)param_1;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  *param_2 = *param_2 | unaff_ESP;
  bVar2 = (byte)in_EAX;
  *(byte *)param_1 = (char)*param_1 + bVar2;
  *param_1 = *param_1 | in_EAX;
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar2;
  *unaff_RBX = (*unaff_RBX - (int)param_1) - (uint)CARRY1(bVar1,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

