// Function: FUN_1404b3a50
// Addr: 1404b3a50
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404b3a7b) overlaps instruction at (ram,0x0001404b3a79)
    */

void FUN_1404b3a50(longlong param_1,int *param_2,byte param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 in_RAX;
  undefined7 uVar6;
  ulonglong uVar3;
  byte *pbVar5;
  ulonglong uVar7;
  byte bVar9;
  char cVar10;
  undefined6 uVar11;
  char unaff_SPL;
  uint unaff_EBP;
  longlong in_FS_OFFSET;
  bool bVar12;
  char *pcVar4;
  byte bVar8;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar10 = (char)((ulonglong)param_2 >> 8);
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = (char)in_RAX + 0x22;
  *(char *)CONCAT71(uVar6,bVar1) = *(char *)CONCAT71(uVar6,bVar1) + bVar1;
  *param_2 = *param_2 + (int)param_1;
  bVar9 = (byte)param_2 | *(byte *)((longlong)param_2 + 6);
  uVar7 = param_1 - 1;
  bVar8 = (byte)(uVar7 >> 8);
  if (uVar7 == 0 || bVar9 == 0) {
    *(undefined1 *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) =
         *(undefined1 *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9));
    *(uint *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) =
         *(uint *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) & unaff_EBP;
    cVar10 = cVar10 - (char)((ulonglong)in_RAX >> 8);
    uVar3 = CONCAT71(uVar6,bVar1 | *(byte *)CONCAT71(uVar6,bVar1));
    uVar2 = (uint)uVar3 & 0xf0005d4;
    pcVar4 = (char *)(ulonglong)uVar2;
    if ((uVar3 & 0xf0005d4) == 0) {
      bVar12 = CARRY1(bVar8,bVar8);
      uVar7 = uVar7 & 0xff;
    }
    else {
      *(char *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) =
           *(char *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) + (char)uVar7;
      uVar2 = uVar2 | *(uint *)(pcVar4 + in_FS_OFFSET);
      pbVar5 = (byte *)(ulonglong)(uVar2 + 0xb0000a54);
      bVar12 = *pbVar5 < param_3 || (byte)(*pbVar5 - param_3) < (0x4ffff5ab < uVar2);
      *pbVar5 = (*pbVar5 - param_3) - (0x4ffff5ab < uVar2);
      uVar2 = in(CONCAT11(cVar10,bVar9));
      pcVar4 = (char *)(ulonglong)uVar2;
    }
    *pcVar4 = (*pcVar4 - param_3) - bVar12;
    *param_4 = *param_4 + unaff_SPL;
    *(char *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) =
         *(char *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) + (char)uVar7;
    *pcVar4 = *pcVar4 + (char)pcVar4;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) + bVar8;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

