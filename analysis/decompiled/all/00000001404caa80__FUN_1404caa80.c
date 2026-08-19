// Function: FUN_1404caa80
// Addr: 1404caa80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404caa80(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char *in_RAX;
  char *unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char in_CF;
  
  *unaff_RDI = *unaff_RSI;
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_2 >> 8) + in_CF;
  cVar1 = (char)in_RAX;
  in_RAX[0x21004ca9] = in_RAX[0x21004ca9] + cVar1;
  *in_RAX = *in_RAX + cVar1;
  in_RAX[0x10] = in_RAX[0x10] + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

