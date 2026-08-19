// Function: FUN_1404cc500
// Addr: 1404cc500
// Size: 1 bytes


ulonglong FUN_1404cc500(char param_1)

{
  code *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined7 uVar6;
  uint *in_RAX;
  ulonglong uVar5;
  char unaff_BH;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar2;
  if ((char)(byte)*in_RAX < '\0') {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  *(byte *)in_RAX = (byte)*in_RAX | bVar2;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = bVar2 | (byte)((ulonglong)in_RAX >> 8);
  iVar4 = (int)CONCAT71(uVar6,bVar2 | *(byte *)CONCAT71(uVar6,bVar2)) + 0x79000b64;
  in(0x34);
  uVar3 = in(0x34);
  return (ulonglong)
         CONCAT22((short)((uint)iVar4 >> 0x10),
                  CONCAT11((char)((uint)iVar4 >> 8) + param_1 + unaff_BH,uVar3));
}

