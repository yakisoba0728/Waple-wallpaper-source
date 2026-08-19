// Function: FUN_1404d0be8
// Addr: 1404d0be8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0be8(void)

{
  byte *pbVar1;
  uint in_EAX;
  undefined4 uVar2;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uVar2 = CONCAT31((int3)(in_EAX >> 8),uRam540039a6bd0039a6);
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,uVar2) + 1 + CONCAT44(in_register_00000004,uVar2))
  ;
  *pbVar1 = *pbVar1 | 0x13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

