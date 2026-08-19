// Function: FUN_1404c1f00
// Addr: 1404c1f00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1f00(undefined8 param_1,char *param_2)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 in_register_00000004;
  
  iVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX - *param_2);
  *(int *)CONCAT44(in_register_00000004,iVar1) =
       *(int *)CONCAT44(in_register_00000004,iVar1) - iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

