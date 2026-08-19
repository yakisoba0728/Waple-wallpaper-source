// Function: FUN_1404bd9dc
// Addr: 1404bd9dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd9dc(undefined8 param_1,int param_2)

{
  uint *in_RAX;
  longlong unaff_RBP;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(undefined1 *)(unaff_RBP + 0x25) = *(undefined1 *)(unaff_RBP + 0x25);
  *(int *)(unaff_RBP + -0x76affee) = *(int *)(unaff_RBP + -0x76affee) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

