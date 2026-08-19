// Function: FUN_1404a2468
// Addr: 1404a2468
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404a24a6) overlaps instruction at (ram,0x0001404a24a5)
    */

void FUN_1404a2468(char *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined3 uVar3;
  uint7 uVar4;
  char cVar5;
  undefined8 in_RAX;
  char *pcVar6;
  char cVar7;
  byte bVar8;
  undefined6 uVar9;
  byte bVar10;
  char unaff_BL;
  char unaff_BH;
  char *unaff_RSI;
  longlong unaff_retaddr;
  char *pcStackX_8;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  uVar9 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar8 = (byte)((ulonglong)param_1 >> 8);
  cVar7 = (char)param_1;
  uVar4 = (uint7)((ulonglong)in_RAX >> 8);
  cVar5 = *unaff_RSI;
  if (cVar5 == '\0') {
    pcVar6 = (char *)((ulonglong)uVar4 << 8 ^ 8);
    *pcVar6 = *pcVar6 + bVar10;
    pcStackX_8 = (char *)CONCAT71(uVar4,8);
    uVar1 = (int)pcStackX_8 + 0x21004a;
    pcVar6 = (char *)(ulonglong)uVar1;
    *pcVar6 = *pcVar6 + (char)uVar1;
    bVar8 = bVar8 ^ bVar10;
  }
  else {
    *param_1 = *param_1 + '\b';
    *(char *)CONCAT71(uVar4,cVar5) = *(char *)CONCAT71(uVar4,cVar5) + cVar5;
    *(char *)(unaff_retaddr + -0xb) = *(char *)(unaff_retaddr + -0xb) + unaff_BL;
    cVar5 = unaff_RSI[1];
    pcVar6 = (char *)CONCAT71(uVar4,cVar5);
    if (cVar5 != '\0') {
      *param_1 = *param_1 + '\b';
      *pcVar6 = *pcVar6 + cVar7;
      *pcVar6 = *pcVar6 + cVar5;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *pcVar6 = *pcVar6;
    *pcVar6 = *pcVar6 + bVar10;
  }
  iVar2 = (int)pcVar6 + 0x1a21004a;
  uVar1 = CONCAT22((short)((uint)iVar2 >> 0x10),(ushort)(byte)iVar2);
  iVar2 = (uVar1 | *(uint *)(ulonglong)uVar1) + 0x2421087e;
  uVar3 = (undefined3)
          ((uint)(CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 + -0xc) + 0x3f000a54) >> 8);
  cVar5 = in(0x23);
  pcVar6 = (char *)(ulonglong)CONCAT31(uVar3,cVar5);
  *(undefined1 *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) =
       *(undefined1 *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7));
  *pcVar6 = *pcVar6 + cVar5;
  *pcStackX_8 = *pcStackX_8 + unaff_BH;
  cVar5 = in(0x23);
  pcVar6 = (char *)(ulonglong)CONCAT31(uVar3,cVar5);
  *(undefined1 *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) =
       *(undefined1 *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7));
  *pcVar6 = *pcVar6 + cVar7;
  *pcVar6 = *pcVar6 + cVar5;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

