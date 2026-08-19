// Function: FUN_1404a6ddc
// Addr: 1404a6ddc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6ddc(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined3 uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint *in_RAX;
  char *pcVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar11;
  byte bVar12;
  undefined6 uVar13;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint *unaff_RSI;
  longlong unaff_RDI;
  char acStack_8 [8];
  byte *pbVar10;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  cVar2 = (char)param_2 * '\x02';
  *in_RAX = *in_RAX | (uint)in_RAX;
  uVar6 = (uint)in_RAX ^ 0x9d2;
  acStack_8[0] = 'J';
  acStack_8[1] = '\0';
  acStack_8[2] = '\0';
  acStack_8[3] = '\0';
  acStack_8[4] = '\0';
  acStack_8[5] = '\0';
  acStack_8[6] = '\0';
  acStack_8[7] = '\0';
  bVar1 = *param_1;
  bVar5 = (byte)(uVar6 >> 8);
  *param_1 = *param_1 + bVar5;
  uVar6 = uVar6 + CARRY1(bVar1,bVar5) + 0xf8f90a06;
  pcVar7 = (char *)(ulonglong)uVar6;
  cVar4 = (char)uVar6;
  cRam00000000d04a712d = cRam00000000d04a712d + cVar4;
  bVar1 = (byte)param_1 & 7;
  *param_1 = *param_1 >> bVar1 | *param_1 << 8 - bVar1;
  *(char *)(unaff_RDI + -0x37fff62e) = *(char *)(unaff_RDI + -0x37fff62e) + unaff_BH;
  uVar9 = *(int *)CONCAT62(uVar13,CONCAT11(bVar12,cVar2)) * 0x21;
  pbVar10 = (byte *)(ulonglong)uVar9;
  *pcVar7 = *pcVar7 + cVar4;
  pcVar7[-0x40fff62e] = pcVar7[-0x40fff62e] + cVar2;
  bVar5 = (byte)uVar9;
  bVar1 = bVar5 & 7;
  *pbVar10 = *pbVar10 >> bVar1 | *pbVar10 << 8 - bVar1;
  uVar3 = (undefined3)(uVar6 >> 8);
  bVar5 = cVar4 + bVar5;
  uVar9 = *(int *)CONCAT62(uVar13,CONCAT11(bVar12,cVar2)) * 0x21;
  puVar11 = (uint *)(ulonglong)uVar9;
  uVar6 = CONCAT31(uVar3,bVar5 | *(byte *)((ulonglong)CONCAT31(uVar3,bVar5) * 2));
  bVar1 = *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (ulonglong)uVar6);
  uVar6 = uVar6 + 0xd0000234;
  puVar8 = (uint *)(ulonglong)uVar6;
  bVar5 = (byte)uVar9 & 0x1f;
  *puVar11 = *puVar11 >> bVar5 | *puVar11 << 0x20 - bVar5;
  cVar4 = (char)uVar6;
  acStack_8[CONCAT62(uVar13,CONCAT11(bVar12 | bVar1,cVar2)) * 8] =
       acStack_8[CONCAT62(uVar13,CONCAT11(bVar12 | bVar1,cVar2)) * 8] + cVar4;
  *puVar8 = *puVar8 | uVar6;
  *puVar8 = *puVar8 & uVar6;
  *(char *)puVar8 = (char)*puVar8 + cVar4;
  *puVar8 = *puVar8 | uVar6;
  uVar6 = CONCAT31((int3)(uVar6 >> 8),cVar4 + -0x2c);
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 | uVar6;
  *unaff_RSI = *unaff_RSI & uVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

