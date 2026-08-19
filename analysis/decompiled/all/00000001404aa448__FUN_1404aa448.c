// Function: FUN_1404aa448
// Addr: 1404aa448
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa448(int param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  ulonglong in_RAX;
  char *pcVar1;
  char unaff_SPL;
  
  pcVar1 = (char *)(in_RAX ^ 0xe6);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  pcVar1[-0x59fff20a] = pcVar1[-0x59fff20a] + (char)pcVar1;
  iRam00000000d257a468 = iRam00000000d257a468 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

