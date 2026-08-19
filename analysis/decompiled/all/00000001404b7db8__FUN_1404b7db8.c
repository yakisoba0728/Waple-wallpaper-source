// Function: FUN_1404b7db8
// Addr: 1404b7db8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7db8(char *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte bVar7;
  byte bVar8;
  undefined8 in_RAX;
  uint *puVar6;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  
  puVar6 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(char)in_RAX));
  uVar4 = (uint)puVar6 | *puVar6;
  bVar3 = (byte)uVar4;
  bVar7 = (byte)(uVar4 >> 8);
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(bVar7 + bVar3,bVar3));
  iVar5 = uVar4 + *(int *)(ulonglong)uVar4 + (uint)CARRY1(bVar7,bVar3);
  pbVar1 = (byte *)(param_2 * 2);
  bVar3 = *pbVar1;
  bVar8 = (byte)((uint)iVar5 >> 8);
  *pbVar1 = *pbVar1 + bVar8;
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x44a8ffe3);
  bVar7 = *pbVar1;
  bVar2 = *pbVar1;
  *pbVar1 = bVar2 + unaff_BH + CARRY1(bVar3,bVar8);
  *param_1 = *param_1 +
             (char)((iVar5 + -0x4b7ca400) -
                    (uint)(CARRY1(bVar7,unaff_BH) || CARRY1(bVar2 + unaff_BH,CARRY1(bVar3,bVar8)))
                   >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

