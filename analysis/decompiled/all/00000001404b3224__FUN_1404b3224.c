// Function: FUN_1404b3224
// Addr: 1404b3224
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3224(byte param_1,undefined2 param_2)

{
  char cVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  byte *unaff_RBX;
  uint uVar2;
  
  cVar1 = in(param_2);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  *unaff_RBX = *unaff_RBX ^ param_1;
  *(uint *)CONCAT44(in_register_00000004,uVar2) =
       *(uint *)CONCAT44(in_register_00000004,uVar2) & uVar2;
  *(char *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

