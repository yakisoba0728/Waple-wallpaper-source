// Function: FUN_1404a7e90
// Addr: 1404a7e90
// Size: 1 bytes


void FUN_1404a7e90(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint in_EAX;
  char *pcVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined6 uVar5;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar3 = (undefined1)param_2;
  bVar4 = (byte)((ulonglong)param_2 >> 8) | (byte)(in_EAX >> 8);
  pcVar2 = (char *)((ulonglong)(in_EAX | 0xfd40500) - 0x33);
  *pcVar2 = *pcVar2 + (char)in_EAX;
  pcVar1 = (code *)swi(10);
  pcVar2 = (char *)(*pcVar1)();
  pcVar2[0x21004a7d] = pcVar2[0x21004a7d] + (char)((ulonglong)pcVar2 >> 8);
  *(char *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3)) + (char)pcVar2;
  *pcVar2 = *pcVar2 + (char)pcVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

