// Function: FUN_1404cb2ec
// Addr: 1404cb2ec
// Size: 1 bytes


void FUN_1404cb2ec(char *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char *in_RAX;
  uint *puVar6;
  char *pcVar7;
  uint *unaff_RSI;
  char unaff_R12B;
  
  while( true ) {
    unaff_RSI = (uint *)(ulonglong)((uint)unaff_RSI & (uint)&stack0x00000000);
    bVar4 = (char)in_RAX - *in_RAX;
    puVar6 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                              CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar4,bVar4));
    uVar5 = (uint)puVar6 - *puVar6;
    param_1 = param_1 + -1;
    if (param_1 == (char *)0x0 || uVar5 == 0) break;
    in_RAX = (char *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),(char)uVar5 - ((uint)puVar6 < *puVar6));
  }
  uVar1 = *(uint *)(ulonglong)uVar5;
  uVar2 = *(uint *)(ulonglong)(uVar5 ^ uVar1);
  *(char *)(param_2 + 0x5621004c) =
       *(char *)(param_2 + 0x5621004c) + (char)((ulonglong)param_2 >> 8);
  pcVar7 = (char *)((ulonglong)(uVar5 ^ uVar1 ^ uVar2) ^ 0x21);
  *pcVar7 = *pcVar7 + (char)param_1;
  uVar5 = *unaff_RSI ^ *(uint *)(ulonglong)*unaff_RSI;
  cVar3 = (char)uVar5 + -0x4e;
  pcVar7 = (char *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar3);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar7 = *pcVar7 + cVar3;
  pcVar7[-0xb] = pcVar7[-0xb] + cVar3;
  uVar5 = unaff_RSI[1] ^ *(uint *)(ulonglong)unaff_RSI[1];
  cVar3 = (char)uVar5 + -0x4e;
  pcVar7 = (char *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar3);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar7 = *pcVar7 + cVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

