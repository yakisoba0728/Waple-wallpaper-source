// Function: FUN_1404b6334
// Addr: 1404b6334
// Size: 1 bytes


void FUN_1404b6334(char *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  byte *pbVar5;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  bVar3 = (byte)in_RAX;
  cVar2 = (char)((ulonglong)in_RAX >> 8) * '\x02';
  pbVar5 = (byte *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar2,bVar3))
                                  >> 8),bVar3);
  param_1[unaff_RBX] = param_1[unaff_RBX] + cVar2;
  param_1[param_2] = param_1[param_2] + (char)((ulonglong)param_2 >> 8);
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar3;
  uVar4 = ((int)pbVar5 - *(int *)pbVar5) - (uint)CARRY1(bVar1,bVar3);
  *param_1 = *param_1 + -8;
  *unaff_RDI = *unaff_RSI;
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | (byte)uVar4;
  unaff_RDI[1] = unaff_RSI[1];
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

