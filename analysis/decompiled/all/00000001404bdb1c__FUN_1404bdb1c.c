// Function: FUN_1404bdb1c
// Addr: 1404bdb1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdb1c(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  undefined2 in_DS;
  
  uRam00000001406cdb6c = in_DS;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

