// Function: FUN_1404befa4
// Addr: 1404befa4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404befa4(void)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  char unaff_SPL;
  char *unaff_RSI;
  char *in_R9;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x115fffda);
  *pcVar1 = *pcVar1 + '\x01';
  *in_R9 = *in_R9 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  cVar2 = in(0xc);
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

