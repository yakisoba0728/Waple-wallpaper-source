// Function: FUN_1404ba844
// Addr: 1404ba844
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404ba866) overlaps instruction at (ram,0x0001404ba863)
    */

void FUN_1404ba844(undefined1 *param_1,undefined2 param_2)

{
  code *pcVar1;
  byte bVar2;
  uint *in_RAX;
  char *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar4;
  undefined2 in_GS;
  longlong in_FS_OFFSET;
  byte *pbVar3;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar2;
  *(char *)(unaff_RDI + -0x73ffdf11) =
       *(char *)(unaff_RDI + -0x73ffdf11) + (char)((ulonglong)in_RAX >> 8);
  lVar4 = unaff_RDI + 4;
  *param_1 = *param_1;
  *unaff_RSI = *unaff_RSI + bVar2;
  *(byte *)in_RAX = (byte)*in_RAX + bVar2;
  if ((byte)*in_RAX == 0) {
    *(byte *)in_RAX = (byte)*in_RAX & bVar2;
    lVar4 = unaff_RDI + 8;
  }
  *(byte *)in_RAX = (byte)*in_RAX + bVar2;
  bVar2 = bVar2 | *(byte *)(in_FS_OFFSET + (longlong)in_RAX);
  pbVar3 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  pbVar3[(longlong)param_1] = pbVar3[(longlong)param_1] + (char)((ushort)param_2 >> 8);
  pbVar3[-0x58ffdf11] = pbVar3[-0x58ffdf11] + bVar2;
  out(param_2,(int)pbVar3);
  *pbVar3 = *pbVar3 & bVar2;
  *(undefined2 *)(lVar4 + 0x521004a) = in_GS;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}

