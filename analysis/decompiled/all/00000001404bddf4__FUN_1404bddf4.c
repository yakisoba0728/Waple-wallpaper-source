// Function: FUN_1404bddf4
// Addr: 1404bddf4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bddf4(uint *param_1)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  uint unaff_ESP;
  
  cVar1 = in_AL + '0';
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  *param_1 = *param_1 & unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

