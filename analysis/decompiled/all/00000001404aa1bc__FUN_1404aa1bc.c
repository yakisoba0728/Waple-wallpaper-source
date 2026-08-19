// Function: FUN_1404aa1bc
// Addr: 1404aa1bc
// Size: 1 bytes


void FUN_1404aa1bc(char param_1,char *param_2)

{
  char cVar1;
  byte bVar3;
  uint *in_RAX;
  char *pcVar2;
  char unaff_BH;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar1 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar1;
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  pcVar2 = (char *)(ulonglong)
                   ((uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                   CONCAT11(bVar3 >> 1 | bVar3 << 7,cVar1)) | 0xdcd0400);
  pcVar2[0x21004aa0] = pcVar2[0x21004aa0] + unaff_BH;
  *param_2 = *param_2 + param_1;
  *pcVar2 = *pcVar2 + cVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

