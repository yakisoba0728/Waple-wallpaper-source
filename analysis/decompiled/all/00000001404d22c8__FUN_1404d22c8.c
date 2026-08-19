// Function: FUN_1404d22c8
// Addr: 1404d22c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d22fd) */

void FUN_1404d22c8(char *param_1,undefined8 param_2)

{
  char *in_RAX;
  bool in_OF;
  
  if (!in_OF) {
    *param_1 = *param_1;
    *in_RAX = *in_RAX + (char)in_RAX;
    in_RAX[-0x41] = in_RAX[-0x41] + (char)((ulonglong)param_2 >> 8);
    *param_1 = *param_1 + (char)in_RAX;
    *param_1 = *param_1 + (char)param_2;
    uRam00000001458f2bf7 = uRam00000001458f2bf7 | ((uint)in_RAX | 0x680d0003) + 0xc20400;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

