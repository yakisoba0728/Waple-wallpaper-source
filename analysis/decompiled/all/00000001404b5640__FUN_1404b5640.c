// Function: FUN_1404b5640
// Addr: 1404b5640
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5640(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  uint unaff_ESP;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  uRam00000001347055ea = uRam00000001347055ea & unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

