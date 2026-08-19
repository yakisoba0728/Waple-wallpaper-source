// Function: FUN_1404b01d0
// Addr: 1404b01d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b01d0(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 in_register_00000004;
  
  iVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '4');
  *(int *)CONCAT44(in_register_00000004,iVar1) =
       *(int *)CONCAT44(in_register_00000004,iVar1) - iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

