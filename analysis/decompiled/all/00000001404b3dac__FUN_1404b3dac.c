// Function: FUN_1404b3dac
// Addr: 1404b3dac
// Size: 1 bytes


void FUN_1404b3dac(byte *param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar5;
  undefined8 in_RAX;
  undefined7 uVar6;
  char *pcVar3;
  char *pcVar4;
  uint *unaff_RDI;
  
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = *param_1;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar5;
  cVar2 = cRamac001891b7001891 + *(char *)(CONCAT71(uVar6,cRamac001891b7001891) * 2) +
          CARRY1(bVar1,bVar5);
  pcVar3 = (char *)CONCAT71(uVar6,cVar2);
  *pcVar3 = *pcVar3 - cVar2;
  pcVar4 = (char *)(param_2 & 0xffffffff);
  *pcVar4 = (*pcVar4 - (byte)pcVar4) - ((uint)pcVar3 < *unaff_RDI);
  *(byte *)((ulonglong)pcVar3 & 0xffffffff) =
       *(byte *)((ulonglong)pcVar3 & 0xffffffff) | (byte)pcVar4;
  *pcVar4 = *pcVar4 + (char)param_1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

