// Function: FUN_1404b0930
// Addr: 1404b0930
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0930(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte *in_RAX;
  char cVar8;
  byte bVar9;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  uint *puVar7;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  cVar8 = (char)param_2;
  *in_RAX = *in_RAX ^ (byte)param_1;
  *param_4 = *param_4;
  *in_RAX = *in_RAX + (char)in_RAX;
  pbVar1 = in_RAX + -0x7a;
  bVar4 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  uVar5 = (int)in_RAX + 0x15868f00 + (uint)CARRY1(bVar4,unaff_BH);
  puVar7 = (uint *)(ulonglong)uVar5;
  *(byte *)puVar7 = (byte)*puVar7 + bVar9;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | (byte)param_1;
  *puVar7 = *puVar7 & uVar5;
  uVar6 = *puVar7;
  bVar4 = (byte)uVar5;
  uVar3 = *puVar7;
  *(byte *)puVar7 = (byte)*puVar7 + bVar4;
  if (!SCARRY1((byte)uVar3,bVar4)) {
    uVar6 = uVar5 + 0x15867800 + (uint)CARRY1((byte)uVar6,bVar4);
    pbVar1 = (byte *)(ulonglong)uVar6 + unaff_RBP + 0x21004b;
    *pbVar1 = *pbVar1 + cVar8;
    uVar6 = CONCAT22((short)(uVar6 >> 0x10),
                     CONCAT11((char)(uVar6 >> 8) * '\x02' + cVar8,
                              (byte)uVar6 | *(byte *)(ulonglong)uVar6));
    uVar6 = uVar6 | *(uint *)(ulonglong)uVar6;
    *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + bVar9;
    *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)(uVar6 >> 8);
    pcVar2 = (char *)((ulonglong)uVar6 + param_1);
    *pcVar2 = *pcVar2 + bVar9;
    pbVar1 = (byte *)((ulonglong)uVar6 - 0x7a);
    bVar4 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar9;
    pcVar2 = (char *)(unaff_RBP + 0x1a21004b +
                     (ulonglong)(uVar6 + 0x15867800 + (uint)CARRY1(bVar4,bVar9)));
    *pcVar2 = *pcVar2 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

