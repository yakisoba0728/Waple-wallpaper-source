// Function: FUN_1404abcc4
// Addr: 1404abcc4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abcc4(undefined8 param_1,uint param_2)

{
  short in_AX;
  longlong unaff_RBP;
  
  uRam000000006d210fdd = TaskRegister();
  uRam00000001044fbce4 = uRam00000001044fbce4 & param_2;
  *(char *)(unaff_RBP + -0x7fff06d) =
       *(char *)(unaff_RBP + -0x7fff06d) + (char)in_AX + *(char *)(ulonglong)(uint)(int)in_AX + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

