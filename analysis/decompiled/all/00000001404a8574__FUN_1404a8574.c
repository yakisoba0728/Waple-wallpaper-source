// Function: FUN_1404a8574
// Addr: 1404a8574
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8574(char *param_1,longlong param_2)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  byte bVar4;
  char *pcVar3;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  bool in_ZF;
  
  if (!in_ZF) {
    *param_1 = *param_1;
    uVar2 = in_EAX + 0x74050002;
    bVar1 = (char)uVar2 + *(char *)(ulonglong)uVar2;
    pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar1);
    bVar4 = (byte)(uVar2 >> 8);
    *(byte *)(unaff_RSI + 0xb) = *(byte *)(unaff_RSI + 0xb) & bVar4;
    *(char *)(param_2 + 0xb66) = *(char *)(param_2 + 0xb66) + (char)param_1;
    *param_1 = *param_1 + bVar4;
    *pcVar3 = *pcVar3 + bVar1;
    *pcVar3 = *pcVar3 + bVar4;
    bVar1 = bVar1 | (byte)*(undefined2 *)pcVar3;
    pcVar3 = (char *)(ulonglong)
                     CONCAT22((short)(uVar2 >> 0x10),
                              CONCAT11(*(undefined1 *)(unaff_RSI + 0xb),bVar1));
    *pcVar3 = *pcVar3 + bVar1;
    *param_1 = *param_1 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar3 = (char *)(unaff_RDI & 0xffffffff ^ 0x13);
  *pcVar3 = *pcVar3 + (char)((unaff_RDI & 0xffffffff) >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

