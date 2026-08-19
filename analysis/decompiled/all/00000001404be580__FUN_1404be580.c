// Function: FUN_1404be580
// Addr: 1404be580
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be580(undefined8 param_1,char param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  longlong unaff_RSI;
  
  uVar2 = (uint)CONCAT61((int6)((ulonglong)in_RAX >> 0x10),
                         (char)((ulonglong)in_RAX >> 8) + (char)in_RAX) & 0x25c43f;
  pcVar1 = (char *)((ulonglong)(uVar2 << 8) + 0xd);
  *pcVar1 = *pcVar1 + (char)uVar2;
  *param_4 = *param_4;
  *(char *)(unaff_RSI + -0x48) = *(char *)(unaff_RSI + -0x48) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

