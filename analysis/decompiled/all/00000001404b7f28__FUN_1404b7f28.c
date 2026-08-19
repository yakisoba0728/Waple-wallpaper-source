// Function: FUN_1404b7f28
// Addr: 1404b7f28
// Size: 1 bytes


void FUN_1404b7f28(char *param_1,char param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint *in_RAX;
  char cVar5;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  unkbyte10 in_ST7;
  char *pcVar4;
  
  cVar5 = (char)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar3 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  ffree(in_ST7);
  uVar3 = ((uint)in_RAX + 0xe237d400) - (uint)CARRY1((byte)uVar3,(byte)in_RAX);
  pcVar4 = (char *)(ulonglong)uVar3;
  cVar1 = *pcVar4;
  *pcVar4 = *pcVar4 + cVar5;
  if (*pcVar4 != '\0' && SCARRY1(cVar1,cVar5) == *pcVar4 < '\0') {
    *param_1 = *param_1 + (char)(uVar3 >> 8);
    *pcVar4 = *pcVar4 + (char)param_1;
    *pcVar4 = *pcVar4 + (char)uVar3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *pcVar4 = *pcVar4 + (char)uVar3;
  pcVar4 = (char *)(((CONCAT71(unaff_00000019,unaff_BL) | 0x1d) - 0x1257ffe3) +
                   (longlong)param_1 * 8);
  *pcVar4 = *pcVar4 + param_2;
  *param_4 = *param_4;
  uVar3 = uVar3 + 0x64050002;
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

