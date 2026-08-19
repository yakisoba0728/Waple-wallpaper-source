// Function: FUN_1404b3918
// Addr: 1404b3918
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3918(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  byte bVar4;
  uint in_EAX;
  uint uVar6;
  byte bVar9;
  char unaff_BH;
  char unaff_SPL;
  byte *unaff_RDI;
  bool bVar10;
  ushort uVar5;
  byte *pbVar7;
  byte *pbVar8;
  
  bVar9 = (byte)param_2;
  uVar6 = in_EAX + 0x42000de4;
  pbVar7 = (byte *)(ulonglong)uVar6;
  bVar2 = *pbVar7 - (byte)uVar6;
  bVar10 = *pbVar7 < (byte)uVar6 || bVar2 < (0xbdfff21b < in_EAX);
  *pbVar7 = bVar2 - (0xbdfff21b < in_EAX);
  bVar4 = (byte)((ushort)uVar6 / (ushort)*unaff_RDI);
  uVar3 = (undefined2)(uVar6 >> 0x10);
  uVar5 = CONCAT11((char)((ushort)uVar6 % (ushort)*unaff_RDI),bVar4);
  pbVar8 = (byte *)(ulonglong)CONCAT22(uVar3,uVar5);
  bVar2 = *pbVar8;
  bVar1 = *pbVar8;
  *pbVar8 = (bVar1 - bVar4) - bVar10;
  *pbVar8 = (*pbVar8 - unaff_BH) - (bVar2 < bVar4 || (byte)(bVar1 - bVar4) < bVar10);
  *param_4 = *param_4 + unaff_SPL;
  *pbVar8 = *pbVar8 + bVar4;
  pbVar7 = (byte *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11((byte)((ulonglong)param_2 >> 8) | (byte)(in_EAX >> 8),bVar9))
                   + 0x36);
  bVar2 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar4;
  bVar10 = *pbVar8 < bVar4 || (byte)(*pbVar8 - bVar4) < CARRY1(bVar2,bVar4);
  *pbVar8 = (*pbVar8 - bVar4) - CARRY1(bVar2,bVar4);
  bVar4 = (byte)(uVar5 / *unaff_RDI);
  pbVar7 = (byte *)(ulonglong)CONCAT22(uVar3,CONCAT11((char)(uVar5 % (ushort)*unaff_RDI),bVar4));
  bVar2 = *pbVar7;
  bVar1 = *pbVar7;
  *pbVar7 = (bVar1 - bVar4) - bVar10;
  *pbVar7 = (*pbVar7 - unaff_BH) - (bVar2 < bVar4 || (byte)(bVar1 - bVar4) < bVar10);
  *param_4 = *param_4 + unaff_SPL;
  *pbVar7 = *pbVar7 + bVar4;
  bVar2 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar9;
  *pbVar7 = (*pbVar7 - bVar4) - CARRY1(bVar2,bVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

