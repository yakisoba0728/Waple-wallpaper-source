// Function: FUN_1404aa0ec
// Addr: 1404aa0ec
// Size: 1 bytes


void FUN_1404aa0ec(undefined1 *param_1)

{
  char cVar1;
  char cVar3;
  uint in_EAX;
  char *pcVar2;
  byte unaff_BH;
  char in_AF;
  byte bVar4;
  
  bVar4 = (byte)((in_EAX | 0xdc3e100) >> 8);
  cVar1 = (char)in_EAX;
  cVar3 = bVar4 + unaff_BH;
  pcVar2 = (char *)(ulonglong)
                   CONCAT22((short)((in_EAX | 0xdc3e100) >> 0x10),
                            CONCAT11((cVar3 < '\0') << 7 | (cVar3 == '\0') << 6 | in_AF << 4 |
                                     ((POPCOUNT(cVar3) & 1U) == 0) << 2 | 2U |
                                     CARRY1(bVar4,unaff_BH),cVar1));
  *param_1 = *param_1;
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  return;
}

