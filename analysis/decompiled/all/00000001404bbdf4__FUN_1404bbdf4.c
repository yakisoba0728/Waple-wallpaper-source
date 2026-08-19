// Function: FUN_1404bbdf4
// Addr: 1404bbdf4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbdf4(byte *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined8 in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  byte *unaff_RSI;
  
  bVar3 = (byte)((ulonglong)in_RAX >> 8) & bRam0000000167c3be1c;
  bVar2 = (byte)in_RAX &
          *(byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar3,(byte)in_RAX));
  puVar1 = (undefined1 *)(unaff_RBX + 0x84a0100 + (longlong)param_1 * 2);
  *puVar1 = *puVar1;
  if (bVar2 != 0) {
    *(char *)(unaff_RBP + 100) = *(char *)(unaff_RBP + 100) + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI << 1 | (char)*unaff_RSI < '\0';
  *param_1 = *param_1 ^ bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

