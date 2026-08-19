// Function: FUN_1404c7b9c
// Addr: 1404c7b9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7b9c(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  uint uVar1;
  longlong in_RAX;
  longlong unaff_RDI;
  uint *puVar2;
  
  uVar1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((byte)((ulonglong)in_RAX >> 8) | *(byte *)(unaff_RDI + in_RAX),
                                 (char)in_RAX)) + 0x90000654;
  puVar2 = (uint *)(ulonglong)uVar1;
  *param_3 = *param_3 ^ (ulonglong)param_3;
  *puVar2 = *puVar2 ^ uVar1;
  uRam0000000124517bb8 = uRam0000000124517bb8 & uVar1;
  *puVar2 = *puVar2 | uVar1;
  *puVar2 = *puVar2 ^ uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

