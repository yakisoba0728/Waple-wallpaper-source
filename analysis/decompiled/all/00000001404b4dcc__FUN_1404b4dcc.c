// Function: FUN_1404b4dcc
// Addr: 1404b4dcc
// Size: 1 bytes


void FUN_1404b4dcc(undefined1 *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  char *pcVar4;
  longlong unaff_RBX;
  char unaff_SPL;
  
  uVar3 = in_EAX & 0x25a0001a;
  cVar2 = (char)uVar3 - *(char *)(ulonglong)uVar3;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar2);
  pcVar4 = (char *)(ulonglong)uVar3;
  pbVar1 = (byte *)(unaff_RBX + (longlong)param_1 * 2);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_1 >> 8);
  *param_1 = *param_1;
  *pcVar4 = *pcVar4 + cVar2;
  pcVar4[-0x5fffe5db] = pcVar4[-0x5fffe5db] + (char)param_2;
  uVar3 = uVar3 & 0x2c08001a;
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + (char)param_1;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

