// Function: FUN_1404a9d44
// Addr: 1404a9d44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char *in_RAX;
  char unaff_SPL;
  
  *param_4 = *param_4 + unaff_SPL;
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar1 = (char *)((ulonglong)
                    ((uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                                    (char)in_RAX + (char)((ulonglong)param_2 >> 8)) | 0xd3f3a00) +
                   0x10049ed);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

