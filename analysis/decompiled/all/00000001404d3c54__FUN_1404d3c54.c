// Function: FUN_1404d3c54
// Addr: 1404d3c54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3c54(void)

{
  char cVar1;
  undefined4 in_EAX;
  uint uVar2;
  undefined4 in_register_00000004;
  int *unaff_RBX;
  int unaff_EBP;
  
  cVar1 = cRam10003f9bbe003f9b;
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),cRam10003f9bbe003f9b);
  *(uint *)CONCAT44(in_register_00000004,uVar2) =
       *(uint *)CONCAT44(in_register_00000004,uVar2) & uVar2;
  *(char *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + cVar1;
  *unaff_RBX = *unaff_RBX + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

