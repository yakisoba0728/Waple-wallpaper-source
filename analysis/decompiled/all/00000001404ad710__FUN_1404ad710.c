// Function: FUN_1404ad710
// Addr: 1404ad710
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad710(void)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  byte in_CF;
  
  cVar1 = (in_AL - 1U) - in_CF;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       (*(char *)CONCAT71(in_register_00000001,cVar1) - cVar1) -
       (in_AL == '\0' || (byte)(in_AL - 1U) < in_CF);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

