// Function: FUN_1404a34dc
// Addr: 1404a34dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a34dc(char *param_1)

{
  uint uVar1;
  undefined8 in_RAX;
  
  *param_1 = *param_1 + (char)in_RAX;
  uVar1 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0x24,(char)in_RAX)) | 0x340d0005
  ;
  *param_1 = *param_1 + ((char)uVar1 - *(char *)(ulonglong)uVar1 | 1U);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

