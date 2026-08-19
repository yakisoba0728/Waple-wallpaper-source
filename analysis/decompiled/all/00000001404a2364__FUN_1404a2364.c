// Function: FUN_1404a2364
// Addr: 1404a2364
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2364(undefined8 param_1,char param_2)

{
  int unaff_EBX;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + unaff_EBX;
  *(char *)unaff_RSI = (char)*unaff_RSI + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

