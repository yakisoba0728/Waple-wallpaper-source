// Function: FUN_14049e554
// Addr: 14049e554
// Size: 1 bytes


void FUN_14049e554(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  ulonglong *in_RAX;
  char *unaff_RBX;
  char unaff_SPL;
  
  *in_RAX = *in_RAX << 1 | (ulonglong)((longlong)*in_RAX < 0);
  *(char *)((longlong)in_RAX + -0x1c) =
       *(char *)((longlong)in_RAX + -0x1c) + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *unaff_RBX = *unaff_RBX + (char)param_2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

