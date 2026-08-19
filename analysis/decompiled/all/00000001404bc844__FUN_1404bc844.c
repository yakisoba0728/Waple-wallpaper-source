// Function: FUN_1404bc844
// Addr: 1404bc844
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc844(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined2 uVar4;
  byte bVar5;
  uint uVar6;
  char cVar10;
  uint *in_RAX;
  undefined7 uVar11;
  char *pcVar8;
  int *piVar9;
  char cVar13;
  char *pcVar12;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  byte *pbVar7;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
       (char)((ulonglong)param_1 >> 8);
  uVar2 = ((ulonglong)in_RAX & 0xffffffff) *
          (ulonglong)
          *(uint *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                            CONCAT11((char)((ulonglong)param_2 >> 8) << 2,(char)param_2));
  pcVar3 = (char *)(uVar2 >> 0x20);
  uVar11 = (undefined7)((uVar2 & 0xffffffff) >> 8);
  bVar5 = (char)(uVar2 & 0xffffffff) + (char)param_1;
  pbVar7 = (byte *)CONCAT71(uVar11,bVar5);
  pcVar12 = (char *)(param_1 + -1);
  if (pcVar12 == (char *)0x0 || bVar5 == 0) {
    *pcVar12 = *pcVar12 + bVar5;
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar12;
    cRam00000001483bd1c3 = cRam00000001483bd1c3 + (char)pcVar12;
    *pbVar7 = *pbVar7 + bVar5;
    uRam000000011450c874 = uRam000000011450c874 & (uint)pbVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *pbVar7;
  *param_4 = *param_4;
  uVar6 = (int)CONCAT71(uVar11,bVar5 & bVar1) + 0x54050002;
  *(byte *)(ulonglong)uVar6 = *(byte *)(ulonglong)uVar6 | (byte)uVar6;
  *pcVar3 = *pcVar3 + '\x01';
  uVar4 = (undefined2)(uVar6 >> 0x10);
  cVar13 = (char)((ulonglong)pcVar12 >> 8);
  cVar10 = (char)(uVar6 >> 8) + cVar13;
  pcVar8 = (char *)CONCAT71((uint7)CONCAT21(uVar4,cVar10),0x4a);
  *pcVar12 = *pcVar12 + cVar10;
  *pcVar8 = *pcVar8 + 'J';
  pcVar8[0x260022fd] = pcVar8[0x260022fd] + (char)(uVar2 >> 0x20);
  *pcVar3 = *pcVar3 + '\x01';
  *pcVar12 = *pcVar12 + 'J';
  uVar6 = (uint)CONCAT71((uint7)CONCAT21(uVar4,cVar10 + cVar13),0x4a) |
          *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  piVar9 = (int *)(ulonglong)uVar6;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)pcVar12;
  *piVar9 = *piVar9 + (int)&stack0x00000000;
  cVar10 = (char)uVar6;
  *(char *)((longlong)piVar9 + unaff_RSI) = *(char *)((longlong)piVar9 + unaff_RSI) + cVar10;
  *(char *)piVar9 = (char)*piVar9 + cVar10;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & (uint)pcVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

