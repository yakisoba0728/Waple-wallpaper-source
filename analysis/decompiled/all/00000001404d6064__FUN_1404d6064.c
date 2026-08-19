// Function: FUN_1404d6064
// Addr: 1404d6064
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6064(undefined1 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int in_EAX;
  uint uVar3;
  
  bVar1 = *param_4;
  *param_4 = *param_4 - 8;
  uVar3 = (in_EAX + -0x641d0004) - (uint)(7 < bVar1);
  uVar2 = LocalDescriptorTableRegister();
  *(undefined4 *)(ulonglong)uVar3 = uVar2;
  if (uVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (cRam0000000000000000 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

