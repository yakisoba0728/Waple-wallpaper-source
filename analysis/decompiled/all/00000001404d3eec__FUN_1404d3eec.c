// Function: FUN_1404d3eec
// Addr: 1404d3eec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3eec(undefined8 param_1,int param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  int *unaff_RSI;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *unaff_RSI = *unaff_RSI + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

