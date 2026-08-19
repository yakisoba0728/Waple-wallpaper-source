// Function: FUN_1404bab24
// Addr: 1404bab24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bab24(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char in_AL;
  byte bVar1;
  undefined7 in_register_00000001;
  char unaff_SPL;
  
  bVar1 = in_AL + 0x56;
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)CONCAT71(in_register_00000001,bVar1) =
       *(char *)CONCAT71(in_register_00000001,bVar1) + bVar1;
  *(char *)(param_1 + -5) = *(char *)(param_1 + -5) + (char)((ulonglong)param_1 >> 8);
  *(byte *)CONCAT71(in_register_00000001,bVar1) =
       *(byte *)CONCAT71(in_register_00000001,bVar1) & bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

