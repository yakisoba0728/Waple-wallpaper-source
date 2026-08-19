// Function: FUN_1404b3640
// Addr: 1404b3640
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3640(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  int in_EAX;
  char *pcVar1;
  char unaff_SPL;
  
  pcVar1 = (char *)(ulonglong)(in_EAX + 0xaa0008e4U);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar1 = *pcVar1 + (char)(in_EAX + 0xaa0008e4U);
  pcVar1[-0x15] = pcVar1[-0x15] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

