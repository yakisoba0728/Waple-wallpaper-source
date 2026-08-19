// Function: FUN_1404d5034
// Addr: 1404d5034
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5034(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  ulonglong in_RAX;
  char *pcVar1;
  char unaff_R12B;
  
  pcVar1 = (char *)(in_RAX ^ 0x4f);
  *param_4 = *param_4 + unaff_R12B;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  *pcVar1 = *pcVar1 + (char)(in_RAX >> 8);
  *param_4 = *param_4 + unaff_R12B;
  pcVar1 = (char *)(((ulonglong)((int)pcVar1 + 0x54b003b) ^ 0x4f) * 2);
  *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

