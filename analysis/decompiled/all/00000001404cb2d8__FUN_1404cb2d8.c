// Function: FUN_1404cb2d8
// Addr: 1404cb2d8
// Size: 1 bytes


void FUN_1404cb2d8(char *param_1)

{
  char cVar1;
  uint uVar2;
  char cVar4;
  undefined8 in_RAX;
  char *pcVar3;
  char *unaff_RBX;
  uint *unaff_RSI;
  char unaff_R12B;
  
  cVar1 = (char)in_RAX + -0x20;
  cVar4 = (char)((ulonglong)in_RAX >> 8) +
          *(char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1) + 0x20);
  *(byte *)unaff_RSI = (byte)*unaff_RSI >> 1;
  pcVar3 = (char *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar4,cVar1))
                                  >> 8),cVar1 * '\x02');
  *pcVar3 = *pcVar3 + cVar1 * '\x02';
  *param_1 = *param_1 + cVar4;
  uVar2 = (int)pcVar3 - *unaff_RSI;
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_1 >> 8);
  if (*unaff_RBX != '\0') {
    *unaff_RBX = *unaff_RBX + (char)(uVar2 >> 8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)param_1;
  uVar2 = *unaff_RSI ^ *(uint *)(ulonglong)*unaff_RSI;
  cVar1 = (char)uVar2 + -0x4e;
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar3 = *pcVar3 + cVar1;
  pcVar3[-0xb] = pcVar3[-0xb] + cVar1;
  uVar2 = unaff_RSI[1] ^ *(uint *)(ulonglong)unaff_RSI[1];
  cVar1 = (char)uVar2 + -0x4e;
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar3 = *pcVar3 + cVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

