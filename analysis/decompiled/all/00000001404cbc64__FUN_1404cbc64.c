// Function: FUN_1404cbc64
// Addr: 1404cbc64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbc64(char param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 in_RAX;
  undefined7 uVar6;
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  uint uVar5;
  
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = (char)in_RAX + -0x2c + in_CF;
  uVar5 = (uint)CONCAT71(uVar6,cVar3 + *(char *)CONCAT71(uVar6,cVar3));
  uVar4 = uVar5 + 0xf0000474;
  if (uVar5 < 0xffffb8c) {
    pcVar1 = (char *)(unaff_RBX + unaff_RSI * 2);
    *pcVar1 = *pcVar1 + param_1;
    uVar2 = in((short)param_2);
    *unaff_RDI = uVar2;
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  *(undefined1 *)(param_2 + 0x34) = *(undefined1 *)(param_2 + 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

