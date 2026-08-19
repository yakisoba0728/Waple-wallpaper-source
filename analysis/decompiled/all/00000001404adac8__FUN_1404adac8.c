// Function: FUN_1404adac8
// Addr: 1404adac8
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404adaf9) overlaps instruction at (ram,0x0001404adaf8)
    */

void FUN_1404adac8(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  byte *in_RAX;
  uint *puVar3;
  char *unaff_RSI;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  char *pcVar4;
  
  uRam00000001b487dad8 = uRam00000001b487dad8 & unaff_EDI;
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),((byte)in_RAX | *in_RAX) + 100);
  uVar2 = ((uint)puVar3 | *puVar3) + 0xa0000f54;
  pcVar4 = (char *)(ulonglong)uVar2;
  *(undefined1 *)(param_2 * 2) = *(undefined1 *)(param_2 * 2);
  *param_4 = *param_4 + '\x1f';
  cVar1 = (char)uVar2;
  *unaff_RSI = *unaff_RSI + cVar1;
  *pcVar4 = *pcVar4 + cVar1;
  if (*pcVar4 == '\0') {
    *(undefined1 *)(param_2 * 2) = *(undefined1 *)(param_2 * 2);
  }
  *pcVar4 = *pcVar4 + cVar1;
  pcVar4 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + param_1);
  *pcVar4 = *pcVar4 + (char)param_2;
  *param_4 = *param_4 + cRam50001244c0001244;
  sysret();
  return;
}

