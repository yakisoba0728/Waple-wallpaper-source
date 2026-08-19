// Function: FUN_1404a93a8
// Addr: 1404a93a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a93a8(char *param_1,char *param_2)

{
  undefined8 in_RAX;
  char *pcVar1;
  longlong unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  byte in_CF;
  
  *(byte *)(unaff_RBX + -0x6bf7fff4) = *(byte *)(unaff_RBX + -0x6bf7fff4) << 1 | in_CF;
  pcVar1 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x92);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar1 = *pcVar1 + -0x6e;
  param_1[CONCAT71(unaff_00000021,unaff_SPL) + 0x4a92b000] =
       param_1[CONCAT71(unaff_00000021,unaff_SPL) + 0x4a92b000] | (byte)param_2;
  *param_1 = *param_1 + (char)unaff_RBX;
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

