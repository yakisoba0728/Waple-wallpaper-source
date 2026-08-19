// Function: FUN_1404c4f6c
// Addr: 1404c4f6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4f6c(undefined8 param_1,char param_2)

{
  code *pcVar1;
  char *unaff_RBX;
  
  pcVar1 = (code *)swi(0x2d);
  (*pcVar1)();
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

