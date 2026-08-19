// Function: FUN_1404a2444
// Addr: 1404a2444
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404a24a6) overlaps instruction at (ram,0x0001404a24a5)
    */

void FUN_1404a2444(undefined1 *param_1,uint *param_2)

{
  int iVar1;
  uint3 uVar2;
  undefined3 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined8 in_RAX;
  uint *puVar7;
  char *pcVar8;
  char cVar9;
  byte bVar10;
  undefined6 uVar11;
  byte bVar12;
  uint unaff_EBX;
  char *unaff_RSI;
  longlong unaff_retaddr;
  
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  uVar11 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar10 = (byte)((ulonglong)param_1 >> 8);
  cVar9 = (char)param_1;
  *param_2 = *param_2 & unaff_EBX;
  puVar7 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),(ushort)(byte)in_RAX);
  uVar5 = (uint)puVar7 | *puVar7;
  uVar6 = uVar5 + 0x30000834;
  iVar1 = uVar5 + 0x4421087e;
  uVar2 = (uint3)((uint)(CONCAT31((int3)((uint)iVar1 >> 8),(char)iVar1 + -0xc) + 0x5f000a54) >> 8);
  cVar4 = *unaff_RSI;
  if (cVar4 == '\0') {
    pcVar8 = (char *)((ulonglong)uVar2 << 8 ^ 8);
    *pcVar8 = *pcVar8 + bVar12;
    uVar6 = CONCAT31(uVar2,8);
    uVar5 = uVar6 + 0x21004a;
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
    bVar10 = bVar10 ^ bVar12;
  }
  else {
    *param_1 = *param_1;
    *(char *)(ulonglong)CONCAT31(uVar2,cVar4) = *(char *)(ulonglong)CONCAT31(uVar2,cVar4) + cVar4;
    *(char *)(unaff_retaddr + -0xb) = *(char *)(unaff_retaddr + -0xb) + (char)unaff_EBX;
    cVar4 = unaff_RSI[1];
    uVar5 = CONCAT31(uVar2,cVar4);
    pcVar8 = (char *)(ulonglong)uVar5;
    if (cVar4 != '\0') {
      *param_1 = *param_1;
      *pcVar8 = *pcVar8 + cVar9;
      *pcVar8 = *pcVar8 + cVar4;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *pcVar8 = *pcVar8;
    *pcVar8 = *pcVar8 + bVar12;
  }
  uVar5 = CONCAT22((short)(uVar5 + 0x1a21004a >> 0x10),(ushort)(byte)(uVar5 + 0x1a21004a));
  iVar1 = (uVar5 | *(uint *)(ulonglong)uVar5) + 0x2421087e;
  uVar3 = (undefined3)
          ((uint)(CONCAT31((int3)((uint)iVar1 >> 8),(char)iVar1 + -0xc) + 0x3f000a54) >> 8);
  cVar4 = in(0x23);
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar3,cVar4);
  *(char *)CONCAT62(uVar11,CONCAT11(bVar10,cVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(bVar10,cVar9)) + -8;
  *pcVar8 = *pcVar8 + cVar4;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)(unaff_EBX >> 8);
  cVar4 = in(0x23);
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar3,cVar4);
  *(char *)CONCAT62(uVar11,CONCAT11(bVar10,cVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(bVar10,cVar9)) + -8;
  *pcVar8 = *pcVar8 + cVar9;
  *pcVar8 = *pcVar8 + cVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

