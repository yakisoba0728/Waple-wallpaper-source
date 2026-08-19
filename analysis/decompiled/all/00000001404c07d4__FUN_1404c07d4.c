// Function: FUN_1404c07d4
// Addr: 1404c07d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c07d4(undefined8 param_1,undefined8 param_2)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  
  cVar1 = in_AL + -0x3c;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + (char)((ulonglong)param_2 >> 8);
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) - cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

