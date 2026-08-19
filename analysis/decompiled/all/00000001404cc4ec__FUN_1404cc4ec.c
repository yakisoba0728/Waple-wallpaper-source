// Function: FUN_1404cc4ec
// Addr: 1404cc4ec
// Size: 1 bytes


undefined4 FUN_1404cc4ec(char param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 in_RAX;
  undefined7 uVar4;
  char unaff_BH;
  
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = (byte)in_RAX | (byte)((ulonglong)in_RAX >> 8);
  iVar3 = (int)CONCAT71(uVar4,bVar1 | *(byte *)CONCAT71(uVar4,bVar1)) + 0x79000b64;
  in(0x34);
  uVar2 = in(0x34);
  return CONCAT22((short)((uint)iVar3 >> 0x10),
                  CONCAT11((char)((uint)iVar3 >> 8) + param_1 + unaff_BH,uVar2));
}

