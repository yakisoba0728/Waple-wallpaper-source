// Function: FUN_1404d6ea8
// Addr: 1404d6ea8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6ea8(undefined8 param_1,char param_2)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  longlong unaff_RBP;
  
  pcVar2 = (code *)swi(0x2f);
  pcVar3 = (char *)(*pcVar2)();
  pcVar1 = (char *)(unaff_RBP * 3 + 0x21004d);
  *pcVar1 = *pcVar1 + param_2;
  *pcVar3 = *pcVar3 + (char)pcVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

