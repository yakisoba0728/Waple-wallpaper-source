// Function: FUN_1404a2454
// Addr: 1404a2454
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404a24a6) overlaps instruction at (ram,0x0001404a24a5)
    */

void FUN_1404a2454(undefined1 *param_1,undefined8 param_2)

{
  int iVar1;
  uint3 uVar2;
  undefined3 uVar3;
  char cVar4;
  uint uVar5;
  char *in_RAX;
  char *pcVar6;
  char cVar7;
  byte bVar8;
  undefined6 uVar9;
  byte bVar10;
  char unaff_BL;
  char unaff_BH;
  char *unaff_RSI;
  longlong unaff_retaddr;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  uVar9 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar8 = (byte)((ulonglong)param_1 >> 8);
  cVar7 = (char)param_1;
  iVar1 = (int)in_RAX + 0x1421004a;
  uVar2 = (uint3)((uint)(CONCAT31((int3)((uint)iVar1 >> 8),(char)iVar1 + -0xc) + 0x5f000a54) >> 8);
  cVar4 = *unaff_RSI;
  if (cVar4 == '\0') {
    pcVar6 = (char *)((ulonglong)uVar2 << 8 ^ 8);
    *pcVar6 = *pcVar6 + bVar10;
    in_RAX = (char *)(ulonglong)CONCAT31(uVar2,8);
    uVar5 = CONCAT31(uVar2,8) + 0x21004a;
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
    bVar8 = bVar8 ^ bVar10;
  }
  else {
    *param_1 = *param_1;
    *(char *)(ulonglong)CONCAT31(uVar2,cVar4) = *(char *)(ulonglong)CONCAT31(uVar2,cVar4) + cVar4;
    *(char *)(unaff_retaddr + -0xb) = *(char *)(unaff_retaddr + -0xb) + unaff_BL;
    cVar4 = unaff_RSI[1];
    uVar5 = CONCAT31(uVar2,cVar4);
    pcVar6 = (char *)(ulonglong)uVar5;
    if (cVar4 != '\0') {
      *param_1 = *param_1;
      *pcVar6 = *pcVar6 + cVar7;
      *pcVar6 = *pcVar6 + cVar4;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *pcVar6 = *pcVar6;
    *pcVar6 = *pcVar6 + bVar10;
  }
  uVar5 = CONCAT22((short)(uVar5 + 0x1a21004a >> 0x10),(ushort)(byte)(uVar5 + 0x1a21004a));
  iVar1 = (uVar5 | *(uint *)(ulonglong)uVar5) + 0x2421087e;
  uVar3 = (undefined3)
          ((uint)(CONCAT31((int3)((uint)iVar1 >> 8),(char)iVar1 + -0xc) + 0x3f000a54) >> 8);
  cVar4 = in(0x23);
  pcVar6 = (char *)(ulonglong)CONCAT31(uVar3,cVar4);
  *(char *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) + -8;
  *pcVar6 = *pcVar6 + cVar4;
  *in_RAX = *in_RAX + unaff_BH;
  cVar4 = in(0x23);
  pcVar6 = (char *)(ulonglong)CONCAT31(uVar3,cVar4);
  *(char *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) + -8;
  *pcVar6 = *pcVar6 + cVar7;
  *pcVar6 = *pcVar6 + cVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

