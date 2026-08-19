// Function: FUN_1404b2e54
// Addr: 1404b2e54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2e54(char param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  undefined8 in_RAX;
  char *pcVar2;
  char unaff_SPL;
  
  uVar1 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),(ushort)(byte)in_RAX) ^ 0x3c741000;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + param_1;
  pcVar2 = (char *)((ulonglong)uVar1 ^ 0x3b);
  pcVar2[0x120017a8] = pcVar2[0x120017a8] + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 | (byte)pcVar2;
  *pcVar2 = *pcVar2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

