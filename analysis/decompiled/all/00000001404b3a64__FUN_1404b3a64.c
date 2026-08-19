// Function: FUN_1404b3a64
// Addr: 1404b3a64
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404b3a7b) overlaps instruction at (ram,0x0001404b3a79)
    */

void FUN_1404b3a64(undefined8 param_1,undefined8 param_2,byte param_3,char *param_4)

{
  uint in_EAX;
  uint uVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  undefined6 uVar7;
  char unaff_SPL;
  longlong in_FS_OFFSET;
  bool bVar8;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar5 = (undefined1)param_2;
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  cVar6 = (char)((ulonglong)param_2 >> 8) - (char)(in_EAX >> 8);
  uVar1 = in_EAX & 0xf0005d4;
  if (uVar1 == 0) {
    bVar8 = CARRY1(bVar4,bVar4);
    pcVar3 = (char *)0x0;
  }
  else {
    *(char *)CONCAT62(uVar7,CONCAT11(cVar6,uVar5)) =
         *(char *)CONCAT62(uVar7,CONCAT11(cVar6,uVar5)) + (char)param_1;
    uVar1 = uVar1 | *(uint *)(in_FS_OFFSET + (ulonglong)uVar1);
    pbVar2 = (byte *)(ulonglong)(uVar1 + 0xb0000a54);
    bVar8 = *pbVar2 < param_3 || (byte)(*pbVar2 - param_3) < (0x4ffff5ab < uVar1);
    *pbVar2 = (*pbVar2 - param_3) - (0x4ffff5ab < uVar1);
    uVar1 = in(CONCAT11(cVar6,uVar5));
    pcVar3 = (char *)(ulonglong)uVar1;
  }
  *pcVar3 = (*pcVar3 - param_3) - bVar8;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT62(uVar7,CONCAT11(cVar6,uVar5)) =
       *(char *)CONCAT62(uVar7,CONCAT11(cVar6,uVar5)) + (char)param_1;
  *pcVar3 = *pcVar3 + (char)pcVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

