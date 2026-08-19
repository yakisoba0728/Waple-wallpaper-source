// Function: FUN_1404abc0c
// Addr: 1404abc0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abc0c(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  ulonglong in_RAX;
  char *pcVar1;
  longlong unaff_RBX;
  char unaff_SPL;
  
  pcVar1 = (char *)(in_RAX ^ 0xe6);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  pcVar1[-0x73] = pcVar1[-0x73] + (char)((ulonglong)param_2 >> 8);
  LocalDescriptorTableRegister(*(undefined2 *)(unaff_RBX + 0x34000f8d));
  out(0x49,(char)pcVar1);
  *param_1 = *param_1 + (char)(in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

