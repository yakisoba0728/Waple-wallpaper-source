// Function: FUN_1404cc348
// Addr: 1404cc348
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc348(int *param_1,byte param_2)

{
  byte bVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  int unaff_EBX;
  
  param_2 = in_AL & param_2;
  *(char *)CONCAT71(in_register_00000001,param_2) =
       *(char *)CONCAT71(in_register_00000001,param_2) + (char)unaff_EBX;
  bVar1 = *(byte *)CONCAT71(in_register_00000001,param_2);
  *(byte *)CONCAT71(in_register_00000001,param_2) =
       *(char *)CONCAT71(in_register_00000001,param_2) + param_2;
  *param_1 = (*param_1 - unaff_EBX) - (uint)CARRY1(bVar1,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

