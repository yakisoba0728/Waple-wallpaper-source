// Function: FUN_1404cc170
// Addr: 1404cc170
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc170(char *param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  byte *in_RAX;
  char unaff_BL;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  bool in_OF;
  
  if (!in_OF) {
    *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX | 0x34;
  pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 9);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + param_3;
  iRam0000000143a0ea47 = iRam0000000143a0ea47 - ((uint)in_RAX ^ 0xc0);
  cRam00000001424cc381 = cRam00000001424cc381 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

