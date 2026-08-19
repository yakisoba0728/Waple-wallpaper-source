// Function: FUN_1404aa1fc
// Addr: 1404aa1fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa1fc(char *param_1)

{
  char *in_RAX;
  
  uRam210049e634000dd8 = SUB84(in_RAX,0);
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[-0x5cfff228] = in_RAX[-0x5cfff228] + (char)in_RAX;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

