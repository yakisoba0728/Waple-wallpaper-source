// Function: FUN_1404a8248
// Addr: 1404a8248
// Size: 1 bytes


void FUN_1404a8248(char *param_1,undefined8 param_2)

{
  int iVar1;
  undefined3 uVar2;
  undefined8 in_RAX;
  char *pcVar3;
  char cVar4;
  undefined6 uVar5;
  char unaff_BL;
  char unaff_SPL;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  iVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | (byte)((ulonglong)in_RAX >> 8)
                       ) + -0x1f340400;
  uVar2 = (undefined3)((uint)iVar1 >> 8);
  cVar4 = (char)((ulonglong)param_2 >> 8) + unaff_BL * '\x02';
  pcVar3 = (char *)((ulonglong)(CONCAT31(uVar2,(char)iVar1 * '\x02') | 0xb) | 0xb);
  pcVar3[-0x7f] = pcVar3[-0x7f] + unaff_BL;
  *param_1 = *param_1 + unaff_SPL;
  *pcVar3 = *pcVar3 + (char)pcVar3;
  pcVar3 = (char *)((ulonglong)(CONCAT31(uVar2,(char)pcVar3 * '\x02') | 0xb) | 0xb);
  pcVar3[-0x7f] = pcVar3[-0x7f] + unaff_BL;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,(char)param_2)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,(char)param_2)) + (char)param_1;
  *pcVar3 = *pcVar3 + (char)pcVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

