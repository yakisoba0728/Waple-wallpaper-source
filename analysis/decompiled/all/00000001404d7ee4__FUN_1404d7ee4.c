// Function: FUN_1404d7ee4
// Addr: 1404d7ee4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7ee4(int *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  uint uVar3;
  
  cVar2 = (char)in_EAX + -0x1e;
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),cVar2);
  *(char *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + cVar2;
  *param_1 = *param_1 + param_2;
  uVar1 = *(uint *)CONCAT44(in_register_00000004,uVar3);
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(int *)CONCAT44(in_register_00000004,uVar3) + uVar3;
  *(char *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + cVar2;
  *param_1 = *param_1 + param_2 + uVar3 + (uint)CARRY4(uVar1,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

