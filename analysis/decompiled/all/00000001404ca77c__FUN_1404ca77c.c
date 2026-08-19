// Function: FUN_1404ca77c
// Addr: 1404ca77c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca77c(char *param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  uint *in_RAX;
  char *unaff_RDI;
  
  param_1[0x3335f000] = param_1[0x3335f000] + (char)((ulonglong)param_2 >> 8);
  *unaff_RDI = *unaff_RDI + (char)param_2;
  uVar1 = *in_RAX;
  *param_1 = *param_1 + param_3;
  uVar1 = ((uint)in_RAX ^ uVar1) + 0xe0050003;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 ^ (byte)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

