// Function: FUN_1404cf02c
// Addr: 1404cf02c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf02c(char *param_1)

{
  char *in_RAX;
  char unaff_R12B;
  
  *in_RAX = *in_RAX + (byte)in_RAX;
  in_RAX[-0x11] = in_RAX[-0x11] + (char)((ulonglong)param_1 >> 8);
  in_RAX[-0x70] = in_RAX[-0x70] + unaff_R12B;
  *param_1 = *param_1 + ((byte)in_RAX | 0x4c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

