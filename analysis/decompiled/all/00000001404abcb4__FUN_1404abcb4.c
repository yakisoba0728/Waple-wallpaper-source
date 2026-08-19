// Function: FUN_1404abcb4
// Addr: 1404abcb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abcb4(longlong param_1,uint param_2)

{
  char *in_RAX;
  char cVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  in_RAX[unaff_RSI] = in_RAX[unaff_RSI] + (char)param_2;
  cVar1 = (char)(param_2 >> 8);
  *(char *)(unaff_RSI + param_1) = *(char *)(unaff_RSI + param_1) + cVar1;
  in_RAX[-0x70] = in_RAX[-0x70] + cVar1;
  TaskRegister(*(undefined2 *)(unaff_RBP + -0x67fff070));
  uRam000000006d210fdd = TaskRegister();
  uRam00000001044fbce4 = uRam00000001044fbce4 & param_2;
  *(char *)(unaff_RBP + -0x7fff06d) =
       *(char *)(unaff_RBP + -0x7fff06d) + (char)in_RAX + *in_RAX + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

