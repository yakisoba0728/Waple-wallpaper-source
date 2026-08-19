// Function: FUN_1404bf0d4
// Addr: 1404bf0d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf0d4(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined8 in_RAX;
  char unaff_BL;
  uint *puVar4;
  
  uVar3 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)param_2,(char)in_RAX)) +
          0xc740000;
  puVar4 = (uint *)(ulonglong)uVar3;
  *(char *)puVar4 = (char)*puVar4 + (char)uVar3;
  uVar2 = *puVar4;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)((ulonglong)(uVar3 | uVar2) - 0x4effd959);
  *pcVar1 = *pcVar1 + (char)param_2;
  pcVar1 = (char *)((ulonglong)(uVar3 | uVar2) + 0x21004bef);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

