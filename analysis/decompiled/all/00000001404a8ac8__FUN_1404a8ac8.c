// Function: FUN_1404a8ac8
// Addr: 1404a8ac8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8ac8(longlong param_1,undefined4 *param_2)

{
  int in_EAX;
  uint uVar1;
  char *unaff_RSI;
  uint *puVar2;
  
  uVar1 = in_EAX + 0x734;
  puVar2 = (uint *)(ulonglong)uVar1;
  if (param_1 == 1 || uVar1 == 0) {
    *unaff_RSI = *unaff_RSI + (char)uVar1;
    if (param_1 + -2 != 0 && *unaff_RSI != '\0') {
      halt_baddata();
    }
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),CONCAT11((char)(uVar1 >> 8) + (char)param_2,(char)uVar1)
                    );
    puVar2 = (uint *)(ulonglong)uVar1;
    *param_2 = (int)(param_1 + -2);
    *puVar2 = *puVar2 & uVar1;
  }
  *(char *)puVar2 = (char)*puVar2 + (char)puVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

