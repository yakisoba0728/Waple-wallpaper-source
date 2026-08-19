// Function: FUN_1404b510c
// Addr: 1404b510c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b510c(undefined8 param_1,undefined2 param_2)

{
  longlong unaff_RBX;
  int *unaff_RDI;
  char in_CF;
  undefined8 uStackX_10;
  
  *(byte *)(unaff_RBX + 0x1a) = *(byte *)(unaff_RBX + 0x1a) >> 1 | in_CF << 7;
  in(param_2);
  *unaff_RDI = *unaff_RDI + (int)uStackX_10;
  *uStackX_10 = *uStackX_10 + (char)uStackX_10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

