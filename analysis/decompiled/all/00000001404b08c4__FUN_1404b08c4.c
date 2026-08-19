// Function: FUN_1404b08c4
// Addr: 1404b08c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b08c4(longlong param_1,undefined4 param_2)

{
  char *in_RAX;
  longlong unaff_RBP;
  
  in_RAX[param_1] = in_RAX[param_1] + (char)((uint)param_2 >> 8);
  *in_RAX = *in_RAX + (char)param_2;
  in_RAX[unaff_RBP + 0x1a21004b] = in_RAX[unaff_RBP + 0x1a21004b] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

