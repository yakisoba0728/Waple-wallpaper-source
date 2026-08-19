// Function: FUN_1404d3830
// Addr: 1404d3830
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3830(undefined8 param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  int in_EAX;
  uint uVar8;
  char *pcVar9;
  ulonglong uVar10;
  
  lVar3 = (longlong)iRam000000017e45883b;
  lVar5 = CONCAT44(param_2,in_EAX + -0x1ffffe98);
  pcVar9 = (char *)(lVar5 / lVar3 & 0xffffffff);
  cVar6 = (char)pcVar9;
  pcVar9[0x210049e1] = pcVar9[0x210049e1] + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  uVar4 = (longlong)
          (lVar5 % lVar3 << 0x20 |
          CONCAT71((int7)((ulonglong)pcVar9 >> 8),cVar6 + (char)((ulonglong)pcVar9 >> 8))) /
          (longlong)iRam000000017e45884b;
  uVar10 = uVar4 & 0xffffffff;
  pbVar1 = (byte *)(uVar10 + 0x10049e1);
  bVar2 = *pbVar1;
  bVar7 = (byte)uVar10;
  *pbVar1 = *pbVar1 + bVar7;
  uVar8 = ((int)uVar4 + 0x77e2fff9) - (uint)CARRY1(bVar2,bVar7);
  *(int *)(ulonglong)uVar8 = *(int *)(ulonglong)uVar8 + uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

