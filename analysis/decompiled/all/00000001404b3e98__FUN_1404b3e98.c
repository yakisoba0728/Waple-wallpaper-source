// Function: FUN_1404b3e98
// Addr: 1404b3e98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3e98(byte param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined2 in_AX;
  char *pcVar6;
  byte *pbVar7;
  byte unaff_BL;
  ulonglong uVar8;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  undefined2 in_CS;
  
  bVar4 = (byte)in_AX;
  bVar2 = (byte)((ushort)in_AX >> 8);
  uVar8 = (ulonglong)((uint)&stack0x00000000 & unaff_ESI);
  pcVar6 = (char *)(ulonglong)CONCAT22((char)bVar2 >> 7,CONCAT11(bVar2 | bVar4,bVar4));
  pbVar1 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x62);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + param_1;
  *pcVar6 = (*pcVar6 - bVar4) - CARRY1(bVar2,param_1);
  *(undefined2 *)(uVar8 - 4) = in_CS;
  *(undefined4 *)(uVar8 - 8) = 0x404b3eb2;
  pcVar6 = (char *)(*(code *)(unaff_RDI + 0x3dac0018))();
  *param_4 = *param_4;
  *pcVar6 = *pcVar6 + (char)pcVar6;
  pbVar1 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x62);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + param_1;
  *pcVar6 = (*pcVar6 - (char)pcVar6) - CARRY1(bVar2,param_1);
  *(undefined2 *)(uVar8 - 4) = in_CS;
  *(undefined4 *)(uVar8 - 8) = 0x404b3ec2;
  pcVar6 = (char *)(*(code *)(unaff_RDI + 0x3dac0018))();
  *param_4 = *param_4;
  bVar5 = (byte)pcVar6;
  *pcVar6 = *pcVar6 + bVar5;
  pbVar1 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x62);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  *pcVar6 = (*pcVar6 - bVar5) - CARRY1(bVar2,bVar5);
  *pcVar6 = (*pcVar6 - bVar5) - (((ulonglong)pcVar6 & 0x100) != 0);
  pbVar7 = (byte *)(ulonglong)(uint)(int)(short)pcVar6;
  bVar2 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar5;
  pbVar1 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x61b9ffe8);
  bVar4 = *pbVar1;
  bVar3 = *pbVar1;
  *pbVar1 = bVar3 + unaff_BL + CARRY1(bVar2,bVar5);
  *pbVar7 = (*pbVar7 - bVar5) -
            (CARRY1(bVar4,unaff_BL) || CARRY1(bVar3 + unaff_BL,CARRY1(bVar2,bVar5)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

