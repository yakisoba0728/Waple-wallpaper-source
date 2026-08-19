// Function: FUN_1404b039c
// Addr: 1404b039c
// Size: 1 bytes


void FUN_1404b039c(byte *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 in_RAX;
  uint *puVar4;
  char *pcVar5;
  uint unaff_EBX;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  char *unaff_RDI;
  
  *param_2 = *param_2 & unaff_EBX;
  puVar4 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),(ushort)(byte)in_RAX);
  iVar2 = ((uint)puVar4 | *puVar4) + 0xf0000834;
  *unaff_RDI = *unaff_RDI + (char)unaff_EBX;
  iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 + -0x15) + -0x15500015;
  bVar1 = *param_1;
  *param_1 = *param_1 + unaff_SPL;
  pcVar5 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar5 = *pcVar5 + (char)param_2;
  iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 + '\x04' + CARRY1(bVar1,unaff_SPL));
  uVar3 = iVar2 + 0x3c96d63f + (uint)(iVar2 + 0x1f000a54U < 0x2d6c0015);
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  *unaff_RDI = *unaff_RDI + (char)unaff_EBX;
  uVar3 = uVar3 + 0x1d96cbeb + (uint)(uVar3 < 0x2d6c0015);
  pcVar5 = (char *)(ulonglong)uVar3;
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  *pcVar5 = *pcVar5 + (char)param_1;
  *pcVar5 = *pcVar5 + (char)uVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

