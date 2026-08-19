// Function: FUN_14049fab4
// Addr: 14049fab4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fab4(uint *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  char unaff_BL;
  longlong unaff_RSI;
  
  uVar1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((byte)((ulonglong)in_RAX >> 8) |
                                 *(byte *)(unaff_RSI + (longlong)param_1),(char)in_RAX)) +
          0xd2000d54;
  *param_1 = *param_1 << 1 | (uint)((int)*param_1 < 0);
  *(char *)(param_2 * 9) = *(char *)(param_2 * 9) + unaff_BL;
  *(int *)(ulonglong)uVar1 = *(int *)(ulonglong)uVar1 + uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

